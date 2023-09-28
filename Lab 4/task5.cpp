//Task 05(OP): Vote

#include <iostream>
using namespace std;

void eligible(int a);

main()
{
	int age;
	cout << "Enter your age: ";
	cin >> age;
	eligible(age);
}

void eligible(int a) {
	int age1;
	if (age1 >= 18) {
		cout << "You are eligible to vote.";
		}

	if (age1 < 18) {
		cout << "You are not eligible to vote.";
		}
	}