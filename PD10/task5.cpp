#include <iostream>
using namespace std;

main()
{
    int packages[10], result = 0, temp = 0;

    cout << "Enter the weights of the 10 packages:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> packages[i];
    }

    cout << "Sorted array in ascending order: [";
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 9; j++)
        {
            if (packages[i] > packages[j+1])
            {
                temp = packages[i];
                packages[i] = packages[j+1];
                packages[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
        {
        cout << packages[i] << ", ";
        }
        else {
            cout << packages[i];
        }
    }
    cout << "]";
}