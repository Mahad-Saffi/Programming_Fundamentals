#include <iostream>
using namespace std;

string reversedWords(string sentence);

main()
{
    string sentence;

    cout << "Enter a string: ";
    getline(cin, sentence);

    cout << "Reversed string: " << reversedWords(sentence);
}

string reversedWords(string sentence)
{
    string result = "", temp = "";

    for (int i = sentence.length() - 1; i >= 0; i--)
    {
        if (sentence[i] == ' ')
        {
            for (int j = i+1; j < sentence.length() && sentence[j] != ' '; j++)
            {
                result += sentence[j];
            }
            result += " ";
        }

        else if (i == 0)
        {
            for (int j = i; j < sentence.length() && sentence[j] != ' '; j++)
            {
                result += sentence[j];
            }
        }
    }


    return result;
}