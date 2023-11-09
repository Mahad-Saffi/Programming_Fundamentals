#include<iostream>
using namespace std;

int digitSum(int number);
int totalDigits(int number);

main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    int result = digitSum(number);
    cout << "Sum of digits: " << result;
}
    

int digitSum(int number)
{
    int totaldigits = 0;
    totaldigits = totalDigits(number);
    int digit;
    int x = 1;
    int sum = 0;

    for(int i = 1; i <= totaldigits; i++)
    {
        digit = (number/x) % 10;
        sum = sum + digit;
        x = x * 10;
    }   
    return sum;
}

int totalDigits(int number)
{
    int x = 1, totaldigits = 0;;
    while(number/x != 0)
    {
        totaldigits = totaldigits + 1;
        x = x * 10;
    }
    return totaldigits;
}
