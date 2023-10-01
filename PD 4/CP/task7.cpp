/*Write a program that takes the number of red roses, white roses, tulips as input from the
user, and the function then calculates the total price of the flowers.

#include <iostream>
using namespace std;

void flowerShop(float redRose, float whiteRose, float tulip);

int main()
{
	float redRose;
	float whiteRose;
	float tulip;

	cout << "Red Rose: ";
	cin >> redRose;
	
	cout << "White Rose: ";
	cin >> whiteRose;

	cout << "Tulips: ";
	cin >> tulip;

	flowerShop(redRose, whiteRose, tulip);
}

void flowerShop(float redRose, float whiteRose, float tulip)
{
	float orignalPrice;
	float discountPrice;

	redRose = redRose * 2.0;
	whiteRose = whiteRose * 4.10;
	tulip = tulip * 2.5;

	orignalPrice = redRose + whiteRose + tulip;
	discountPrice = orignalPrice - (orignalPrice * (20 / 100.0));

	if (orignalPrice > 200)		//give discount if bill is greater than $200.
		{
		cout << "Original Price: $" << orignalPrice << endl;
		cout << "Price after Discount: $" << discountPrice;
		}

	if (orignalPrice <= 200)
		{
		cout << "Original Price: $" << orignalPrice << endl;
		cout << "No discount applied.";
		}

}