#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include "cplane.h"


int main(){

	
		long double xsmall;
		long double xbig;
		long double ysmall;
		long double ybig;

		unsigned int xnb_points;
		unsigned int ynb_points;
		

		printf(" Please enter 4 long double values that will set the limits of your complex plane : ");
		printf("\n");

		printf(" Please enter the lower limit of x : ");
		scanf("%Lf",&xsmall);
		printf("\n");

		printf(" Please enter the upper limit of x : ");
		scanf("%Lf",&xbig);
		printf("\n");

		printf(" Please enter the lower limit of y : ");
		scanf("%Lf",&ysmall);
		printf("\n");

		printf(" Please enter the upper limit of y : ");
		scanf("Lf",&ybig);
		printf("\n");

		printf(" Please enter the number of points in the x directions : ");
		scanf("%u",&xnb_points);
		printf("\n");

		printf(" Please enter the number of points in the y directions : ");
		scanf("%u",&ynb_points);
		
		CPLANE  c = init_cplane(xsmall, xbig, ysmall, ybig, xnb_points, ynb_points);
		
		print_Compl_plane(&c);				
		
		release_space(c);

		return 0;
	
}
