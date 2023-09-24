#include <iostream>
using namespace std;

int main()
{
	float veg_kilo, fruit_kilo;
	int total_veg, total_fruit;
	float total_coins, total_rps;


	cout << "Enter vegetable price per kilogram (in coins): ";
	cin >> veg_kilo;
	cout << "Enter fruit price per kilogram (in coins): ";
	cin >> fruit_kilo;
	cout << "Enter total kilograms of vegetables: ";
	cin >> total_veg;
	cout << "Enter total kilograms of fruits: ";
	cin >> total_fruit;
	
	total_coins = veg_kilo * total_veg + fruit_kilo * total_fruit;
	total_rps = total_coins / 1.94;
	
	cout << "Total earnings in Rupees (Rps): " << total_rps;

}