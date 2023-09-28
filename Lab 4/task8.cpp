//Task 08(OP): Shopping Discount

#include <iostream>
using namespace std;

void calculatePayableAmount(string day, int amount);

main()
{
	string day;
	int amount;
	cout << "Enter the day of purchase: ";
	cin >> day;
	cout << "Enter the total purchase amount: $";
	cin >> amount;

	calculatePayableAmount(day, amount);
}

void calculatePayableAmount(string day, int amount)
{
	if (day == "Sunday") {
		int payableAmount = (amount * 10) / 100;
		cout << "Payable Amount: $" << amount - payableAmount;
		}
	if (day != "Sunday") {
		cout << "Payable Amount: $" << amount;
		}
}