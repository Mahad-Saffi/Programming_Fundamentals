#include <iostream>
using namespace std;

bool isRepeatingCycle(int length, int arr[],int cycle);

main()
{
    int length, cycle;
    cout << "Enter the length of the array: "; cin >> length;

    int arr[length];
    cout << "Enter the elements of the array:" << endl;
    
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the length of the cycle: ";
    cin >> cycle;

    cout << "Output: " << isRepeatingCycle(length, arr, cycle);
}

bool isRepeatingCycle(int length, int arr[],int cycle)
{
    int count = 0;
    if (cycle > length)
    {
        return true;
    }

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == cycle)
        {
            count++;
        }
    }

    if (count >= 2)
    {
        return true;
    }
}