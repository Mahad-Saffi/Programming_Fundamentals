#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float a;
    float b;
    float c;
    float discriminant;
    

    cout << "Enter the value of a: ";
    cin >> a;
    
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the value of c: ";
    cin >> c;

    discriminant = pow(b, 2) - (4 * a * c);

    if (discriminant > 0)
    {
        float root1 = ((-1 * b) + sqrt(discriminant)) / (2 * a);
        float root2 = ((-1 * b) - sqrt(discriminant)) / (2 * a);

        cout << "Solutions: x = " << root1 << " and x = " << root2;
    }

    if (discriminant == 0)
    {
        float root = (-1 * b) / (2 * a);
        
        cout << "Solution: x = " << root;
    }

    if (discriminant < 0 )
    {
        float root = (-1 * b) / (2 * a);
        float root1 = (sqrt(-1 * (pow(b, 2) - (4 * a * c)))) / (2 * a);
        float root2 = (sqrt(-1 * (pow(b, 2) - (4 * a * c)))) / (2 * a);

        cout << "Complex Solutions: x = " << root << " + " << root1 << "i" << " and x = " << root << " - " << root2 << "i"; 
    }
}