#include <iostream>
using namespace std;

int main() {
	float weight_pounds;
	float weight_kg;

	cout << "Enter weight in pounds: ";
	cin >> weight_pounds;
	weight_kg = weight_pounds * 0.45;
	
	cout << weight_pounds << " pounds is equal to " << weight_kg << " kilograms.";
}