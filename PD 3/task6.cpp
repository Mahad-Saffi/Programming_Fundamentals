#include <iostream>
using namespace std;

int main()
{
	float fertilizerSize;
	float cost;
	float areaCovered;
	int fertilizerPerPound;
	int fertilizerPerSquare;

	cout << "Enter the size of the fertilizer bag in pounds: ";
	cin >> fertilizerSize;
	cout << "Enter the cost of the bag: $";
	cin >> cost;
	cout << "Enter the area in square feet that can be covered by the bag: ";
	cin >> areaCovered;

	fertilizerPerPound = cost / fertilizerSize;
	cout << "Cost of fertilizer per pound: $" << fertilizerPerPound << endl;
	fertilizerPerSquare = cost / areaCovered;
	cout << "Cost of fertilizing per square foot: $" << fertilizerPerSquare;



}