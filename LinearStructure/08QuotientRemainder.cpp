/*
 *
 A natural number x composed of 4 digits is read. Display the quotient and remainder of dividing the number formed by the first two digits of x by the number formed by the last two digits of x.
 *
 % (modulo) is used to get the last digit and also used to get the remainder
 / (integer division) is used to chop off the rightmost digit and also to get the quotient
 * 
*/

#include <iostream>
using namespace std;

int main()
{
	int x,quotient,remainder,thousandth,hundredth,tenth,unit,firstTwoDigits,secondTwoDigits;
	cout<<"Input a number composed of 4 digits:";
	cin>>x;
	thousandth = (x / 1000) % 10;
	hundredth = (x / 100) % 10;
	tenth = (x / 10) % 10;
	unit = x % 10;
	firstTwoDigits = (thousandth * 10) + hundredth;
	secondTwoDigits = (tenth * 10) + unit;
	cout<<"The Quotient of the first two digits by the last two digits = "<<firstTwoDigits / secondTwoDigits<<endl;
	cout<<"The Remainder of the first two digits by the last two digits = "<<firstTwoDigits % secondTwoDigits<<endl;
}
