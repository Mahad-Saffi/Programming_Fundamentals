#include <iostream>
#include <cmath>
using namespace std;

int calculateMoney(int age, int priceMachine, int priceToy);

main()
{
    int age;
    int priceMachine;
    int priceToy;

    cout << "Enter Lilly's age: ";
    cin >> age;

    cout << "Enter the price of the washing machine: ";
    cin >> priceMachine;

    cout << "Enter the unit price of each toy: ";
    cin >> priceToy;

    int result = calculateMoney(age, priceMachine, priceToy);

    if (result > 0)
    {
        cout << "Yes!" << endl;
        cout << result;
    }
    else if (result < 0)
    {
        cout << "No!" << endl;
        cout << abs(result);
    }
}

int calculateMoney(int age, int priceMachine, int priceToy) {
    int toy = 0;
    int money = 0;
    
    for (int i = 2; i <= age; i += 2) {
        money += 10 * (i / 2);  //for age 4 ---> 4/2=2 ---> 2*10=20
    }
    
    for (int i = 1; i < age; i += 2) {
        toy += priceToy;
    }
    
    int totalMoney = money - (age / 2); //Subtract even ages as in even ages brother takes 1 dollar from each money recieved.
    totalMoney += toy;

    int result = totalMoney - priceMachine;

    return result;
}


