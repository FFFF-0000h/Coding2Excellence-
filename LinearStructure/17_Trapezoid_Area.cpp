/*
 *
 	Determine the area of a trapezoid, given the lengths of the bases b1 and b2, as well as the height h. All three values will be read from the keyboard

	Formula for the Area of a Trapezoid:
The area A of a trapezoid can be calculated using the formula:
A=((b1+b2)⋅h) / 2 ; Add the two bases, Multiply the sum by the height, Divide the result by 2

Where:

    b1 and b2 are the lengths of the two bases of the trapezoid.

    h is the height of the trapezoid (the perpendicular distance between the two bases).
 *
*/

#include <iostream>
using namespace std;

int main()
{
	double b1,b2,h,a;
	cout<<"Input length of base 1: ";
	cin>>b1;
	cout<<"Input length of base 2: ";
	cin>>b2;
	cout<<"Input height of trapezoid: ";
	cin>>h;
	a = ((b1 + b2) * h) / 2;
	cout<<"The area of the trapezoid, given height of "<<h<<", and lengths of the bases: "<<b1<<" and "<<b2<<" is = "<<a<<endl;
	return 0;
}
