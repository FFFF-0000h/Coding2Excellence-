/*
 *
 	 Four non-zero integer numbers are read: a, b, c, and d, representing the numerators and denominators of two fractions, (a/b and c/d). Display the fraction with the greater value.
	Example: a=2, b=3, c=4, d=5. The output will be: 4/5
 *
 	Algorithm: 
		Input: 
			Read four non-zero integers a, b, c, and d.

		Compute values to compare:
    			Instead of dividing (a/b and c/d), use cross multiplication to avoid floating-point precision issues:

        			Compute a * d (numerator of first × denominator of second)

        			Compute c * b (numerator of second × denominator of first)

		Compare:
			If a * d > c * b, then a/b is greater.
    			Else, c/d is greater.

		Output: Print the greater fraction in the format numerator/denominator.
 *
*/

#include <iostream>
using namespace std;

int main()
{
	long long a,b,c,d,crossMult1,crossMult2;
	cout<<"Input a non-zero integer, a: ";
	cin>>a;
	cout<<"Input a non-zero integer, b: ";
        cin>>b;
	cout<<"Input a non-zero integer, c: ";
        cin>>c;
	cout<<"Input a non-zero integer, d: ";
	cin>>d;

	crossMult1 = a * d;
	crossMult2 = c * b;

	if(crossMult1 > crossMult2)
	{
		cout<<a<<"/"<<b<<endl;
	} else if(crossMult2 > crossMult1)
	{
		cout<<c<<"/"<<d<<endl;
	} else {
		cout<<"The fractions are equal"<<endl;
	}

	return 0;
}
