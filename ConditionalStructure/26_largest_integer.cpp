/*
 *
 	Write a program that determines the largest among the three integer numbers read from the keyboard

 *
*/

#include <iostream>
using namespace std;

int main()
{
	int x,y,z,max;
	cout<<"Input first integer: ";
	cin>>x;
	cout<<"Input second integer: ";
        cin>>y;
	cout<<"Input third integer: ";
        cin>>z;
	if (x >= y) {
		max = x;
	} else if (x >= z) {
		max = x;
	} else if (y >= x) {
		max = y;
	} else if (y >= z) {
		max = y;
	} else {
		max = z;
	}
	cout<<"The largest number is: "<<max<<endl;
	return 0;
}
