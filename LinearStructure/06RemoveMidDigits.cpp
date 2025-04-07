/*
 *
A number x composed of exactly 4 digits is read. Display the number obtained by removing the middle digits.
 *
 % (modulo) removes the last digit
 / (integer division) chops off the rightmost integer
*/

#include <iostream>
using namespace std;

int main()
{
	int x,une,quartz;
	cout<<"Input number:";
	cin>>x;
	une = x % 10;
	quartz = (x / 1000) % 10;
	x = (quartz * 10) + une;
	cout<<x;
	return 0;
}
