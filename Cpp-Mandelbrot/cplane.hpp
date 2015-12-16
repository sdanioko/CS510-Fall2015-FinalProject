// Class for cplane
#include <iostream>
#include <complex>
#include <cstdio>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

typedef std::complex<long double> lcomplex;

class cplane{
	public:
    // Declare variable needed for the setting of the computation space
	long double xmin; // Declare variable that will hold the lower limit on x
	long double xmax; // Declare variable that will hold the upper limit on x
	long double ymin; // Decalre variable that will hold the lower limit on y
	long double ymax; // Decalre variable that will hold the ipper limit in y

	unsigned long int xpoints; // Declare variable that will hold nber of points on x
	unsigned long int ypoints; // Declare variable that will hold nber of points on y
	boost::numeric::ublas::matrix<lcomplex> mat; // Use boost to create a complex matrix

    // Declare a function that will help us set and or populate the defined matrix
	void set(long double,long double,long double,long double,unsigned long int,unsigned long int);
};

// Declare a function that allows us print a given plane
void print_matrix(cplane &cp);
//void release_space(cplane &cp);
