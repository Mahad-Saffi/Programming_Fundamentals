#include <iostream>
using namespace std;

int main() 
{
	float charge;
	float time;
	float current;

	cout << "Enter the charge (Q) in coulombs: ";
	cin >> charge;
	cout << "Enter the time (t) in seconds: ";
	cin >> time;
	current = charge / time;
	cout << "The current (I) is: " << current << " Amperes.";

}