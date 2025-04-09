/*
 *
	Determine the coordinates of the midpoint of the segment defined by the two Cartesian points A and B. The coordinates will be read from the keyboard

	The formula to find the midpoint of a line segment defined by two Cartesian points A(x1,y1) and B(x2,y2) is:
Midpoint=(x1 + x2 / 2, y1 + y2 / 2)

 *
*/

#include <iostream>
using namespace std;

int main()
{
	double x1,x2,y1,y2,midpointX,midpointY;
	cout<<"Input the horizontal coordinate for Point A: ";
	cin>>x1;
	cout<<"Input the horizontal coordinate for Point B: ";
        cin>>x2;
	cout<<"Input the vertical coordinate for Point A: ";
        cin>>y1;
	cout<<"Input the horizontal coordinate for Point B: ";
        cin>>y2;
	midpointX = (x1 + x2) / 2;
	midpointY = (y1 + y2) / 2;
	cout<<"The midpoint of points A and B is: ("<<midpointX<<", "<<midpointY<<")"<<endl;
	return 0;
}
