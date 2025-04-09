/*
 *
 	A natural number x composed of 4 digits is read. Display the number obtained from the sum of the numbers obtained by successively eliminating the last digit of x, then the last two digits, and then the last three digits. E.g: If x = 2347, the result is 234 + 23 + 2 = 259
 *
*/

#include <iostream>
using namespace std;

int main()
{
	int x,thousandth,hundredth,tenth,unit,lastDigit,lastTwoDigits,lastThreeDigits;
	cout<<"Input a 4 digit number: ";
	cin>>x;
	thousandth = (x / 1000) % 10;
	hundredth = (x / 100) % 10;
	tenth = (x / 10) % 10;
	unit = x % 10;
	lastDigit = (thousandth * 100) + (hundredth * 10) + tenth; // Remove the last digit only
	lastTwoDigits = (thousandth * 10) + hundredth; //Remove the last two digits only
	lastThreeDigits = thousandth; //Remove the last three digits only
	x = lastDigit + lastTwoDigits + lastThreeDigits;
	cout<<"The sum is: "<<x;
	return 0;
}
