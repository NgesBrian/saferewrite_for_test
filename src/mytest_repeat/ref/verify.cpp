#include <stdio.h>

int verify(unsigned int *x, unsigned int *y)
{
  for (int i = 0;i < 64;++i)
    if (x[i] != y[i])
      return -1;
  return 0;
}
