/* 
 *	 Let x be a number consisting of exactly 3 digits read from the keyboard. Display the digits of the number starting from the units digit with spaces between them. E.g; x = 6789
 *	Algorithm: Units digit: x % 10 → 6789 % 10 = 9
Tens digit: (x / 10) % 10 → 678 % 10 = 8
Hundreds digit: (x / 100) % 10 → 67 % 10 = 7
Thousands digit: x / 1000 → 6789 / 1000 = 6
 *
 * % (modulo) to get the last digit

   / (integer division) to chop off the rightmost digits
 */

#include <iostream>

using namespace std;

int main()

{
	int x,units,tens,hundreds;
	cout<<"Input exactly three digits only:";
	cin>>x;
	units = x % 10;
	tens = (x / 10) % 10;
	hundreds = x / 100;
	cout<<units<<" "<<tens<<" "<<hundreds;
	return 0;
}
