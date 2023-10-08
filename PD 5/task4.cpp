//You have to make a function projectTimeCalculation that takes needed hours, days that
//the firm has and number of workers as input and then returns the string as answer.

#include <iostream>
using namespace std;

string projectTimeCalculation(int hours, int days, int workers);    //function prototype

main()
{
    int hours;
    int days;
    int workers;

    cout << "Enter the needed hours: ";
    cin >> hours;

    cout << "Enter the days that the firm has: ";
    cin >> days;

    cout << "Enter the number of all workers: ";
    cin >> workers;

    string result = projectTimeCalculation(hours, days, workers);    //showing the result

    cout << result;
}

string projectTimeCalculation(int hours, int days, int workers)     //this function calculate how much time you have or you are out of time
{
    int hoursInDay; 
    int totalHours;
    string answer;

    hoursInDay = ((8 - (8.0 * (10 / 100.0))) + 2);                  //total hours a worker work
    totalHours = days * hoursInDay;                                 //total hours a worker work in given days
    
    totalHours = totalHours * workers;                              //total hours given worker work in given hours

    if (totalHours < hours)                                         //if calculated hours are less than given hours
    {
        hours = hours - totalHours;

        cout << "Not enough time! " + to_string(hours) + " hours needed.";
        cin >> answer;
    }

    if (totalHours > hours)                                         //if calculated hours are enough
    {
        hours = totalHours - hours;

        cout << "Yes! " + to_string(hours) + " hours left.";
        cin >> answer;
    }

    return answer;
}