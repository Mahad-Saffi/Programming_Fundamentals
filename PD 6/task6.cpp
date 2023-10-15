#include <iostream>
using namespace std;

string calculateHotelPrices(string month, int stays);

main()
{
    string month;
    int stays;

    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;

    cout << "Enter the number of stays: ";
    cin >> stays;

    cout << calculateHotelPrices(month, stays);
}

string calculateHotelPrices(string month, int stays)
{
    float studio = 0;
    float apartment = 0;

    if (month == "May" || month == "October")
    {
        studio = 50.0;
        apartment = 65.0;
        if (stays <= 7)
        {
            studio;
        }
        else if (stays < 7 && stays <= 13)
        {
            studio = studio - (studio * 0.05);
        }
        else if (stays > 14)
        {
            studio = studio - (studio * 0.30);
        }
    }

    else if (month == "June" || month == "September")
    {
        studio = 75.20;
        apartment= 68.70;
        if (stays <= 14)
        {
            studio;
        }
        else if (stays > 14)
        {
            studio = studio - (studio * 0.20);
        }
    }

    else if (month == "July" || month == "August")
    {
        studio = 76.0;
        apartment = 77.0;
    }

    if (stays > 14)
    {
        apartment = apartment - (apartment * 0.10);
    }

    studio = studio * stays;
    apartment = apartment * stays;

    return "Apartment: " + to_string(apartment) + "$.\n" + "Studio: " + to_string(studio) + "$.";
}