#include <stdio.h>
#include <vector>
#include "seal/modulus.h"
using namespace std;

typedef unsigned long uint64_t;

int get_primes(uint64_t factor, unsigned int bitsize,size_t count)
{
#ifdef SEAL_DEBUG
            if (!count)
            {
                throw invalid_argument("count must be positive");
            }
            if (bit_size > SEAL_MOD_BIT_COUNT_MAX || bit_size < SEAL_MOD_BIT_COUNT_MIN)
            {
                throw invalid_argument("bit_size is invalid");
            }
#endif
    // Start with (2^bit_size - 1) / factor * factor + 1
	uint64_t value = ((uint64_t(0x1) << bitsize) - 1) / factor * factor + 1;
	uint64_t lower_bound = uint64_t(0x1) << (bitsize - 1);
	vector<Modulus> destination;
    // Start with (2^bit_size - 1) / factor * factor + 1
    uint64_t value = ((uint64_t(0x1) << bit_size) - 1) / factor * factor + 1;
    uint64_t lower_bound = uint64_t(0x1) << (bit_size - 1);
    while (count > 0 && value > lower_bound)
    {
     	Modulus new_mod(value);
        if (new_mod.is_prime())
        {
             destination.emplace_back(move(new_mod));
             count--;
        }
         value -= factor;
    }
	return 0;
}

int verify(unsigned long factor, unsigned int bitsize){
	return get_primes(factor, bitsize, 64);
} 
