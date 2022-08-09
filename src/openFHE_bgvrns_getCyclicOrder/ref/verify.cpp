#include <stdio.h>
#include <vector>
#include <array>

typedef unsigned int usint;
uint64_t getCyclicOrder( uint32_t ringDimension, unsigned int plainModulus,
                                                    unsigned int scalTech){
    // Moduli need to be primes that are 1 (mod 2n)
    usint cyclOrder          = 2 * ringDimension;
    uint64_t lcmCyclOrderPtm = 0;

    if (1) {
        // In FIXEDAUTO, moduli also need to be 1 (mod t)
        usint plaintextModulus = plainModulus;
        usint pow2ptm          = 1;  // The largest power of 2 dividing ptm (check whether it
                                     // is larger than cyclOrder or not)
       /* while (plaintextModulus % 2 == 0) {
            plaintextModulus >>= 1;
            pow2ptm <<= 1;
        }

        lcmCyclOrderPtm = (uint64_t)pow2ptm * plaintextModulus;*/
    }
    else {
        lcmCyclOrderPtm = cyclOrder;
    }
    return lcmCyclOrderPtm;
}
