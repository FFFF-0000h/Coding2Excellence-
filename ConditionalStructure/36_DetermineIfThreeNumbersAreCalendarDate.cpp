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
*/
