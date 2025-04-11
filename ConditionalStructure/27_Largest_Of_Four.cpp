/*
 *
 		Write a program that determines the largest among the four integer numbers read from the keyboard

 *
*/

#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d,maxTotal,maxFirstTwo,maxLastTwo;
	cout<<"Input first number: ";
	cin>>a;
	cout<<"Input second number: ";
        cin>>b;
	cout<<"Input third number: ";
        cin>>c;
	cout<<"Input fourth number: ";
        cin>>d;
	/*
	 *
	 	Where maxFirstTwo = maximum of a and b
		,,    maxLastTwo  = maximum of b and c
		,,    maxTotal    = maximum of all four
	 * 
	*/
	
	if (a > b)
	{
		maxFirstTwo = a;
	} else {	
		maxFirstTwo = b;
	}

	if (c > d)
	{
		maxLastTwo = c;
	} else {
		maxLastTwo = d;
	}

	if (maxFirstTwo > maxLastTwo)
	{
		maxTotal = maxFirstTwo; 
	} else {
		maxTotal = maxLastTwo;
	}
	cout<<"The maximum of all four numbers is: "<<maxTotal<<endl;
	return 0;
}
