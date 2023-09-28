//Task09 (OP): Let's Fuel Up Again!

#include <iostream>
using namespace std;

void calculateFuel(float distance);

main()
{
	float distance;
	cout << "Enter the distance: ";
	cin >> distance;
	calculateFuel(distance);

}

void calculateFuel(float distance)
{
	int fuel;
	fuel = distance * 10;
	if (fuel >= 100) {
		cout << "Fuel needed: " << fuel;
		}

	if (fuel < 100) {
		cout << "Fuel needed: "  << "100"; 
		}
}