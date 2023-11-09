#include <iostream>
#include <cmath>
using namespace std;

int calculatePrice(int money, int year);

main()
{
    int money;
    int year;

    cout << "Enter Money: ";
    cin >> money;

    cout << "Enter Year: ";
    cin >> year;

    int result = calculatePrice(money, year);

    if (result >= 0)
    {
        cout << "Yes! He will live  a carefree life and will have " << result << " dollars left.";
    }
    else {
        cout << "He will need " << abs(result) << " dollars to survive.";
    }
}

int calculatePrice(int money, int year)
{
    for (int currentYear = 1800; currentYear <= year; currentYear++)
    {
        if (currentYear % 2 == 0)
        {
            money -= 12000;
        }
        else
        {
            money -= 12000 + 50 * (18 + currentYear - 1800);
        }
    }

    return money;
}