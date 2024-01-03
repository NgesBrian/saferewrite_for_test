#include <cstdlib>
#include <random>
#include <cassert>
#include <limits.h>

using namespace std;

int32_t modSwitchToTorus32(unsigned int mu, unsigned int msize){
    uint64_t interv = ((UINT64_C(1)<<63)/msize)*2; // width of each intervall
    uint64_t phase64 = mu*interv;
    //floor to the nearest multiples of interv
    return phase64;
}
