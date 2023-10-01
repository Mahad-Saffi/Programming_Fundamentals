/*
Write a program that reads the number of holidays and passes it to the function named
pet(int holidays) and the function then prints whether Tom can sleep well and how much
the difference from the current year’s norm. It is assumed that there are 365 days in one
year.
*/



#include <iostream>
using namespace std;

void pet(int holidays);

int main()
{
	int holidays;

	cout << "Holidays: ";
	cin >> holidays;

	pet(holidays);
}

void pet(int holidays)
{
	int workingDays;
	int timeForGames;
	int difference;
	int hours;
	int minutes;

	workingDays = 365 - holidays;
	timeForGames = (workingDays * 63) + (holidays * 127);  //Calculating time as per given in manual.

	difference = 30000 - timeForGames;
	
	hours = difference / 60;     //Diving minutes by 60 to get hours in int. 
	minutes = difference % 60;   //Applying mod on difference value to get remaining minutes.(other are hours)

	if (holidays < 113)
		{
		cout << "Tom sleeps well" << endl;
		cout << hours << " hours and " << minutes << " minutes less for play";
		}

	if (holidays >= 113)
		{
		cout << "Tom will run away" << endl;
		cout << hours - hours - hours << " hours and " << minutes - minutes - minutes << " minutes for play";
		}
		/*
		Above we are using two times subtraction operator
		the reason for that is, the output of hours 
		and minutes comes in negative and time cannot
		be negative so by subtracting a negative value 
		from negative value gives us positive value.
		Applying this two time can give us the exact 
		same value but with positive sign.
		*/
}