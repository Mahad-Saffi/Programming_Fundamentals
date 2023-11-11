#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number);

main()
{
    int number;
    bool prime = true;

    cout << "Enter number: ";
    cin >> number;

    cout << isPrime(number);
}

bool isPrime(int number)
{
    bool prime = true;

    if (number == 0 || number == 1) 
    {
        return prime = false;
    }

    for (int i = 2; i <= number/2; i++)
    {
        if (number % i == 0)
        {
            return prime = false;
            break;
        }
    }
        return prime;

    
}