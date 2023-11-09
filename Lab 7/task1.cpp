#include <iostream>
using namespace std;

void printTable(int number);

main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    printTable(number);
}

void printTable(int number)
{
    int multiply;

    for (int i = 1; i <= 10; i += 1)
    {
        multiply = number * i;

        cout << number << " X " << i << " = " << multiply << endl;
    }

}