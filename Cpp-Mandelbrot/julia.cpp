#include "julia.h"
#include <iostream> 
#include <complex>
using namespace std; 

complex<long double> juliamap(complex<long double> z, complex<long double> c){
	return (z*z)+c;

}
