#include<iostream>
using namespace std;

int digitSum(int number);
int frequencyChecker(int number, int digit);
int totalDigits(int number);

main(){
    int number;
    int digit;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter the digit to check: ";
    cin >> digit;

    cout << "Frequency: " << frequencyChecker(number, digit);
    }
    

int frequencyChecker(int number, int digit)
{
    int totaldigits = 0;
    totaldigits = totalDigits(number);
    int frequency = 0;
    int x = 1;
    int dig;

    for(int i = 1; i <= totaldigits; i++){
        dig = (number/x) % 10;
        x = x * 10;
    
        if(dig == digit)    //if the digit from total digits is equal to number, Then increment frequency.
        {
            frequency = frequency + 1;
        }
    
    }
    return frequency;
}

int totalDigits(int number)     //This funtion takes total number of digits
{
    int div = 1, totaldigits = 0;
    while( number/div != 0)
    {
        totaldigits = totaldigits + 1;
        div = div * 10;
    }
    
    return totaldigits;
}
