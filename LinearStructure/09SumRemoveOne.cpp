/*
 *
	A natural number x composed of 4 digits is read. Display the number obtained from the sum of the numbers obtained by successively removing one of the digits of x. E.g If x = 2347, the result is 347 + 247 + 237 + 234 = 1065
	
 *
	 % (modulo) gets the last digit, and the Remainder
	 / (integer division) chops off the rightmost digit, and gets the Quotient
 *
*/

#include <iostream>
using namespace std;

int main()
{
	int x,thousandth,hundredth,tenth,unit,t1,h1,t2,u1;
	cout<<"Input a number composed of 4 digits: ";
	cin>>x;
	thousandth = (x / 1000) % 10;
	hundredth = (x / 100) % 10;
	tenth = (x / 10) % 10;
	unit = x % 10;
	t1 = (hundredth * 100) + (tenth * 10) + unit; //Remove the thousandth digit
	h1 = (thousandth * 100) + (tenth * 10) + unit; //Remove the hundredth digit
	t2 = (thousandth * 100) + (hundredth * 10) + unit; //Remove the tenth digit
	u1 = (thousandth * 100) + (hundredth * 10) + tenth; //Remove the unit digit;
	cout<<"Sum equals: "<<t1+h1+t2+u1;
	return 0;
}
