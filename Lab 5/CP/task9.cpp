#include <iostream>
using namespace std;

string timeTravel(int hours,int minutes);

main()
{
	int hours,minutes;

	cout << "Enter Hours: ";
	cin >> hours;

	cout << "Enter Minutes: ";
	cin >> minutes;

	timeTravel(hours, minutes);    // Call the timeTravel function to calculate the time after 15 minutes

}
string timeTravel(int hours, int minutes)	// Function to calculate time after adding 15 minutes

{	// Ensure hours are within 24-hour format and minutes within 60 minutes
	hours = hours % 24;
	minutes = minutes % 60;

	int totaltime = hours * 60 + minutes + 15;	// Calculate the total time in minutes

	int h = totaltime / 60;    // Calculate the new hours and minutes
	int m = totaltime % 60;

	cout << h << ":" << m;	
}	