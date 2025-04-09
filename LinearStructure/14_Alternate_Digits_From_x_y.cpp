/*
 *
	Two natural numbers, x and y, each with 3 digits, are read. Generate the number >a< composed of the digits of x and y taken alternately, starting with the digits of x.

	Example: x = 246, y = 357 we get a = 234567
 *
*/

#include <iostream>
using namespace std;

int main()
{
	int x,y,a,h1,t1,u1,h2,t2,u2;
	cout<<"Input a 3 digit natural number for x: ";
	cin>>x;
	cout<<"Input a 3 digit natural number for y: ";
	cin>>y;
	h1 = (x / 100) % 10;
	h2 = (y / 100) % 10;
	t1 = (x / 10) % 10;
	t2 = (y / 10) % 10;
	u1 = x % 10;
	u2 = y % 10;
	a = (h1 * 100000) + (h2 * 10000) + (t1 * 1000) + (t2 * 100) + (u1 * 10) + u2;
	cout<<"The number 'a' composed of the digits of x and y taken alternatively is: "<<a<<endl;
	return 0;
}
