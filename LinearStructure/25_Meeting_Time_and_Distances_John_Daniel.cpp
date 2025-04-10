/*
 *
 	John and Daniel live in the villages of Stanton and Hope Cove, respectively. Knowing that there is a distance d between the two villages (expressed in km), and the two children plan to meet somewhere on the road between the two villages by cycling as follows: John at a speed of v1 (expressed in m/s), and Daniel at a speed of v2 (expressed in m/s). After how much time do the two friends meet? At what distances from Stanton and Hope Cove did they meet?
	 
	To convert kilometers (km) to meters (m), you multiply the value in kilometers by 1000:
Meters (m)=Kilometers (km)×1000

For example:
    5 km = 5 × 1000 = 5000 meters
This is because 1 kilometer is equal to 1000 meters.

	Formula for Speed: Distance / Time

	To convert day to seconds:
		1 day = 24 hours
		1 hour = 60 minutes
		1 minute = 60 seconds
		= 24 * 60 * 60 = 86,400 seconds
 *
*/

#include <iostream>
using namespace std;

int main()
{
	double dVillagesKM,spdJohn,spdDaniel,time,dVillagesMS,dStanton,dHopeC;
	cout<<"Input the distance between the two villages in Kilometre(s): ";
	cin>>dVillagesKM;
	cout<<"Input the speed of John: ";
	cin>>spdJohn;
	cout<<"Input the speed of Daniel: ";
	cin>>spdDaniel;
	dVillagesMS = dVillagesKM * 1000;
	time = dVillagesMS / (spdJohn + spdDaniel);
	dStanton = spdJohn * time;
	dHopeC = spdDaniel * time;
	cout<<"They both meet after "<<time<<" seconds"<<endl;
	cout<<"They meet at "<<dStanton<<" metres from Stanton and "<<dHopeC<<" metres from Hope Cove"<<endl;
	return 0;
}
