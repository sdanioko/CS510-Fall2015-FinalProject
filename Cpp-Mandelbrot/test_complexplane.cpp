#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "cplane.hpp"


using namespace std;

int main()
{
	cplane  my_cplane;
	
	long double xmin_d;
	long double xmax_d;
	long double ymin_d;
	long double ymax_d;

	unsigned int x_points;
	unsigned int y_points;


	cout << " Please enter the lower limit of your space in the x direction : " << endl;
	cin >> xmin_d;
	cout << endl;

	cout << " Please enter the higher limit of your space in the x direction : " << endl;
	cin >> xmax_d;
	cout << endl;

	cout << " Please enter the lower limit of your space in the y direction : " << endl;
	cin >> ymin_d;
	cout << endl;

	cout << " Please enter the higher limit of your space in the y direction : " << endl;
	cin >> ymax_d;
	cout << endl;

	cout << " Please enter the number of points in the x direction : " << endl;
	cin >> x_points;
	cout << endl;

	cout << " Please enter the number of points in the y direction : " << endl;
	cin >> y_points;
	cout << endl;

	my_cplane.set(xmin_d, xmax_d, ymin_d, ymax_d, x_points, y_points);

	print_matrix(my_cplane);


	return 0;


}
