//Program that takes two value and print the longest duration.

#include <iostream>
using namespace std;

void longestTime(int hour, int minute);

int main()
{
	int hour;
	int minute;
	
	cout << "Enter the number of hours: ";
	cin >> hour;

	cout << "Enter the number of minutes: ";
	cin >> minute;

	longestTime(hour, minute);
}

void longestTime(int hour, int minute)
{
 if ((hour * 60) < minute)           //converting hours to minutes by multiplying by 60 for comparision
{                                    //1 hour = 60 minutes
	cout << minute;
}

 if ((hour * 60) > minute)
{
	cout << hour;
}

}