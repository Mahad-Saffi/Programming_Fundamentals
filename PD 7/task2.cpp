#include <iostream>
using namespace std;

void upperTriangle(int rows);
void lowerTriangle(int rows);

main()
{
    int rows;

    cout << "Enter desired number of rows: ";
    cin >> rows;

    rows = rows / 2;

    upperTriangle(rows);
    lowerTriangle(rows);

}

void upperTriangle(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = rows; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }    
}

void lowerTriangle(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = i; k < rows; k++)
        {
            cout << "*";
        }
        cout << endl;

    }
}
