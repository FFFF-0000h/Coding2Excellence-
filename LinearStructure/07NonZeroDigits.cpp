/*
 *
	A natural number x composed of 4 nonzero digits is read. Display the numbers obtained in the following ways:

a. By swapping the first digit with the last;

b. By swapping the middle digits with each other;

c. By replacing the middle digits with two "0" digits;

d. By decreasing each digit by one unit.

 *
*/

#include <iostream>
using namespace std;

int main()
{
	//Swapping the first digit with the last
	int x,x1,thousandth,hundredth,tenth,unit,swaap;
	cout<<"Input a natural number composed of 4 nonzero digits:";
	cin>>x;
	x1 = x;
	thousandth = (x / 1000) % 10;
	hundredth = (x / 100) % 10;
	tenth = (x / 10) % 10;
	unit = x % 10;
	swaap = thousandth;
	thousandth = unit;
	unit = swaap;
	x = (thousandth * 1000) + (hundredth * 100) + (tenth * 10) + unit;
	cout<<x<<endl;

	//Swapping the middle digits with each other
	x = x1;
	thousandth = (x / 1000) % 10;
	hundredth = (x / 100) % 10;
	tenth = (x / 10) % 10;
	unit = x % 10;
	swaap = hundredth;
        hundredth = tenth;
        tenth = swaap;
	x = (thousandth * 1000) + (hundredth * 100) + (tenth * 10) + unit;
	cout<<x<<endl;

	//Replacing the middle digits with two "0" digits
	x = x1;
	thousandth = (x / 1000) % 10;
        unit = x % 10;
	x = (thousandth * 1000) + unit;
	cout<<x<<endl;

	//Decreasing each digit by one unit
	x = x1;
	thousandth = (x / 1000) % 10;
	hundredth = (x / 100) % 10;
	tenth = (x / 10) % 10;
	unit = x % 10;
	x = ((thousandth - 1) * 1000) + ((hundredth - 1) * 100) + ((tenth - 1) * 10) + (unit - 1);
	cout<<x<<endl;
	return 0;
}
