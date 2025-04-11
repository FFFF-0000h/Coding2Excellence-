/*
 *
 	Determine whether 3 integer numbers x, y, and z are equal. It will be displayed “YES” or “NO”
		
	The Transitive Property of Equality in algebra states that: If two values are equal to the same value, then they are equal to each other; E.g, If a = b, b = c, then a = c

 *
*/

#include <iostream>
using namespace std;

int main()
{
	int x,y,z;
	cout<<"Input first number: ";
	cin>>x;
	cout<<"Input second number: ";
        cin>>y;
	cout<<"Input third number: ";
        cin>>z;

	if (x == y && y == z)
	{
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
	
	return 0;
}
