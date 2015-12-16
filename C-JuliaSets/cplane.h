#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "complex.h"

struct MATRIX{    /* Define a struct Matrix */
    unsigned int rows;
    unsigned int cols;
    long double *mat;
};

struct cplane{   /* Define a struct cplane */
    long double xmin;
    long double xmax;
    long double ymin;
    long double ymax;

    unsigned long int xpoints;
    unsigned long int ypoints;
    COMPLEX **mat; // Declare a pointer to a pointer. This allows us picture eventual allocated memory as a 2D matrix
};
 //simple typedel
typedef struct cplane CPLANE; // create an allias for an existing cplane type

// Create a constructor. This is a special function that is executed whenever we create a new object of the struct cplane
CPLANE init_cplane(long double xmin,long double xmax,long double ymin,long double ymax,unsigned long int xpoints,unsigned long int ypoints);

// Declare a function that allows us print a given complex plane
void print_cplane(CPLANE aplane);
// Decalre a function that allows us release the borrowed memory; the dynamically allocated one
void release_space(CPLANE aplane);