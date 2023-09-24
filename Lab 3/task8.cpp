#include <iostream>
using namespace std;
main ()
{
	float voltage;
	float current;
	float power;
	cout << "Enter voltage (in volts): ";
	cin >> voltage;
	cout << "Enter current (in amperes): ";
	cin >> current;
	power = voltage * current;
	cout << "The power is " << power << " watts.";
}