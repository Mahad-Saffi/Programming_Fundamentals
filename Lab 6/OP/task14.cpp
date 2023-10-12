#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string calculateCost(float budget, string category, int numPeople);

main()
{
    float final_ans,budget;
    string category;
    int numPeople;

    cout << "Enter the budget: ";
    cin >> budget;

    cout << "Enter the category (VIP/Normal): ";
    cin >> category;

    cout << "Enter the number of people in the group: ";
    cin >> numPeople;

    
    cout << calculateCost(budget, category, numPeople);
}

string calculateCost(float budget, string category, int numPeople)
{
    float result;
    float finalResult = 0;

    if (category == "VIP")
    {
        if(numPeople < 5)
        {
            result = budget - (budget * 0.75);
        }

        else if(numPeople <= 5 && numPeople < 10)
        {
            result = budget - (budget * 0.60);
        }

        else if(numPeople <= 10 && numPeople < 25)
        {
            result = budget - (budget * 0.50);
        }

        else if(numPeople >= 25 && numPeople < 50)
        {
            result = budget - (budget * 0.40);
        }

        else if(numPeople >= 50)
        {
            result = budget - (budget * 0.25);
        }

        result = result - (numPeople * 499.99);
    }

    else if(category == "Normal")
    {
        if(numPeople < 5)
        {
            result = budget - (budget * 0.75);
        }

        else if(numPeople <= 5 && numPeople < 10)
        {
            result = budget - (budget * 0.60);
        }

        else if(numPeople >= 25 && numPeople < 50)
        {
            result = budget - (budget * 0.50);
        }

        else if(numPeople >= 50)
        {
            result = budget - (budget * 0.25);
        }

        result = result - (numPeople * 249.99);
    }

    if (result > 0)
    {
        return "Yes! You have " + to_string(result) + " leva left.";
    }

    else{
        finalResult = abs(result);
        return "Not enough money! You need " + to_string(finalResult) + " leva.";
    }

}