#include <iostream>
using namespace std;

float bill(char code, char time, float minutes);

main()
{
    char code;
    char time;
    float minutes;

    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> code;

    if (code == 'P' || code == 'p')
    {
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time; 

        cout << "Enter the number of minutes used: ";
        cin >> minutes;
    }

    else if (code == 'R' || code == 'r')
    {
        cout << "Enter the number of minutes used: ";
        cin >> minutes;
    }

    float result = bill(code, time, minutes);
    
    if (code == 'R' || code == 'r')
    {
        cout << "Service Type: Regular" << endl;
    }
    else if (code == 'p' || code == 'P')
    {
        cout << "Service Type: Premium" << endl;
    }

    cout << "Total Minutes Used: " << minutes << " minutes" << endl;
    cout << "Amount Due: $" << result << endl;
    
}

float bill(char code, char time, float minutes)
{
    float result = 0.0;
    if (code == 'p' || code == 'P')
    {
        if (time == 'd' || time == 'D')
        {
            if (minutes <= 75)
            {
                result = 25.0;
            }
            else if (minutes > 75)
            {
                result = (0.10 * (minutes - 75.0)) + 25.0;
            }
        }

        else if (time == 'N' || time == 'n')
        {
            if (minutes <= 100)
            {
                result = 25.0;
            }
            else if (minutes > 100)
            {
                result = (0.05 * (minutes - 100.0)) + 25.0;
            }
        }
    }
    else if (code == 'R' || code == 'r')
    {
        if (minutes <= 50)
        {
            result = 10.0;
        }
        else if (minutes > 50)
        {
            result = (0.20 * (minutes - 50)) + 10.0;
        }
    }
    return result;
}