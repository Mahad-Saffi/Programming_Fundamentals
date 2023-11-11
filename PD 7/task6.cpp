#include <iostream>
using namespace std;

bool isPrime(int num);

int main() {
    int num, i = 2;
    int primorial = 1;

    cout << "Enter number: ";
    cin >> num;

    while (num > 0) {
        if (isPrime(i)) {
            primorial = primorial * i;
            num--;
        }
        i++;
    }

    cout <<  primorial << endl;

    return 0;
}

bool isPrime(int num) {
    int count = 0;
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            count++;
        }
    }
    
    if(count == 2)
    {
        return true;
    }
    else {
        return false;
    }
}
