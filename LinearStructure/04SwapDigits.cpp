/*
 *
 * 
 Let x be a number composed of exactly three digits read from the keyboard. Reverse the digit in the units place with the digit in the hundreds place and display the result.
 *
 Tip: % (modulo) to get the last digit

      / (integer division) to chop off the rightmost digits
 *
*/

#include <iostream>
using namespace std;
int main()
{
	int x,f,s,t,swaap;
	cout<<"Input a number:";
	cin>>x;
	f = (x / 100) % 10;
	s = (x / 10) % 10;
	t = x % 10;
	swaap = f;
	f = t;
	t = swaap;
	x = (100 * f) + (10 * s) + t;
	cout<<x;
	return 0;
}
