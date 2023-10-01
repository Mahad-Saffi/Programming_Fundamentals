/*Write a funtion for which 
if two numbers are equal then print true
otherwise false.*/

#include <iostream>
using namespace std;

void isEqual(int num_1, int num_2); //Function prototype

int main()
{
	int num_1;                      //decleration of variables
	int num_2; 

	cout << "Enter the first number: ";
	cin >> num_1;
	cout << "Enter the second number: ";
	cin >> num_2;

	isEqual(num_1, num_2);          //call for funtion
}

void isEqual(int num_1, int num_2)
{
	if (num_1 == num_2)             //if two numbers are equal then execute it.
		{
		cout << "true";
			}
	
	if (num_1 != num_2)             //if two numbers are not equal then execute it.
		{
		cout << "false";
			}
}