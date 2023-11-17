#include <iostream>
using namespace std;

main()
{
    int size, count = 0;
    string arr[100];
    char letter;

    cout << "Enter how many words you want to enter: "; cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter word " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the letter you want to count: ";
    cin >> letter;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < arr[i].length(); j++)
        {
            if (arr[i][j] == letter)
            {
                count++;
            }
        }
    }

    cout << letter << " shows up " << count << " times in the data.";
}