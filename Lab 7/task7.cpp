#include <iostream>
#include <iomanip>
using namespace std;

void percentage(int count);

main()
{
    int count;

    cout << "Enter numbers count: ";
    cin >> count;

    percentage(count);
}

void percentage(int count)
{
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    for (int i = 0; i < count; i++) {
        int number;
        cout << "Enter a number: ";
        cin >> number;

        if (number < 200)
            p1++;
        else if (number >= 200 && number < 400)
            p2++;
        else if (number >= 400 && number < 600)
            p3++;
        else if (number >= 600 && number < 800)
            p4++;
        else
            p5++;
    }

    double per_1 = (p1 * 100.0) / count;
    double per_2 = (p2 * 100.0) / count;
    double per_3 = (p3 * 100.0) / count;
    double per_4 = (p4 * 100.0) / count;
    double per_5 = (p5 * 100.0) / count;

    cout << fixed << setprecision(2) << per_1 << "%" << endl;
    cout << fixed << setprecision(2) << per_2 << "%" << endl;
    cout << fixed << setprecision(2) << per_3 << "%" << endl;
    cout << fixed << setprecision(2) << per_4 << "%" << endl;
    cout << fixed << setprecision(2) << per_5 << "%" << endl;
}