/**************************************************************************
This file contains the implimentation of the Mandelrbot set via finding   *
set of values c in the complex plane for which the orbit of 0 under the   *
iteration of the complex uadratic polynomial                              *
z(n+1) = z(n)^2 + c                                                       *
***************************************************************************/

#include <iostream>
#include <complex>
#include <cstdio>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

#include "julia.h"
#include "cplane.hpp"

int main(int argc,char *argv[]){

        // Variable for cplane
        long double xmin;
        long double xmax;
        long double ymin;
        long double ymax;
        unsigned long int xpoints;
        unsigned long int ypoints;

	if(argc!=7){
		return 0;
	}

	boost::numeric::ublas::matrix< std::complex<long double> > test2;

        // Get input from user
	std::stringstream(argv[1]) >> xmin;
	std::stringstream(argv[2]) >> xmax;
	std::stringstream(argv[3]) >> ymin;
	std::stringstream(argv[4]) >> ymax;
	std::stringstream(argv[5]) >> xpoints;
	std::stringstream(argv[6]) >> ypoints;

	// Create cplane instance
	cplane cplane1;
	cplane1.set(xmin,xmax,ymin,ymax,xpoints,ypoints);

	lcomplex compC (0,0); // Initialize the entries
	int out;
	for(int y =0;y<cplane1.ypoints;y++){
		for(int x =0;x<cplane1.xpoints;x++){
			lcomplex tmp = cplane1.mat(x,y);
			for(out=0;out<1000;out++){
				if(std::abs(tmp)>2.0)break; // to avoid an infinity loop
				tmp = juliamap(tmp,cplane1.mat(x,y));
			}
			// Print out data
			std::cout << cplane1.mat(x,y).real() << " " << cplane1.mat(x,y).imag() << " " << out << std::endl;
		}
     //		std::cout << std::endl;
	}
    cplane1.mat.clear(); // This releases the memory
}
