//Program to find even and odd numbers

#include<iostream>
using namespace std;

int oddishOrEvenish(int number);

main(){
	int number;
	
	cout << "Enter a five-digit number: ";
	cin >> number;
	
	int result = oddishOrEvenish(number);	//return the value of sum in result variable

	if (result % 2 == 0)			//If sum mod 2 is equal to 0 then it means it is even number
	{
		cout << "Evenish";
	}

	if (result % 2 != 0)			//If sum mod 2 is not equal to 0 then it means it is odd number
	{
		cout << "Oddish";
	}	
}

int oddishOrEvenish(int number)		//This function will sum the indiviual digits by using mod and division operator
{
	int digit1;
	int digit2;
	int digit3;
	int digit4;
	int digit5;

	digit1 = number / 10000;           // Extract the ten-thousands digit
        digit2 = (number % 10000) / 1000;  // Extract the thousands digit
        digit3 = (number % 1000) / 100;    // Extract the hundreds digit
        digit4 = (number % 100) / 10;      // Extract the tens digit
        digit5 = number % 10;              // Extract the ones digit

	int sum = digit1 + digit2 + digit3 + digit4 + digit5;
	
	return (sum);
}