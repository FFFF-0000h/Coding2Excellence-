/*
 *
 	A natural number x with exactly 3 digits is read. Generate the smallest number that has the same digits as x

 *
*/

#include <iostream>
using namespace std;

int main()
{
	int x,hundredths,tenths,units,smallest,smallestOne,smallestTwo,smallestThree;
	cout<<"Input a 3 digit number: ";
        cin>>x;
	hundredths = (x / 100) % 10;
	tenths = (x / 10) % 10;
	units = x % 10;

	if (hundredths <= tenths && hundredths <= units)
	{
		smallestOne = hundredths;
		
		if (tenths <= units)
		{
			smallestTwo = tenths;
			smallestThree = units;
		} else {
			smallestTwo = units;
			smallestThree = tenths;
		}
	} else if (tenths <= hundredths && tenths <= units)
	{
		smallestOne = tenths;

		if (hundredths <= units)
		{
			smallestTwo = hundredths;
			smallestThree = units;
		} else {
			smallestTwo = units;
			smallestThree = hundredths;
		}
	} else {
		smallestOne = units;

		if (hundredths <= tenths)
		{
			smallestTwo = hundredths;
			smallestThree = tenths;
		} else {
			smallestTwo = tenths;
			smallestThree = hundredths;
		}
	}

	//Prevent leading zeros
	if (smallestOne == 0)
	{
		if (smallestTwo != 0) 
		{
			if (smallestThree == 0)
			{
				//Swap smallestOne with the smallestTwo
				int container = smallestOne;
				smallestOne = smallestTwo;
				smallestTwo = container;
			} else if (smallestTwo <= smallestThree)
			{
				//Swap smallestOne with the smallestTwo
				int container = smallestOne;
				smallestOne = smallestTwo;
				smallestTwo = container;
			} else {
				//Swap smallestOne and smallestThree
				int container = smallestOne;
				smallestOne = smallestThree;
				smallestThree = container;
			}
		} else if (smallestThree != 0)
		{
			//Swap smallestOne and smallestThree
			int container = smallestOne;
			smallestOne = smallestThree;
			smallestThree = container;
		}
	}

	smallest = (smallestOne * 100) + (smallestTwo * 10) + smallestThree;
                cout<<"The smallest number that has the same digits as x is: "<<
smallest<<endl;
	
	return 0;
}
