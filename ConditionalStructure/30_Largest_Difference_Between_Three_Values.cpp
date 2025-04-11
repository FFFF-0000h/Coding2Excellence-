/*
 *
 	Write a program that reads three numerical values a, b, c from the keyboard and then displays on the screen the largest difference between any two values

 *
*/

#include <iostream>
using namespace std;

int main()
{
	int a,b,c,largestOne,largestTwo;
	cout<<"Input first number: ";
	cin>>a;
	cout<<"Input second number: ";
        cin>>b;
	cout<<"Input third number: ";
        cin>>c;
	diff1 = a - b;
	diff2 = b - c;
	diff3 = a - c;
	if (a - b > b - c)
	{
		largestOne = a - b;
	} else {
		largestOne = b - c;
	}
	cout<<"The largest difference between any two values is: "<<endl;
	return 0;
}
