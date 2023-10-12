//Return true if number 1 is greater otherwise return false

#include <iostream>
using namespace std;

bool greaterNumber(int num1, int num2);

main()
{
    int num1;
    int num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << greaterNumber(num1, num2);
    
}

bool greaterNumber(int num1, int num2)  //it takes numbers and using if loop to see which num is greater
{
    if (num1 > num2)        //if num1 is greater tha num2 then return 1
    {
        return true;
    }

    else                    //if num1 is not greater than num2 return
    {
        return false;
    }
}