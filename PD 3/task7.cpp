#include <iostream>
using namespace std;

int main()
{
	string movie;
	float adult_p;
	float child_p;
	int adult_t_s;
	int child_t_s;
	float charity, donation;
	float total, remaining;
	float percentage;

	cout << "Enter the movie name: ";
	cin >> movie;
	cout << "Enter the adult ticket price: $";
	cin >> adult_p;
	cout << "Enter the child ticket price: $";
	cin >> child_p;
	cout << "Enter the number of adult tickets sold: ";
	cin >> adult_t_s;
	cout << "Enter the number of child tickets sold: ";
	cin >> child_t_s;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	cin >> charity;

	cout << endl;
	cout << "Movie: " << movie << endl;
	
	total = (adult_p * adult_t_s) + (child_p * child_t_s);	
	cout << "Total amount generated from ticket sales: $" << total << endl;

	donation = total * charity / 100;
	cout << "Donation to charity (" << charity << "%): $" << donation << endl;

	remaining = total - donation;
	cout << "Remaining amount after donation: $" << remaining;
}