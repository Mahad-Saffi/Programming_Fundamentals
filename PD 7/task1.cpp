#include <iostream>
using namespace std;

void uprightTriangle(int rows);

main()
{
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    uprightTriangle(rows);
}

void uprightTriangle(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
}