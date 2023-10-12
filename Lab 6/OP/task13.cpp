#include <iostream>
using namespace std;

float lowestPrice(int, string);

main()
{
    int kilometer;
    string period;

    cout << "Enter the number of kilometers: ";
    cin >> kilometer;

    cout << "Enter the period of the day (day/night): ";
    cin >> period;

    float result = lowestPrice(kilometer, period);

    cout << "Lowest price for "<< kilometer << " kilometers: " << result << " EUR";
}

float lowestPrice(int kilometer, string period)
{
    float result;

    if (kilometer < 20 && period == "day")
    {
       result = 0.7 + kilometer * 0.79;
    }

    if (kilometer < 20 && period == "night")
    {
       result = 0.7 + kilometer * 0.90;
    }
   
    if (kilometer >= 20 && kilometer < 100 && (period == "day" || period == "night"))
    {
        result = 0.09 * kilometer;
    }

    if (kilometer >= 100 && (period == "day" || period == "night"))
    {
        result = 0.06 * kilometer;
    }

    return result;
}