/*
 * SuperCop glue code for Serpent-SSE2-8way
 *
 * Public domain, 2013/03/06
 * Jussi Kivilinna
 */

#include "crypto_stream.h"
#include <stdlib.h>
#include "api.h"
#include "serpent.h"

#define unlikely(x)	(!__builtin_expect(!(x),1))
#define likely(x)	(__builtin_expect(!!(x),1))

#define BLOCKSIZE 16

typedef struct {
	uint64_t ll[2];
} uint128_t;

static inline void bswap128(uint128_t *dst, const uint128_t *src)
{
	uint64_t tmp;

	tmp = __builtin_bswap64(src->ll[1]);
	dst->ll[1] = __builtin_bswap64(src->ll[0]);
	dst->ll[0] = tmp;
}

static inline void inc128(uint128_t *u)
{
	__asm__ (
		"addq $1, %[ll0];\n"
		"adcq $0, %[ll1];\n"
		: [ll0] "=g" (u->ll[0]), [ll1] "=g" (u->ll[1])
		: "0" (u->ll[0]), "1" (u->ll[1])
		:
	);
}

static inline void add128(uint128_t *dst, const uint128_t *src, uint64_t add)
{
	__asm__ (
		"addq %[add], %[ll0];\n"
		"adcq $0, %[ll1];\n"
		: [ll0] "=g" (dst->ll[0]), [ll1] "=g" (dst->ll[1])
		: "0" (src->ll[0]), "1" (src->ll[1]), [add] "cg" (add)
		:
	);
}

static inline void xor128(uint128_t *dst, const uint128_t *src1, const uint128_t *src2)
{
	__asm__ (
		"movdqu %[s1], %%xmm0;\n"
		"pxor %[s2], %%xmm0;\n"
		"movdqu %%xmm0, %[d];\n"
		: [d] "=m" (*dst)
		: [s1] "m" (*src1), [s2] "m" (*src2)
		: "xmm0", "memory"
	);
}

#define move128(dst, src) ({ \
	__asm__ ("movdqu %[s], %%xmm0;\n" \
		 "movdqu %%xmm0, %[d];\n" \
		 : [d] "=m" (*(dst)) \
		 : [s] "m" (*(src)) \
		 : "xmm0", "memory" \
	);})

#include <emmintrin.h>

#define TRANSPOSE4(row0, row1, row2, row3)                      \
  do {                                                          \
    __m128 tmp3, tmp2, tmp1, tmp0;                              \
    tmp0 = _mm_unpacklo_ps(*(__m128*)(row0), *(__m128*)(row1)); \
    tmp2 = _mm_unpacklo_ps(*(__m128*)(row2), *(__m128*)(row3)); \
    tmp1 = _mm_unpackhi_ps(*(__m128*)(row0), *(__m128*)(row1)); \
    tmp3 = _mm_unpackhi_ps(*(__m128*)(row2), *(__m128*)(row3)); \
    _mm_store_pd((double*)row0,(__m128d)_mm_movelh_ps(tmp0, tmp2)); \
    _mm_store_pd((double*)row1,(__m128d)_mm_movehl_ps(tmp2, tmp0));      \
    _mm_store_pd((double*)row2,(__m128d)_mm_movelh_ps(tmp1, tmp3));     \
    _mm_store_pd((double*)row3,(__m128d)_mm_movehl_ps(tmp3, tmp1));      \
  } while (0)

#include <stdio.h>
void print128hex(__m128i toPrint) {
  char * bytearray = (char *) &toPrint;
  for(int i = 0; i < 16; i++) printf("%02hhx", bytearray[i]);
  printf("\n");
}

int crypto_stream_xor(unsigned char *out, const unsigned char *in,
		      unsigned long long inlen, const unsigned char *n,
		      const unsigned char *k)
{
#define CTX_TYPE struct serpent_ctx
#define PTR_ALIGN(ptr, mask) ((void *)((((long)(ptr)) + (mask)) & ~((long)(mask))))
	const unsigned long align = 16;
	char ctxbuf[sizeof(CTX_TYPE) + align];
	CTX_TYPE *ctx = PTR_ALIGN(ctxbuf, align - 1);
	uint128_t iv;
	uint128_t ivs[8];

	serpent_init(ctx, k, CRYPTO_KEYBYTES);
	bswap128(&iv, (const uint128_t *)n); /* be => le */

    
    __m128i keys[4*33];
    for (int i = 0; i < 4 * 33; i++)
      keys[i] = _mm_set1_epi32(ctx->expkey[i]);


	while (likely(inlen >= BLOCKSIZE * 8)) {
		bswap128(&ivs[0], &iv); /* le => be */
		add128(&ivs[1], &iv, 1);
		bswap128(&ivs[1], &ivs[1]); /* le => be */
		add128(&ivs[2], &iv, 2);
		bswap128(&ivs[2], &ivs[2]); /* le => be */
		add128(&ivs[3], &iv, 3);
		bswap128(&ivs[3], &ivs[3]); /* le => be */
		add128(&ivs[4], &iv, 4);
		bswap128(&ivs[4], &ivs[4]); /* le => be */
		add128(&ivs[5], &iv, 5);
		bswap128(&ivs[5], &ivs[5]); /* le => be */
		add128(&ivs[6], &iv, 6);
		bswap128(&ivs[6], &ivs[6]); /* le => be */
		add128(&ivs[7], &iv, 7);
		bswap128(&ivs[7], &ivs[7]); /* le => be */
		add128(&iv, &iv, 8);

        TRANSPOSE4(ivs[0].ll,ivs[1].ll,ivs[2].ll,ivs[3].ll);
        TRANSPOSE4(ivs[4].ll,ivs[5].ll,ivs[6].ll,ivs[7].ll);
        Serpent__(ivs, &ivs[4], keys, out, &((__m128i*)out)[4]);
        TRANSPOSE4(&((uint128_t *)out)[0],&((uint128_t *)out)[1],
                   &((uint128_t *)out)[2],&((uint128_t *)out)[3]);
        TRANSPOSE4(&((uint128_t *)out)[4],&((uint128_t *)out)[5],
                   &((uint128_t *)out)[6],&((uint128_t *)out)[7]);

		if (in) {
          ((__m128i*)out)[0] = _mm_xor_si128(((__m128i*)out)[0], ((__m128i*)in)[0]);
          ((__m128i*)out)[1] = _mm_xor_si128(((__m128i*)out)[1], ((__m128i*)in)[1]);
          ((__m128i*)out)[2] = _mm_xor_si128(((__m128i*)out)[2], ((__m128i*)in)[2]);
          ((__m128i*)out)[3] = _mm_xor_si128(((__m128i*)out)[3], ((__m128i*)in)[3]);
          ((__m128i*)out)[4] = _mm_xor_si128(((__m128i*)out)[4], ((__m128i*)in)[4]);
          ((__m128i*)out)[5] = _mm_xor_si128(((__m128i*)out)[5], ((__m128i*)in)[5]);
          ((__m128i*)out)[6] = _mm_xor_si128(((__m128i*)out)[6], ((__m128i*)in)[6]);
          ((__m128i*)out)[7] = _mm_xor_si128(((__m128i*)out)[7], ((__m128i*)in)[7]);
			/* xor128(&((uint128_t *)out)[0], &((uint128_t *)out)[0], &((uint128_t *)in)[0]); */
			/* xor128(&((uint128_t *)out)[1], &((uint128_t *)out)[1], &((uint128_t *)in)[1]); */
			/* xor128(&((uint128_t *)out)[2], &((uint128_t *)out)[2], &((uint128_t *)in)[2]); */
			/* xor128(&((uint128_t *)out)[3], &((uint128_t *)out)[3], &((uint128_t *)in)[3]); */
			/* xor128(&((uint128_t *)out)[4], &((uint128_t *)out)[4], &((uint128_t *)in)[4]); */
			/* xor128(&((uint128_t *)out)[5], &((uint128_t *)out)[5], &((uint128_t *)in)[5]); */
			/* xor128(&((uint128_t *)out)[6], &((uint128_t *)out)[6], &((uint128_t *)in)[6]); */
			/* xor128(&((uint128_t *)out)[7], &((uint128_t *)out)[7], &((uint128_t *)in)[7]); */
			in += BLOCKSIZE * 8;
		}

		out += BLOCKSIZE * 8;
		inlen -= BLOCKSIZE * 8;
	}

	if (unlikely(inlen > 0)) {
		unsigned int nblock = inlen / BLOCKSIZE;
		unsigned int lastlen = inlen % BLOCKSIZE;
		unsigned int i, j;

		for (i = 0; i < nblock + !!lastlen; i++) {
			bswap128(&ivs[i], &iv); /* le => be */
			inc128(&iv);
		}
		for (; i < 8; i++) {
			ivs[i].ll[0] = 0;
			ivs[i].ll[1] = 0;
		}

        TRANSPOSE4(ivs[0].ll,ivs[1].ll,ivs[2].ll,ivs[3].ll);
        TRANSPOSE4(ivs[4].ll,ivs[5].ll,ivs[6].ll,ivs[7].ll);
        Serpent__(ivs, &ivs[4], keys, ivs, &ivs[4]);
        TRANSPOSE4(&((uint128_t *)ivs)[0],&((uint128_t *)ivs)[1],
                   &((uint128_t *)ivs)[2],&((uint128_t *)ivs)[3]);
        TRANSPOSE4(&((uint128_t *)ivs)[4],&((uint128_t *)ivs)[5],
                   &((uint128_t *)ivs)[6],&((uint128_t *)ivs)[7]);

		if (in) {
			for (i = 0; inlen >= BLOCKSIZE; i++) {
				xor128((uint128_t *)out, (uint128_t *)in, &ivs[i]);

				inlen -= BLOCKSIZE;
				in += BLOCKSIZE;
				out += BLOCKSIZE;
			}

			for (j = 0; j < inlen; j++)
				out[j] = in[j] ^ ((uint8_t*)&ivs[i])[j];
		} else {
			for (i = 0; inlen >= BLOCKSIZE; i++) {
				move128((uint128_t *)out, &ivs[i]);

				inlen -= BLOCKSIZE;
				out += BLOCKSIZE;
			}

			for (j = 0; j < inlen; j++)
				out[j] = ((uint8_t*)&ivs[i])[j];
		}
	}

	return 0;
}

int crypto_stream(unsigned char *out, unsigned long long outlen,
		  const unsigned char *n,const unsigned char *k)
{
	return crypto_stream_xor(out, NULL, outlen, n, k);
}
