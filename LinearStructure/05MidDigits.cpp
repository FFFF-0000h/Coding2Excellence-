/*
 *
	A number x composed of exactly 4 digits is read. Replace the middle two digits with 8 and 9, respectively, and display the result.
	% (modulo) is to get the last digit
	/ (integer division) is to chop off the rightmost digit
 *
 */

#include <iostream>
using namespace std;

int main()
{
	int x,unit,tenth,hundredth,thousandth;
	cout<<"Input a number:";
	cin>>x;
	unit = x % 10;
	tenth = 9;
	hundredth = 8;
	thousandth = (x / 1000) % 10;
	x = (thousandth * 1000) + (hundredth * 100) + (tenth * 10) + unit;
	cout<<x;
	return 0;
}
