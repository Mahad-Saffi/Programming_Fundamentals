/*
 Create a function that will receive two parameters:
● people — Number of people in the household.
● tp — Number of rolls.
print a statement telling the user if they need to buy more TP!
*/




#include <iostream>
using namespace std;

void tpChecker(int people, int tp);

int main()
{
	int people;
	int tp;

	cout << "Number of people in the household: ";
	cin >> people;

	cout << "Number of rolls of TP: ";
	cin >> tp;

	tpChecker(people, tp);
}

void tpChecker(int people, int tp)
{
	int days = 14;
	int sheetsPerRoll = 500;
	int sheetsPerDay = 57;

	int totalSheets = people * sheetsPerDay * days;        // Calculate total sheets used
	int totalRolls = totalSheets / sheetsPerRoll;          // Calculate total rolls needed

	days = tp * sheetsPerRoll / (people * sheetsPerDay);   // Calculate days remaining

	if (tp < totalRolls)                                   //If we have rolls less than needed then print it
	{
        cout << "Your TP will only last " << days << " days, buy more!" << endl;
    	}

	if (tp >= totalRolls)                                  //If we have rolls equal or more than needed then print it
	{
        cout << "Your TP will last " << days << " days, no need to panic!" << endl;
    	}
}
