#include <iostream>
using namespace std;

int rotations(int length, string arr[]);

main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;

    string arr[length];
    cout << "Enter the elements of the array (\"left\" or \"right\"):" << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    


    cout << "Number of full rotations: " << rotations(length, arr);
}

int rotations(int length, string arr[])
{
    int angle = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == "right")
        {
            angle += 90;
        }
        else if (arr[i] == "left")
        {
            angle -= 90;
        }
    }
    angle = abs(angle);

    int rotation = 0;
    while (angle > 0)
    {
        if (angle == 360)
        {
            rotation++;
        }
        angle -= 360;
    }

    return rotation;
}