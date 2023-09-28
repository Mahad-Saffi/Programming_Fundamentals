//Task 06(OP): Pass or Fail

#include <iostream>
using namespace std;

main()
{
	int score;
	cout << "Enter your score: ";
	cin >> score;

	if (score > 50) {
		cout << "Pass";
		}

	if (score <= 50) {
		cout << "Fail";
		}
}