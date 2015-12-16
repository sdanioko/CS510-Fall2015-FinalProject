#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "cplane.hpp"


using namespace std;

int main()
{
	cplane  my_cplane; // Declare a complexe plane object

	long double xmin_d; // declare the variable that store the lower limit of x
	long double xmax_d; // declare the variable that stores the upper limit of x
	long double ymin_d; // declare the variable that stores the lower limit of y
	long double ymax_d; // decalre the variable that stores the upper limit of y

	unsigned long int  x_points;
	unsigned long int  y_points;

     // Let's prompt the user to enter the different boundary values

	cout << " Please enter the lower limit of your space in the x direction : " << endl;
	cin >> xmin_d;

	cout << " Please enter the higher limit of your space in the x direction : " << endl;
	cin >> xmax_d;

	cout << " Please enter the lower limit of your space in the y direction : " << endl;
	cin >> ymin_d;

	cout << " Please enter the higher limit of your space in the y direction : " << endl;
	cin >> ymax_d;

	cout << " Please enter the number of points in the x direction : " << endl;
	cin >> x_points;

	cout << " Please enter the number of points in the y direction : " << endl;
	cin >> y_points;
    cout << endl;

	my_cplane.set(xmin_d, xmax_d, ymin_d, ymax_d, x_points, y_points); // Set the complex plane

	print_matrix(my_cplane); // print the entries of the matrix that represents the complex plane

	return 0;

}
