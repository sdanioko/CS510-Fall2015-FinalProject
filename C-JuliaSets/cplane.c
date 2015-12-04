#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "cplane.h"

// Constructor for cplane
CPLANE init_cplane(long double xmin,long double xmax,long double ymin,long double ymax,unsigned long int xpoints,unsigned long int ypoints){
    CPLANE cplanex;

    // Check bound
    if(xmin >= xmax || ymin >= ymax){
        printf("Bound error.\n");
        return;
    }

    // Check number of points 
    if(xpoints<1 || ypoints<1){
        printf("Point number error.\n");
        return;
    }


    // Allocate mat
    int i;
    if (cplanex.mat=(COMPLEX **) malloc(sizeof(COMPLEX *)*ypoints)){
        for(i=0;i<xpoints;i++){
            cplanex.mat[i] = (COMPLEX *)malloc(sizeof(COMPLEX)*xpoints);
        }
    }

    // Assign value
    cplanex.xmin = xmin;
    cplanex.xmax = xmax;
    cplanex.ymin = ymin;
    cplanex.ymax = ymax;

    cplanex.xpoints = xpoints;
    cplanex.ypoints = ypoints;

    int x,y;
    long double dx,dy;

    // Calculate mesh size
    dx = (xmax-xmin) / (long double) xpoints;
    dy = (ymax-ymin) / (long double) ypoints;

    for(y=0;y<ypoints;y++){
        for(x=0;x<xpoints;x++){
            cplanex.mat[y][x].x_realpart = xmin + x*dx;
            cplanex.mat[y][x].y_imagpart = ymin + y*dy;
        }
    }

    return cplanex;
}
