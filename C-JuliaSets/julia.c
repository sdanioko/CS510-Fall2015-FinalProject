/*******************************************************
This file contains the implimentation of the Julia Set. 
 ******************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "cplane.h"

int main(int argc, char *argv[]){

        // Variable for cplane
        long double xmin;
        long double xmax;
        long double ymin;
        long double ymax;
        unsigned long int xpoints;
        unsigned long int ypoints;

        // Variable for complex number,C
        COMPLEX compC;

        if(argc!=9){ // 9 = 8(number of parameters) + 1 ( the name of the program) 
            // Not enough parameter
            return;
        }

        // Get input from user
        sscanf(argv[1],"%Lf",&xmin); // store the first argument
        sscanf(argv[2],"%Lf",&xmax); // store the second argument
        sscanf(argv[3],"%Lf",&ymin); // store the third argument
        sscanf(argv[4],"%Lf",&ymax); // store the fourth argument
        sscanf(argv[5],"%ld",&xpoints); // store the fifth argument
        sscanf(argv[6],"%ld",&ypoints); // store the sixth argument
        sscanf(argv[7],"%Lf",&compC.x_realpart); // store the real part of a complex
        sscanf(argv[8],"%Lf",&compC.y_imagpart); // store the imag part of the same complex

        // Create complex plane
        CPLANE cplane1; // Declare a complex plane object
        cplane1 = init_cplane(xmin,xmax,ymin,ymax,xpoints,ypoints);  // use the constructor to initial the declared plane


        // Interate over complex plane
        int out;
        int x,y;
        for(y=0;y<cplane1.ypoints;y++){
            for(x=0;x<cplane1.xpoints;x++){
                //printf("%Lf %Lf \n",cplane1.mat[y][x].x_realpart,cplane1.mat[y][x].y_imagpart);

                // Calculate Julia set
                COMPLEX tmp = cplane1.mat[y][x];
                for(out=0;out<1000;out++){
                    tmp = juliamap(&tmp,&compC);
                    // Check if outside the radius
                    long double rad = tmp.x_realpart*tmp.x_realpart + tmp.y_imagpart*tmp.y_imagpart;
                    if(rad>4) break;
                }
                printf("%Lf %Lf %d\n",cplane1.mat[y][x].x_realpart,cplane1.mat[y][x].y_imagpart,out);
            }
            //printf("\n");   // Added for gnuplot
        }
        return 0;
}

