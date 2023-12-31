#include<cstdlib>
#include<cstdio>
#include <stdint.h>
#include <array>

using namespace std;

static double pow2_double(long n) // compute 2^n as double
{
  double res = 1;
  long abs_n = std::labs(n);

  for (long i = 0; i < abs_n; i++)
    res *= 2;
  if (n < 0)
    res = 1 / res;
  return res;
}
