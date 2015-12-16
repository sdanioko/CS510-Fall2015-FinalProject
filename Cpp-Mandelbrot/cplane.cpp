#include <iostream>
#include <complex>
#include <cstdio>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>
#include "cplane.hpp"

// Function to set values to cplane
void cplane::set(long double x1,long double x2,long double y1,long double y2,unsigned long int nx,unsigned long int ny){
	xmin = x1;
	xmax = x2;
	ymin = y1;
	ymax = y2;
	xpoints = nx;
	ypoints = ny;

	// Check for error
	if(xmin >=xmax || ymin >=ymax){
		std::cout << "Bound error.\n";
		return;
	}

	if(xpoints<1 || ypoints<1){
		std::cout << "Point number error.\n";
		return;
	}

	// Set mat
	mat.resize(xpoints,ypoints);

	long double dx,dy;
	dx = (xmax-xmin) / (long double) xpoints; // calculate the step size on x
	dy = (ymax-ymin) / (long double) ypoints; // calculate the step size  on y

	for(int y =0;y<ypoints;y++){
		for(int x =0;x<xpoints;x++){
			std::complex<long double> tmp (xmin+x*dx,ymin+y*dy); // populate entries with a complex number
			mat(x,y) =  tmp;
		}
	}
	return;

}
// Define print_matrix
void print_matrix(cplane &cp){

        for(unsigned int i = 0; i < cp.ypoints; ++i){
                for(unsigned int j = 0; j < cp.xpoints; ++j){
                        std::cout << cp.mat(i,j) << " ";
                }
                std::cout << std::endl;
        }
        std::cout << std::endl;
}


