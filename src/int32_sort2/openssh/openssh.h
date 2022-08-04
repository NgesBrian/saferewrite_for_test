#include <inttypes.h>

// excerpt from https://cvsweb.openbsd.org/cgi-bin/cvsweb/src/usr.bin/ssh/sntrup761.c?rev=1.5&content-type=text/x-cvsweb-markup

#define int32_MINMAX(a,b) \
do { \
  int64_t ab = (int64_t)b ^ (int64_t)a; \
  int64_t c = (int64_t)b - (int64_t)a; \
  c ^= ab & (c ^ b); \
  c >>= 31; \
  c &= ab; \
  a ^= c; \
  b ^= c; \
} while(0)
