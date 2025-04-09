/*
 *
 	 Determine the perimeter and area of a rectangle, given the length and width of the rectangle

	 Formula for the Perimeter and Area of a Rectangle:
    Perimeter P of a rectangle is calculated using the formula:
    P= 2 ⋅( l + w )

    Where:
        l is the length of the rectangle.

        w is the width of the rectangle.

    Area A of a rectangle is calculated using the formula:
    A = l ⋅ w

    Where:
        l is the length.

        w is the width.
 *
*/

#include <iostream>
using namespace std;

int main()
{
	double length,width,area,perimeter;
	cout<<"Input the length of the rectangle: ";
	cin>>length;
	cout<<"Input the width of the rectangle: ";
	cin>>width;
	area = length * width;
	perimeter = 2 * ( length + width);
	cout<<"The area of the rectangle of length: "<<length<<" and width: "<<width<<" is: "<<area<<endl;
	cout<<"The perimeter of the rectangle of length: "<<length<<" and width: "<<width<<" is: "<<perimeter<<endl;
	return 0;
}
