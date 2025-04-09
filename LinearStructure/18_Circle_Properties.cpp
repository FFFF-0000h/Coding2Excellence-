/*
 *
 	Determine the circumference and area of a circle, given the length of the circle's radius, read from the keyboard
	
	Formula for the Circumference and Area of a Circle:

    Circumference C of a circle is calculated using the formula:
    C=2πr

    Where r is the radius of the circle.

    Area A of a circle is calculated using the formula:
    A=πr2

    Where r is the radius of the circle.
 *
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double r,c,a;
	cout<<"Input length of radius: ";
	cin>>r;
	c = 2 * M_PI * r;
	a = M_PI * r * r;
	cout<<"The circumference of the circle of radius "<<r<<" is: "<<c<<endl;
	cout<<"The area of the circle of radius "<<r<<" is: "<<a<<endl;
	return 0;
}
