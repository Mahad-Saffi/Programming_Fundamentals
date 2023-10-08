//Taking the parameters from user to print volume of pyramid.

#include <iostream>
using namespace std;

string pyramidVolume(float length, float width, float height, string unit); //function prototype

main()
{
    float length;
    float width;
    float height;
    string unit;

    cout << "Enter the length of the pyramid (in meters): ";
    cin >> length;

    cout << "Enter the width of the pyramid (in meters): ";
    cin >> width;

    cout << "Enter the height of the pyramid (in meters): ";
    cin >> height;

    string result = pyramidVolume(length, width, height, unit);     //Assigned variable result to return value of volume.

    return 0;
}

string pyramidVolume(float length, float width, float height, string unit)  //this function takes length, height, width
{                                                                           //as parameters and take unit of measurement from user
    float answerInMeters = (length * width * height) / 3;                   //and performs calculations and return volume of pyramid.
    string answer;

    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;

    if (unit == "millimeters")  //It converts from volume in meter to millimeter.
    {
        float answerInMillimeters = answerInMeters * 1000;
        cout << "The volume of the pyramid is: " + to_string(answerInMillimeters) + " cubic millimeters";
        cin >> answer;
    }

    if (unit == "centimeters")  //It converts volume of pyramid to centimeters
    {
        float answerInCentimeters = answerInMeters * 100;
        cout << "The volume of the pyramid is: " + to_string(answerInCentimeters) + " cubic centimeters";
        cin >> answer;
    }

        if (unit == "meters")
    {
        cout << "The volume of the pyramid is: " + to_string(answerInMeters) + " cubic meters";
        cin >> answer;
    }

        if (unit == "kilometers")   //It converts volume into kilometers.
    {
        float answerInKilometers = answerInMeters / 1000;
        cout << "The volume of the pyramid is: " + to_string(answerInKilometers) + " cubic kilometers";
        cin >> answer;
    }

    return answer;      //Return the value of volume
}