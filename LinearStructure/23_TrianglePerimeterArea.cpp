/*
 *
 	Cartesian coordinates are read for 3 points A, B, C. Determine the perimeter and area of the triangle formed by these 3 points. It is assumed that the input data is valid (the points are not collinear)
 *
 	To determine the perimeter and area of a triangle given three Cartesian points A(x1,y1), B(x2,y2), and C(x3,y3), here are the formulas you'll use:
1. Distance Formula (to find the side lengths):
AB = sqrt((x2 − x1)squared + (y2 − y1)squared)
BC = sqrt((x3 − x2)squared + (y3 − y2)squared)
CA = sqrt((x1 − x3)squared + (y1 − y3)squared)

2. Perimeter:
Perimeter = AB + BC + CA

3. Area (using Heron’s Formula):

First, compute the semi-perimeter ss:
s = (AB + BC + CA) / 2

Then the area:
Area=sqrt(s (s − AB) (s − BC) (s − CA))
 *
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x1,y1,x2,y2,x3,y3,sp,p,a,dAB,dBC,dCA;
	cout<<"Input the horizontal coordinate for Point A: ";
	cin>>x1;
	cout<<"Input the horizontal coordinate for Point B: ";
        cin>>x2;
	cout<<"Input the horizontal coordinate for Point C: ";
        cin>>x3;
	cout<<"Input the vertical coordinate for Point A: ";
        cin>>y1;
	cout<<"Input the vertical coordinate for Point B: ";
        cin>>y2;
	cout<<"Input the vertical coordinate for Point C: ";
        cin>>y3;
	dAB = sqrt(pow(x2 - x1, 2) + pow(y2 -y1, 2));
	dBC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	dCA = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	p = dAB + dBC + dCA;
	sp = p/2;
	a = sqrt(sp * (sp - dAB) * (sp - dBC) * (sp - dCA));
	cout<<"The Perimeter of the triangle formed by the three points are: "<<p<<endl;
	cout<<"The Area of the triangle formed by the three points are: "<<a<<endl;
	return 0;
}
