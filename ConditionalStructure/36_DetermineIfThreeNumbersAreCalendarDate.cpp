/*
 *
 	Determine whether 3 natural numbers read from the keyboard can represent a calendar date (in the format: day, month, year).
 *
 	Read 3 natural numbers and store them in a,b,c;
	Get a, make sure it is not a zero digit, fraction, nor a decimal;
	Same with b, and c;
	Assign a to the day;
	b to the month;
	c to the year;
	Check if the a natural number is <= 31, if yes, day is valid;
	Check if the b natural number is <= 12, if yes, month is valid;
	Since c is the year, I allow it to be any number, leave as is;
	If a and b are valid, write out the date in the format a/b/c;
	If either a or b are not valid, output >Invalid date<
 *
 *	A year is a leap year if:
 *		It is divisible by 4
    			AND
		EITHER it is not divisible by 100,
		OR it is divisible by 400.
 *
*/

#include <iostream>
using namespace std;

/* Function to check if a year is a leap year */
	bool isLeapYear(int year) {
    // Leap year if divisible by 4 and (either not divisible by 100 or divisible by 400)
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

/* Function to validate the date */
	bool isValidDate(int day, int month, int year) {
    if (day < 1 || day > 31) return false;
    if (month < 1 || month > 12) return false;
    if (year < 1) return false; // Natural numbers only

    int daysInMonth[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

/* Refactor for leap year in February */
    // Leap years have 29 days in February instead of 28.
    if (month == 2 && isLeapYear(year)) {
        if (day > 29) return false;
    } else {
        if (day > daysInMonth[month]) return false;
    }

    return true;
}

int main()
{
	int day,month,year;
	cout<<"Input day: ";
	cin>>day;
	cout<<"Input month: ";
	cin>>month;
	cout<<"Input year: ";
	cin>>year;

	if (isValidDate(day, month, year)) {
        cout << "Valid date: " << day << "/" << month << "/" << year << endl;
    } else {
        cout << "Invalid date. Please check day/month/year values." << endl;
    }
	return 0;
}
