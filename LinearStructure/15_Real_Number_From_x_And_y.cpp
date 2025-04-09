/*
 *
 	Two natural numbers, x and y, each with 3 digits, are read. Generate the real number >a< composed of the digits of x for the integer part and the digits of y for the decimal part
	Example. For x = 246 and y = 357, the result is a = 246.357
 *
*/

#include <iostream>
using namespace std;

int main()
{
	int x,y,integerPart;
	double realNumber,decimalPart;
	cout<<"Input a 3 digit number for x: ";
	cin>>x;
	cout<<"Input a 3 digit number for y: ";
	cin>>y;
	integerPart = x;
	decimalPart = (double)y / 1000;
	realNumber = integerPart + decimalPart;
	cout<<"The real number is: "<<realNumber<<endl;
	return 0;
}
