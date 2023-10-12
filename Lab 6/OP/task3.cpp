#include <iostream>
using namespace std;

float perimeter(char letter, float num);

main()
{
    char letter;
    float num;

    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> letter;

    cout << "Enter the value: ";
    cin >> num;

    float result = perimeter(letter, num);
    
    cout << "The perimeter is: " << result;
}

float perimeter(char letter, float num)
{
    float result;
    if (letter == 's')
    {
        result = num * 4.0;
    }

    if (letter == 'c')
    {
        result = num * 6.28;
    }

    if (letter == 't')
    {
        result = num * 3.0;
    }

    if (letter == 'h')
    {
        result = num * 6.0;
    }

    return result;
}