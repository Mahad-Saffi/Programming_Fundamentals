#include <iostream>
using namespace std;

int main() 
{
	float initial_v;
	float final_v;
	float acc;
	float time;

	cout << "Enter Initial Velocity (m/s): ";
	cin >> initial_v;
	cout << "Enter Acceleration (m/s^2): ";
	cin >> acc;
	cout << "Enter Time (s): ";
	cin >> time;

	final_v = initial_v + acc * time;
	cout << "Final Velocity (m/s): " << final_v;



}