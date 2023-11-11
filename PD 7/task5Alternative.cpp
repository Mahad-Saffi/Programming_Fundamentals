#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number);

main()
{
    int number;
    
    cout << "Enter number: ";
    cin >> number;

    cout << isPrime(number);
}

bool isPrime(int number)
{
    int sqrNumber = sqrt(number);

    if (number == 2 || number == 3)
    {
        return true;
    }
    else if (number % sqrNumber == 0)
    {
        return false;
    }
    else if(number % sqrNumber != 0)
    {
        return true;
    }
    else{
    return true;
    }
}