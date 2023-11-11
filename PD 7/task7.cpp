#include <iostream>
using namespace std;

void patients(int visitdays);

int main()
{
    int visitdays;

    cout << "Enter number of days you visited Hospital: ";
    cin >> visitdays;

    patients(visitdays);
}

void patients(int visitdays)
{
    int num, treated = 0, untreated = 0, treatedByDoctor = 7;
    for (int i = 1; i <= visitdays; i++)
    {
        cout << "Number of patients who visited hospital on day " << i << ": ";
        cin >> num;

        if (i % 3 == 0 && untreated > treated)
        {
            treatedByDoctor++;
        }
        if (num <= treatedByDoctor)
            treated += num;
        else if (num > treatedByDoctor)
        {
            treated += treatedByDoctor;
            untreated += (num - treatedByDoctor);
        }

    }

    cout << "Treated Patients: " << treated << endl;
    cout << "Untreated Patients: " << untreated;
}