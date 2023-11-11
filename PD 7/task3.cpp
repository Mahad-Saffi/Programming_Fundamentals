#include <iostream>
using namespace std;

void amplify(int num);

main()
{
    int num;
    
    cout << "Enter the number to amplify: ";
    cin >> num;

    amplify(num);
}

void amplify(int num)
{
    cout << "1";
    for (int i = 2; i <= num; i++)
    {
        if (i % 4 == 0)
        {
            cout << ", ";
            cout << (i * 10);
        }
        else if(i % 4 != 0)
        {
            cout << ", ";
            cout << i;
        }
    }
}