#include <stdio.h>
#include <vector>
#include <array>
using namespace std;

typedef unsigned int usint;

int ModInverse(usint a, usint b) {
    // usint b0 = b;
    usint t, q;
    usint x0 = 0, x1 = 1;
    if (b == 1)
        return 1;
    while (a > 1) {
        q = a / b;
        t = b, b = a % b, a = t;
        t = x0, x0 = x1 - q * x0, x1 = t;
    }
    // if (x1 < 0) x1 += b0;
    // TODO: x1 is never < 0

    return x1;
}
