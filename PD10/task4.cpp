#include <iostream>
using namespace std;

main()
{
    int boxes, volume = 0;
    cout << "Enter the number of boxes: ";
    cin >> boxes;

    int dimentions[boxes*3];
    cout << "Enter the dimensions of the boxes (length, width, height):" << endl;
    for (int i = 0; i < boxes * 3; i++)
    {
        cin >> dimentions[i];
    }

    for (int i = 0; i < boxes*3; i += 3)
    {
        volume = volume + (dimentions[i] * dimentions[i+1] * dimentions[i+2]);
    }

    cout << "Total volume of all boxes: " << volume;
}