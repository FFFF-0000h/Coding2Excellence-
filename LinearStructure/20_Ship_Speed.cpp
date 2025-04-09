/*
 *
 	A ship covers a distance >d< (in km) in >a< weeks and >b< days (d, a, b are read from the keyboard). What is the speed of the ship in m/s?

	Formula for Speed is:
	velocity = distance / time

	To convert km to m: 
	distance_in_meters = distance_in_kilometers × 1000
	Example:

	If the distance is 5 kilometers:
	distance_in_meters = 5 × 1000 = 5000 meters

	To convert weeks to seconds:
	1 week = 7 days

    	1 day = 24 hours

    	1 hour = 60 minutes

    	1 minute = 60 seconds

	So, the total number of seconds in 1 week is:
	seconds_in_a_week = 7 × 24 × 60 × 60 = 604,800 seconds

	To convert days to seconds:
	1 day = 24 hours
	
	1 hour = 60 minutes

	1 minute = 60 seconds
	
	So, the total number of seconds in 1 day is:
	seconds_in_a_day = 24 × 60 × 60 = 86,400 seconds
 *
*/

#include <iostream>
using namespace std;

int main()
{
	double d,a,b,s,totalSeconds;
	cout<<"Input the distance covered in kilometre(s): ";
	cin>>d;
	cout<<"Input the number of weeks it took: ";
	cin>>a;
	cout<<"Input the number of days it took: ";
	cin>>b;
	totalSeconds = (a * 7 * 24 * 60 * 60) + (b * 24 * 60 * 60);
	s = (d * 1000) / totalSeconds;
	cout<<"The speed of the ship was/is: "<<s<<endl;
	return 0;
}
