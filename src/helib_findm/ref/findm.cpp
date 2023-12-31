#include <cstring>
#include <algorithm>
#include <optional>
#include<cstdlib>
#include<cstdio>
#include <stdint.h>
#include <array>

using namespace std;

long FindM(long k,
           long nBits,
           long c,
           long p,
           long d,
           long s,
           long chosen_m,
           bool verbose)
{
  // get a lower-bound on the parameter N=phi(m):
  // 1. Each level in the modulus chain corresponds to pSize=p2Size/2
  //    bits (where we have one prime of this size, and all the others are of
  //    size p2Size).
  //    When using DoubleCRT, we need 2m to divide q-1 for every prime q.
  // 2. With nBits of ctxt primes,
  //    the largest modulus for "fresh ciphertexts" has size
  //          Q0 ~ 2^{nBits}
  // 3. We break each ciphertext into upto c digits, do each digit is as large
  //    as    D=2^{nBits/c}
  // 4. The added noise variance term from the key-switching operation is
  //    c*N*sigma^2*D^2, and this must be mod-switched down to w*N (so it is
  //    on par with the added noise from modulus-switching). Hence the ratio
  //    P that we use for mod-switching must satisfy c*N*sigma^2*D^2/P^2<w*N,
  //    or    P > sqrt(c/w) * sigma * 2^{(L+1)*pSize/c}
  // 5. With this extra P factor, the key-switching matrices are defined
  //    relative to a modulus of size
  //          Q0 = q0*P ~ sqrt{c/w} sigma 2^{nBits*(1+1/c)}
  // 6. To get k-bit security we need N>log(Q0/sigma)(k+110)/7.2, i.e. roughly
  //          N > nBits*(1+1/c)(k+110) / 7.2

  // Compute a bound on m, and make sure that it is not too large
  double cc = 1.0 + (1.0 / static_cast<double>(c));

  double dN = ceil(nBits * cc * (k + 110) / 7.2);
  // FIXME: the bound for dN is not conservative enough...
  // this should be re-worked.

  long N = NTL_SP_BOUND;
  if (N > dN)
    N = dN;
  else {
    std::stringstream ss;
    ss << "Cannot support a bound of " << dN;
    throw RuntimeError(ss.str());
  }

  long m = 0;
  size_t i = 0;

  // find the first m satisfying phi(m)>=N and d | ord(p) in Z_m^*
  // and phi(m)/ord(p) >= s
  if (chosen_m) {
    if (NTL::GCD(p, chosen_m) == 1) {
      long ordP = multOrd(p, chosen_m);
      if (d == 0 || ordP % d == 0) {
        // chosen_m is OK
        m = chosen_m;
      }
    }
  } else if (p == 2) { // use pre-computed table, divisors of 2^n-1 for some n's

    // clang-format off
    static long ms[][4] = {
        // pre-computed values of [phi(m),m,d]
        // phi(m),     m, ord(2),c_m*1000 (not used anymore)
          {  1176,  1247,     28,  3736}, // gens=5(42)
          {  2880,  3133,     24,  3254}, // gens=6(60), 7(!2)
          {  4050,  4051,     50,     0}, // gens=130(81)
          {  4096,  4369,     16,  3422}, // gens=129(16),3(!16)
          {  4704,  4859,     28,     0}, // gens=7(42),3(!4)
          {  5292,  5461,     14,  4160}, // gens=3(126),509(3)
          {  5760,  8435,     24,  8935}, // gens=58(60),1686(2),11(!2)
          {  7500,  7781,     50,     0}, // gens=353(30),3(!5)
          {  8190,  8191,     13,  1273}, // gens=39(630)
          {  9900, 10261,     30,     0}, // gens=3(330)
          { 10752, 11441,     48,  3607}, // gens=7(112),5(!2)
          { 10800, 11023,     45,     0}, // gens=270(24),2264(2),3(!5)
          { 12000, 13981,     20,  2467}, // gens=10(30),23(10),3(!2)
          { 11520, 15665,     24, 14916}, // gens=6(60),177(4),7(!2)
          { 14112, 14351,     18,     0}, // gens=7(126),3(!4)
          { 15004, 15709,     22,  3867}, // gens=5(682)
          { 18000, 18631,     25,  4208}, // gens=17(120),1177(6)
          { 15360, 20485,     24, 12767}, // gens=6(80),242(4),7(2)
          { 16384, 21845,     16, 12798}, // gens=129(16),273(4),3(!16)
          { 17280, 21931,     24, 18387}, // gens=6(60),467(6),11(!2)
          { 19200, 21607,     40, 35633}, // gens=13(120),2789(2),3(!2)
          { 21168, 27305,     28, 15407}, // gens=6(126),781(6)
          { 23040, 23377,     48,  5292}, // gens=35(240),5(!2)
          { 23310, 23311,     45,     0}, // gens=489(518)
          { 24576, 24929,     48,  5612}, // gens=12(256),5(!2)
          { 27000, 32767,     15, 20021}, // gens=3(150),873(6),6945(2)
          { 31104, 31609,     72,  5149}, // gens=11(216),5(!2)
          { 43690, 43691,     34,     0}, // gens=69(1285)
          { 49500, 49981,     30,     0}, // gens=3(1650)
          { 46080, 53261,     24, 33409}, // gens=3(240),242(4),7(!2)
          { 54000, 55831,     25,     0}, // gens=22(360),3529(6)
          { 49140, 57337,     39,  2608}, // gens=39(630),40956(2)
          { 51840, 59527,     72, 21128}, // gens=58(60),1912(6),7(!2)
          { 61680, 61681,     40,  1273}, // gens=33(771),17(!2)
          { 65536, 65537,     32,  1273}, // gens=2(32),3(!2048)
          { 75264, 82603,     56, 36484}, // gens=3(336),24294(2),7(!2)
          { 84672, 92837,     56, 38520}  // gens=18(126),1886(6),3(!2)
    };
    // clang-format on
    for (i = 0; i < sizeof(ms) / sizeof(long[4]); i++) {
      if (ms[i][0] < N || NTL::GCD(p, ms[i][1]) != 1)
        continue;
      long ordP = multOrd(p, ms[i][1]);
      long nSlots = ms[i][0] / ordP;
      if (d != 0 && ordP % d != 0)
        continue;
      if (nSlots < s)
        continue;

      m = ms[i][1];
      break;
    }
  }

  // If m is not set yet, just set it close to N. This may be a lousy
  // choice of m for this p, since you will get a small number of slots.

  if (m == 0) {
    // search only for odd values of m, to make phi(m) a little closer to m
    for (long candidate = N | 1; candidate < 10 * N; candidate += 2) {
      if (NTL::GCD(p, candidate) != 1)
        continue;

      long ordP = multOrd(p, candidate); // the multiplicative order of p mod m
      if (d > 1 && ordP % d != 0)
        continue;
      if (ordP > 100)
        continue; // order too big, we will get very few slots

      long n = phi_N(candidate); // compute phi(m)
      if (n < N)
        continue; // phi(m) too small

      m = candidate; // all tests passed, return this value of m
      break;
    }
  }

  if (verbose) {
    std::cerr << "*** Bound N=" << N << ", choosing m=" << m
              << ", phi(m)=" << phi_N(m) << std::endl;
  }

  return m;
}
