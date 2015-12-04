
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "complex.h"

struct MATRIX{
    unsigned int rows;
    unsigned int cols;
    long double *mat;
};

struct cplane{
    long double xmin;
    long double xmax;
    long double ymin;
    long double ymax;

    unsigned long int xpoints;
    unsigned long int ypoints;
    COMPLEX **mat;
};

typedef struct cplane CPLANE;

CPLANE init_cplane(long double xmin,long double xmax,long double ymin,long double ymax,unsigned long int xpoints,unsigned long int ypoints);
