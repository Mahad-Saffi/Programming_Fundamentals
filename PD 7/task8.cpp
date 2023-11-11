#include <iostream>
#include <iomanip>
using namespace std;

main()
{
    float count, tonnage = 0, totalTonnage = 0, miniBus = 0, truck = 0, train = 0;

    cout << "Enter the count of cargo for transportation: ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << "Enter the tonnage of cargo " << i+1 << ": ";
        cin >> tonnage;

        totalTonnage += tonnage;

        if (tonnage <= 3)
        {
            miniBus += tonnage;
        }
        else if (tonnage > 3 && tonnage <= 11)
        {
            truck += tonnage;
        }
        else {
            train += tonnage;
        }
    }

    cout << fixed << setprecision(2) << (miniBus * 200 + truck * 175 + train * 120) / totalTonnage << "%" << endl;
    cout << fixed << setprecision(2) << (miniBus * 100) / totalTonnage << endl;
    cout << fixed << setprecision(2) << (truck * 100) / totalTonnage << endl;
    cout << fixed << setprecision(2) << (train * 100) / totalTonnage;
}