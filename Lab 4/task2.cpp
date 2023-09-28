//Task02(OP): Inches to Feet

#include <iostream>
using namespace std;

void inchesToFeet(float inches);

main ()
{
	float inches;
	cout << "Enter the measurement in inches: ";
	cin >> inches;
	inchesToFeet(inches);

}

void inchesToFeet(float inches)
{
	float feet;
	feet = inches * (1/12.0);
	cout << "Equivalent in feet: " << feet;	
}