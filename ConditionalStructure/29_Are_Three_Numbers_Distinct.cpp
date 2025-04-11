/*
 *
 	Determine if three integer numbers x, y, and z are distinct. "YES" will be displayed if they are distinct, and "NO" will be displayed otherwise

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
	
	if (x != y && y != z && x != z)
	{
		cout<<"YES";
	} else {
		cout<<"NO";
	}

	return 0;
}
