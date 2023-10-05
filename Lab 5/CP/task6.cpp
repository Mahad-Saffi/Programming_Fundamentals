#include <iostream>
using namespace std;

string checkAlphabetCase(char character);

main()
{
    char character;
    string result;
    
    cout << "Enter a character (A/a): ";
    cin >> character;

    result = checkAlphabetCase(character);
}

string checkAlphabetCase(char character)
{
string answer;

    if (character == 'A')
    {
        cout << "You have entered Capital A";
        return answer;
    }

    if (character == 'a')
    {
        cout << "You have entered small a";
        return answer;
    }
}