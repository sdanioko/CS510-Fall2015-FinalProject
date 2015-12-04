#include <stdio.h>
#include <stdlib.h>
#include "cplane.h"

long double DOUBLE;
unsigned int INT
CPLANE init_cplane(DOUBLE  xmin, DOUBLE  xmax, DOUBLE ymin, DOUBLE ymax, INT xpoints, INT ypoints){
	CPLANE A;

	if(xmin == xmax){
		printf(stderr, " Point Error!, we can not subdivise in the x direction with only one point ");
	}
	else if(ymin == ymax){
		printf(stderr, " Point Error!, we can not subdivise in rhe y direction with only one point ");
	}
	else if(xpoints <=0 || ypoints <=0){
		printf(stderr, " Error!, we can not have a negative number of points " );
	}
	else if(xmin > xmax){
		printf(stderr, " Bound Error!, please, make sure that x_man be bigger than x_min");
	else if(ymin > ymax){
	} 
		printf(stderr, " Bound Error!, please, make sure that y_max be bigger than y_min");
	}
	else{

		// In here, let's allocated the memory
		
		if(A.mat = (COMPLEX **)malloc(sizeof(COMPLEX *)*ypoints)){
			A.mat[i] = (COMPLEX *)malloc(sizeof(COMPLEX)*xpoints);

		}

		// Assign values

		A.xmin = xmin;
		A.xmax = xmax;
		A.ymin = ymin;
		A.ymax = ymax;

		A.xpoints = xpoints;
		A.ypoints = ypoints;

		// Create the meshgrid
		int x;
		int y;
		long double delta_x;
		long double delta_y;

		delta_x = (xmax - xmin)/(long double) xpoints;
		delta_y = (ymax - ymin)/(long double) ypoints;


		for( y = 0; y <ypoints; y++){
			for(x = 0; x < xpoints; x++){
				A.mat[y][x].x_realpart = xmin + x*delta_x;
				A.mat[y][x].y_realpart = ymin + y*delta_y;
			}
		}
		
		
	}
	return A;
}


void print_matrix(CPLANE *cpPtr, unsigned int rows; unsigned cols){
	CPANE a_matrix;
	int i;
	int j;

	for(i = 0; i < rows, ++i){
		for(j = 0, j < rows, ++j){
			
		}
			
	}


}
