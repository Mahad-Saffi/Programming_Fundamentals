#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float distance;
    float angleInDegrees;
    float angleInRadians;

    cout << "Enter the distance from the base of the tree (in feet): ";
    cin >> distance;

    cout << "Enter the angle of elevation (in degrees): ";
    cin >> angleInDegrees;

    angleInRadians = angleInDegrees / 57.2958;

    cout << "The height of the tree is: " << tan(angleInRadians) * distance << " feet";


}