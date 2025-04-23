/*
 *
 	Two numbers x and y, each with exactly 4 digits, are read. Display the number that has the greater sum of its digits.
	Example: x = 1902 and y = 8001 The output will be 1902

	Algorithm:
		Read x and y

		Extract digits from each number using division/modulo

		Add up the digits

		Compare the two sums

		Display the number that had the higher sum
 *
 *
 		/ (integer division) chops off the rightmost digit(s) and displays what's left
		% (modulo) extracts the last digit and displays it
 *
*/

#include <iostream>
using namespace std;

int main()
{
	int x,y,sumX,sumY,thousandthX,thousandthY,hundredthX,hundredthY,tenthX,tenthY,unitX,unitY;
	cout<<"Input a 4 digit number, x: ";
	cin>>x;
	cout<<"Input a 4 digit number, y: ";
	cin>>y;

	thousandthX = (x / 1000) % 10;
	hundredthX = (x / 100) % 10;
	tenthX = (x / 10) % 10;
	unitX = x % 10;

	thousandthY = (y / 1000) % 10;
        hundredthY = (y / 100) % 10;
        tenthY = (y / 10) % 10;
        unitY = y % 10;

	sumX = thousandthX + hundredthX + tenthX + unitX;
	sumY = thousandthY + hundredthY + tenthY + unitY;

	if (sumX > sumY)
	{
		cout<<"The number that has the greater sum of its digits is: "<<x<<endl;
	} else if(sumY > sumX)
	{
		cout<<"The number that has the greater sum of its digits is: "<<y<<endl;
	} else {
		cout<<"Both numbers have equal sum of digits."<<endl;
	}
	
	return 0;
}
