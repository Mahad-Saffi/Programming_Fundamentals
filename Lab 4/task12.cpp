/*Task 12(CP): A Store has announced to give a 10% discount on the total purchase
amount of every Sunday and 5% on every other day. Write a program that takes Day, total
purchase amount and outputs the payable. Now, After outputting the payable amount on
screen, the program should again ask for the same details of some other customer and go
on until closed forcefully.*/

#include <iostream>
using namespace std;

void discount(string day, float purchase);

main() 
{
	string day;
	float purchase;
	while ( true ) {
		cout << "Enter day: ";
		cin >> day;
		cout << "Enter Purchase amount: $";
		cin >> purchase;
		discount (day, purchase);
		}
}

void discount(string day, float purchase)
{
	if (day == "Sunday") {
		cout << "Payable amount: $" << purchase - (purchase * 0.1) << endl;
			}

	if (day != "Sunday") {
		cout << "Payable amount: $" << purchase - (purchase * 0.05) << endl;
			}
}