#include <complex>

using namespace std;
//evaluate f at e^{2 pi i/m}, returning a complex number

int evalPoly(long i, long m)
{
	double *f;
  complex<double> t(0.0, 2*M_PI*i/((double) m));
  complex<double> x = exp(t);

  complex<double> res = 0.0;
  for (long j = m-1; j >= 0; j--)
    res = res*x + f[j];

  return 0;
}
