#include <iostream>
using namespace std;

bool rearranged(int length, int arr[]);

main()
{
    int length;

    cout << "Enter the length of the array: ";
    cin >> length;

    int arr[length];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    cout << "Can be arranged: " << rearranged(length, arr);
}

bool rearranged(int length, int arr[])
{
    int temp = 0;

    // To make it in ascending order
    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            if (arr[i] > arr[j+1])
            {
                temp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

     bool result;
     for (int i = 0; i < length; i++)
     {
         if (arr[i] == arr[i+1])
         {
             result = false;
             break;
         }
         else if (arr[i+1] - arr[i] > 1)
         {
             result = false;
             break;
         }
         else {
             result = true;
         }
     
     return result;
    }
}