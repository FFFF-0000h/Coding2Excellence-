/*
 *
	Determine the last digit of the sum x+y+z, where x, y, and z are natural numbers read from the keyboard.

 *
*/

#include <iostream>
using namespace std;

int main()
{
	int x,y,z;
	cout<<"Input a natural number: "<<endl;
	cin>>x;
	cout<<"Another one: "<<endl;
	cin>>y;
	cout<<"Another one: "<<endl;
	cin>>z;
	cout<<"The last digit of the sum of the three digits is: "<<(x + y + z) % 10<<endl;
	return 0;
}
