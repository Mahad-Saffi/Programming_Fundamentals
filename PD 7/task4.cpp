#include <iostream>
using namespace std;

int triangle(int);

main()
{
    int number;
    int triangles;

    cout << "Enter number of triangle: ";
    cin >> number;

    cout << "Dots in the Triangle: " <<  triangle(number);
    
} 

int triangle(int triangles)
{
    int baseNumber = 1;
    int sum = 0;
    int number;
    int increment = 1;

    for (int i = 0; i < triangles; i++)
    {   
        number = baseNumber + sum;

        sum++;
        baseNumber += increment;
        increment++;
    }
    return number;
}

// There's a sequence going on in dots 1, 3, 6, 10, 15,..
// We will take two variable sum and base number and
// and increment sum by 1 every triangle and also base 
// number by increament (Whose initial value is 1) and
// ++ the increament by 1 in every iteration. and add base 
// number and increament in every iteration.