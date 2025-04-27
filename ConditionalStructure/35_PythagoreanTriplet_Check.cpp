/*
 *
 	Determine whether 3 numbers x, y, z read from the keyboard are Pythagorean (a squared value is equal to the sum of the squares of the other two values). Display <YES> or <NO>.

 *
 	The Pythagorean Theorem states:
c2 = a2 + b2

for any right-angled triangle, where:

    c is the length of the hypotenuse (the side opposite the right angle),
    a and b are the lengths of the other two sides.
 *
 *
	Algorithm:

    - Input three integers x, y, and z.

    - Find the largest among x, y, z.
    	(The largest is considered the hypotenuse in a right triangle.)

    - Assign:
      	Hypotenuse >> largest number
        Other two numbers >> legs

    - Check if:
    	(hypotenuse)2=(leg1)2+(leg2)2

    - If yes, output "YES".
    - If no, output "NO".
 *
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x,y,z,large,a,b,c;
	cout<<"Input a number, x: ";
	cin>>x;
	cout<<"Input a number, y: ";
        cin>>y;
	cout<<"Input a number, z: ";
        cin>>z;

	if(x >= y)
	{
		large = x;
	} else {
		large = y;
	}

	if(z >= large)
	{
		large = z;
	}

	if(large == x)
	{
		a = y;
		b = z;
	} else if(large == y){
		a = x;
		b = z;
	} else {
		a = x;
		b = y;
	}

	c = large;

	if(pow(c,2) == (pow(a,2) + pow(b,2)))
	{
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}

	return 0;
}
