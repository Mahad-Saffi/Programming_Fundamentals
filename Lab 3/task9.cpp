#include <iostream>
using namespace std;
main ()
{
	int years;
	int days;
	cout << "Enter your age in years: ";
	cin >> years;
	days = years * 365;
	cout << "Your age in days is approximately " << days << " days.";
}