/*
 *
 	Write a program that reads three numerical values a, b, c from the keyboard and then displays on the screen the largest difference between any two values

 *
*/

#include <iostream>
using namespace std;

int main()
{
	int a,b,c,diff1,diff2,diff3,largestOne,largestTwo;
	cout<<"Input first number: ";
	cin>>a;
	cout<<"Input second number: ";
        cin>>b;
	cout<<"Input third number: ";
        cin>>c;
	diff1 = abs(a - b);
	diff2 = abs(b - c);
	diff3 = abs(a - c);

	if (diff1 > diff2)
	{
		largestOne = diff1;
	} else {
		largestOne = diff2;
	}

	if (largestOne > diff3)
	{
		largestTwo = largestOne;
	} else {
		largestTwo = diff3;
	}

	// We can as well try the max() function
        //diffy = max(max(diff1, diff2), diff3) to make the code concise
        //max() allows us to ditch the multiple conditional if statements

	cout<<"The largest difference between any two values is: "<<largestTwo<<endl;
	return 0;
}
