#include <iostream>
using namespace std;

int specialValue(int length, int arr[]);

main()
{
    int length;
    cout <<"Enter the length of the array: ";
    cin >> length;

    int arr[length];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    cout << "Special value: " << specialValue(length, arr);
}

int specialValue(int length, int arr[])
{
    int count = 0, specialValue = 0;


    for (int i = 0; i < length; i++)
    {
            if (arr[i] != 0)
            {
                count++;
            }
    }

    for (int i = 0; i < length; i++)
    {
        if (arr[i] >= count && arr[i] != 0)
        {
            specialValue++;
        }
    }

    if (specialValue == count && specialValue != 0)
    {
        return specialValue;
    }
    else {
        return -1;
    }
}
