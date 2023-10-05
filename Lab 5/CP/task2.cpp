#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float base;
    float exponent;

    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    cout << base << " raised to the power " << exponent << " is: " << pow(base, exponent);
}