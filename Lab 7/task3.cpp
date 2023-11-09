#include <iostream>
using namespace std;

int totalDigits(int number);

main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Total number of digits: " << totalDigits(number);
}

int totalDigits(int number)
{
    int digit = 0;
    int x = 1;

    while (number / x != 0)
    {
        digit += 1;
        x *= 10;
    }
    if (number == 0)
    {
        return 1;
    }
    return digit;
}