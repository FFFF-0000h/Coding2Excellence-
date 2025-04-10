/*
 *
 	Determine the value of the sum S = 1+2+3+ ... + n, for >n< a natural number read from the keyboard
	
	A natural number is any positive whole number you can count with, starting from 1. Usually non-zero, non-negative, non-decimal.
	So natural numbers are:
1, 2, 3, 4, 5, 6, …

	Using the formula known as the Gauss Summation Formula or Arithmetic Series Formula (for the special case where the first term is 1 and the common difference is 1).
		S=(n(n + 1)) / 2

 *
*/

#include <iostream>
using namespace std;

int main()
{
	unsigned int n,sumN;
	/*
	 *
	 unsigned int ensures that only non-negative numbers are used. This makes sense here because the sum involves natural numbers, which are always positive
	 * 
	*/
	cout<<"Input a natural number: ";
	cin>>n;
	sumN = (n * (n + 1)) / 2;
	cout<<"The sum of the 'n' natural number(s) is: "<<sumN<<endl;
	return 0;
}
