/*You’ve been hired by an Automobile company to write a program to help the tax
collector calculate vehicle taxes. Vehicle taxes are based on two pieces of information;
the price of the vehicle and the vehicle type code.*/

#include <iostream>
using namespace std;

float taxCalculator(char type, float price);    //function prototype

main()
{
    char type;
    float price;

    cout << "Enter the vehicle type code (M, E, S, V, T): ";    //asking vehicle code as input
    cin >> type;

    cout << "Enter the price of the vehicle: $";    //taking the price of vehicle.
    cin >> price;

    float result = taxCalculator(type, price);

    cout << "The final price of a vehicle of type " << type << " after adding the tax is: $" << result << ".";  //print final amount.

}

float taxCalculator(char type, float price)
{
    float taxRate;
    float taxAmount;
    float finalAmount;


    if (type == 'M')                        //using if loops to give discount according to vehicle type.
    {
        taxAmount = price * (6 / 100.0);
        finalAmount = price + taxAmount;
    }

    if (type == 'E')                        //If vehicle type is 'E' then give 8% discount on total amount.
    {
        taxAmount = price * (8 / 100.0);
        finalAmount = price + taxAmount;
    }

    if (type == 'S')
    {
        taxAmount = price * (10 / 100.0);
        finalAmount = price + taxAmount;
    }

    if (type == 'V')
    {
        taxAmount = price * (12 / 100.0);
        finalAmount = price + taxAmount;
    }

    if (type == 'T')
    {
        taxAmount = price * (15 / 100.0);
        finalAmount = price + taxAmount;
    }

    return finalAmount;                //return the final amount.
}