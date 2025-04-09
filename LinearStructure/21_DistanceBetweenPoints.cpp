/*
 *
 	 Determine the distance between two Cartesian points A and B, for which the coordinates are read from the keyboard

	 The formula to determine the distance between two Cartesian points A(x1,y1)A(x1,y1) and B(x2,y2)B(x2,y2) in a 2D plane (given there was a mention of 2 points, it is a straight line; 2D) is derived from the Pythagorean theorem.
	 
Distance Formula:
distance=sqrt((x2−x1)squared + (y2−y1)squared)

Where:

    (x1,y1) are the coordinates of point A,

    (x2,y2) are the coordinates of point B,

    The difference (x2−x1) is the horizontal distance between the two points,

    The difference (y2−y1) is the vertical distance between the two points,

    The square of these differences is added together, and then you take the square root of the result to get the distance.

 *
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x1,x2,y1,y2,d;
	cout<<"Input the horizontal coordinate of Point A: ";
	cin>>x1;
	cout<<"Input the horizontal coordinate of Point B: ";
        cin>>x2;
	cout<<"Input the vertical coordinate of Point A: ";
        cin>>y1;
	cout<<"Input the vertical coordinate of Point B: ";
        cin>>y2;
	d = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	cout<<"The distance between the two Cartesian Points A and B are: "<<d<<endl;
	return 0;
}
