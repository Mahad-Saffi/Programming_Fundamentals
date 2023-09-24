#include <iostream>
using namespace std;

int main()
{
	int number;
	int sum;

	cout << "Enter number: ";
	cin >> number;
	sum = number;

	cout << "Enter number: ";
	cin >> number;
	sum = sum + number;

	cout << "Enter number: ";
	cin >> number;
	sum = sum + number;

	cout << "Enter number: ";
	cin >> number;
	sum = sum + number;

	cout << "Enter number: ";
	cin >> number;
	sum = sum + number;

	cout << "Sum of 5 numbers are: " << sum;	
}