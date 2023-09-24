#include <iostream>
using namespace std;
main ()
{
	int population;
	int birthsPerMonth;
	int finalPopulation;

	cout << "Enter the current world population: ";
	cin >> population;
	cout << "Enter the monthly birth rate (number of births per month): ";
	cin >> birthsPerMonth;
	finalPopulation = population + birthsPerMonth * 360;
	cout << "The population in three decades will be: " << finalPopulation;
}