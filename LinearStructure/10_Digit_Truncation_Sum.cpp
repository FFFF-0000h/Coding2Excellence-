/*
 *
	 A natural number x composed of 4 digits is read. Display the number obtained from the sum of the numbers obtained by successively eliminating the first digit of x, then the first two digits, and then the first three digits. E.g: If x = 2347, the result is 347 + 47 + 7 = 401
	
	 % (modulo) is to get the last digit, and get the Remainder
	 / (integer division) is to chop off the rightmost digit, and get the Quotient
 *
*/

#include <iostream>
using namespace std;

int main()
{
	int x,thousandth,hundredth,tenth,unit,firstDigit,firstTwoDigits,firstThreeDigits;
	cout<<"Input a 4 digit number: ";
	cin>>x;
	thousandth = (x / 1000) % 10;
	hundredth = (x / 100) % 10;
	tenth = (x / 10) % 10;
	unit = x % 10;
	firstDigit = (hundredth * 100) + (tenth * 10) + unit; //Remove the first digit only
	firstTwoDigits = (tenth * 10) + unit; //Remove the first two digits only
	firstThreeDigits = unit;
	x = firstDigit + firstTwoDigits + firstThreeDigits;
	cout<<"The sum is: "<<x;
	return 0;
}
