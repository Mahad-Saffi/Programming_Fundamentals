#include <iostream>
using namespace std;

int calculateGCD(int num1, int num2);
int calculateLCM(int num1, int num2, int gcd);

main()
{
    int num1;
    int num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int gcd = calculateGCD(num1, num2);

    cout << "GCD: " << gcd << endl;

    cout << "LCM: " << calculateLCM(num1, num2, gcd);
}

int calculateGCD(int num1, int num2)
{
    int result = num1;

    if (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 -= num2;
            result = num1;

        }
        else if (num2 > num1) 
        {
            num2 -= num1;
            result = num2;
        }
        else {
            result;
        }
    }

    return result;
    
}

int calculateLCM(int num1, int num2, int gcd)
{
    int lcm = 0;

    lcm = (num1 * num2) / gcd;

    return lcm;
}
