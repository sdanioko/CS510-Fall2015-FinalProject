#include <stdio.h>
#include <stdlib.h>
#include "complex.h"


typedef struct complex_plane{
			long double xmin;
			long double xmax;
			long double ymin;
			long double ymax;
	

			unsigned int xpoints;
			unsigned int ypoints;

			COMPLEX **mat;

}CPLANE;

CPLANE init_plane(long double xmin, long double xmax, long double ymin, long double ymax, unsigned int xpoints, unsigned ypoints);
void print_plane(CPLANE *cpPtr, unsigned int rows, unsigned cols);


