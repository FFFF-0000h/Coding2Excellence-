/*
 *
 	A natural number x with exactly 3 digits is read. Generate the largest number that has the same digits as x

	How I think I should solve this problem is this:
	- Read the 3 digit number and break it down into hundredths, tenths and units form
	- Then find the largest of the three numbers and store it
	- Then find the largest of the last two numbers and store it, and store the last digit
	- Then rebuild the stored digits from largest to lowest

 *
*/

#include <iostream>
using namespace std;

int main()
{
	int x,hundredths,tenths,units,largest,largestOne,largestTwo,largestThree;
	cout<<"Input a 3 digit number: ";
	cin>>x;
	hundredths = (x / 100) % 10;
	tenths = (x / 10) % 10;
	units = x % 10;
	
	if (hundredths >= tenths && hundredths >= units)
	{
		largestOne = hundredths;
		if (tenths >= units)
		{
			largestTwo = tenths;
			largestThree = units; 
		} else {
			largestTwo = units;
			largestThree = tenths;
		}
	} else if (tenths >= hundredths && tenths >= units)
	{
		largestOne = tenths;
		if (hundredths >= units)
		{
			largestTwo = hundredths;
			largestThree = units;
		} else {
			largestTwo = units;
			largestThree = hundredths;
		}
	} else {
		largestOne = units;
		if (hundredths >= tenths)
		{
			largestTwo = hundredths;
			largestThree = tenths;
		} else {
			largestTwo = tenths;
			largestThree = hundredths;
		}
	}

	largest = (largestOne * 100) + (largestTwo * 10) + largestThree;
	cout<<"The largest number that has the same digits as x is: "<<largest<<endl;
	return 0;
}
