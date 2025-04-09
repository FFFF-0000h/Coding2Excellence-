/*
 *
 	Determine the area of a triangle given the lengths of its sides: a, b, c read from the keyboard. It is assumed that the input data is valid.
	Using Heron's formula because: Heron's formula is widely used to calculate the area of a triangle when the lengths of all three sides are known. It is a very convenient formula because it only requires the side lengths and doesn't need the height or angles of the triangle, which are often difficult to determine without additional information. No Need for Height or Angles: Unlike other area formulas for triangles (e.g., Area = 1/2 * base * height), Heron's formula doesn't require you to know the height of the triangle, which might not always be easily available. It only needs the side lengths.
	
	Heron’s formula uses the semi-perimeter because it simplifies the calculation of the area by taking into account the relationships between the triangle's sides. The semi-perimeter provides a more manageable value to work with in the formula:
	A=sqrt(s⋅(s−a)⋅(s−b)⋅(s−c))
	where s = Semi-Perimeter or half the perimeter: (a + b + c) / 2

 *
 	For a set of three side lengths to form a valid triangle, they must satisfy the Triangle Inequality Theorem. The theorem states that for any triangle with sides a, b, and c, the following conditions must be true:

    a + b > c

    a + c > b

    b + c > a

This means that the sum of the lengths of any two sides must always be greater than the length of the third side.
Example:

Let's say you have three side lengths: a = 3, b = 4, and c = 5

Check the conditions:

    3 + 4 = 7 > 5 ✔️

    3 + 5 = 8 > 4✔️

    4 + 5 = 9 > 3✔️

Since all three conditions are satisfied, these values form a valid triangle.
 *
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a,b,c,A,s;
	cout<<"Input side 'a': ";
	cin>>a;
	cout<<"Input side 'b': ";
	cin>>b;
	cout<<"Input side 'c': ";
	cin>>c;
	s = (a + b + c) / 2;
	A = sqrt((s * (s-a) * (s-b) * (s-c)));
	cout<<"The area of the triangle with sides "<<a<<", "<<b<<", "<<c<<" is: "<<A<<endl;
	return 0;
}
