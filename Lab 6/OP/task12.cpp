#include <iostream>
using namespace std;

float totalIncome(string, int, int);

main()
{
    string type;
    int rows;
    int columns;

    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> type;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> columns;

    cout << totalIncome(type, rows, columns);
}

float totalIncome(string type, int rows, int columns)
{
    float totalIncome;
    float result;

    if(type == "Premiere")
    {
        result = rows * columns * 12.0;
    }

    if(type == "Normal")
    {
        result = rows * columns * 7.5;
    }

    if(type == "Discount")
    {
        result = rows * columns * 5.0;
    }

    return result;
}