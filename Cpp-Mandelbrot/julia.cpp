#include <iostream>
#include <complex>
#include <cstdio>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

#include "julia.h"
// Function to calculate Julia set
lcomplex juliamap(lcomplex z,lcomplex c){
	lcomplex compjulia;

	compjulia = z*z + c;

	return compjulia;
}
