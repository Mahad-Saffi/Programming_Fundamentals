#include <iostream>
#include <string>
using namespace std;

string passOrFail(int score);

main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;

    cout << passOrFail(score);
    return 0;
}

string passOrFail(int score)
{
    string result;
    if (score >= 50)
    {
        result = "You are passed with " + to_string(score) + " marks"; 
    }
    else{
        result = "you are failed with " + to_string(score) + " marks";
    }
    return result;
}