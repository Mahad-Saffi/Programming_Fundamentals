#include <iostream>
using namespace std;

int main()
{
	int number; 
	int digit_1;
	int digit_2;
	int digit_3;
	int digit_4;
	int number_1;
	int number_2;
	int number_3;
	int number_4;
	int number_5;
	int total_4;
	int sum;

	cout << "Enter a 4-digit number: ";
	cin >> number_5;

	number_1 = number_5 % 10;
	digit_1 = number_5 / 10;

	number_2 = digit_1 % 10;
	digit_2 = digit_1 / 10;

	number_3 = digit_2 % 10;
	digit_3 = digit_2 / 10;

	number_4 = digit_3 % 10;
	digit_4 = digit_3 / 10;

	sum = number_1 + number_2 + number_3 + number_4;
	cout << "Sum of the individual digits: " << sum;

}