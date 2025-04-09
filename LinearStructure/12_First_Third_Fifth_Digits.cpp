/*
 *
 	Let a be a natural number read from the keyboard, composed of exactly 5 digits. Write a program (algorithm) to determine and display the number formed by the first, third, and fifth digits of the number a.
	Example. If a is 23479, the result is the number 249

 *
 	% (modulo) is to get the last digit, and the Remainder
	/ (integer division) is to get the rightmost digit, and the Quotient
 *
*/

#include <iostream>
using namespace std;

int main()
{
	int x,tenThousandth,hundredth,unit;
	cout<<"Input a 5 digit natural number: ";
	cin>>x;
	tenThousandth = (x / 10000) % 10;
	hundredth = (x / 100) % 10;
	unit = x % 10;
	x = (tenThousandth * 100) + (hundredth * 10) + unit;
	cout<<"The first, third, and fifth digits are: "<<x<<endl;
	return 0;
}
