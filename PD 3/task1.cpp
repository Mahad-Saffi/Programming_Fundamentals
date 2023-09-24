#include <iostream>
using namespace std;

int main() 
{
	int sum;
	int n;
	cout << "Enter the number of sides of the polygon: ";
	cin >> n;
	sum = (n-2) * 180;
	cout << "The sum of internal angles of a " << n << "-sided polygon is: " << sum << " degrees";
}