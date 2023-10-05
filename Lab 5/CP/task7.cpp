#include <iostream>
using namespace std;

bool isSymmetrical(int number);		// Function to check if a number is symmetrical

int main() 
    {
    int number;
    bool result;
    
    cout << "Enter a three-digit number: ";
    cin >> number;

    result = isSymmetrical(number);	//return the answer of isSymmetrical function in result variable

    if (result)				//if return value of result is true then print it
    {
        cout << "The number is symmetrical." << endl;
    } 

    if (!result) 			//if return value of result is not true then print it
    {
        cout << "The number is not symmetrical." << endl;
    }

    return 0;
}

bool isSymmetrical(int number) 
    {
    int orignalNumber = number;		// Store the number in a variable called orignalNumber for comparision later
    int reverse = 0;			// Initialize a variable to store the reverse of the number

    while (number > 0) {
        int digit = number % 10;	// Extract the last digit of the number
        reverse = reverse * 10 + digit;	//Save the digit in reverse variable
        number /= 10;			// Remove the last digit from the original number
    }

    return (orignalNumber == reverse);	// Check if the originalNumber is equal to its reverse and return true if they are equal
}
