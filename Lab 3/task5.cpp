#include <iostream>
using namespace std;

int main()
{
	string name;
	float matric;
	float inter;
	float ecat;
	float aggregate;

	cout << "Enter the student's name: ";
	cin >> name;
	cout << "Enter matriculation marks (out of 1100): ";
	cin >> matric;
	cout << "Enter intermediate marks (out of 550): ";
	cin >> inter;
	cout << "Enter ecat marks (out of 400): ";
	cin >> ecat;

	aggregate = 10 * matric / 1100 + 40 * inter / 550 + 50 * ecat / 400;
	cout << "Aggregate score for " << name << " in UET is: " << aggregate << "%";
}


