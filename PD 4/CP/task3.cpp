/*Program in which different airline companies 
give you different discounts according to your country.*/

#include <iostream>
using namespace std;

void discount(string country, float price);

int main()
{
	string country;
	float price;
	
	cout << "Enter the country's name: ";
	cin >> country;
	cout << "Enter the ticket price in dollars: $";
	cin >> price;

	discount(country, price);
}

void discount(string country, float price)
{
	float discount;
 if (country == "Pakistan")	//If country is pakistan then give 5% discount.
	{
	discount = price - (price * (5.0 / 100.0));
	cout << "Final ticket price after discount: $" << discount << endl;
}

 if (country == "Ireland")
	{
	discount = price - (price * (10.0 / 100.0));	//Formula to calculate discount for given country.
	cout << "Final ticket price after discount: $" << discount << endl;
}

 if (country == "India")
	{
	discount = price - (price * (20.0 / 100.0));
	cout << "Final ticket price after discount: $" << discount << endl;
}

 if (country == "England")
	{
	discount = price - (price * (30.0 / 100.0));
	cout << "Final ticket price after discount: $" << discount << endl;
}

 if (country == "Canada")
	{
	discount = price - (price * (45.0 / 100.0));
	cout << "Final ticket price after discount: $" << discount << endl;
}


}