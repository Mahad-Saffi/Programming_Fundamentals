#include <iostream>
using namespace std;

int main()
{
	float imposterCount;
	float playerCount;
	int chance;

	cout << "Enter Imposter Count: ";
	cin >> imposterCount;
	cout << "Enter Player Count: ";
	cin >> playerCount;
	
	chance = 100 * (imposterCount / playerCount);
	cout << "Chance of being an imposter: " << chance << "%";
}