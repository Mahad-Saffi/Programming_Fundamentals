//Task 07(OP): Even or Odd

#include <iostream>
using namespace std;

void evenOrOdd(int i);

main()
{
	int i;
	cout << "Enter a number: ";
	cin >> i;
	evenOrOdd(i);
}

void evenOrOdd(int i)
{
	if (i % 2 == 0) {
		cout << "Number "<< i << " is even";
		}

	if (i % 2 != 0) {
		cout << "Number " << i << " is odd";
		}

}