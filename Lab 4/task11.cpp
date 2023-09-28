//Task 11(OP): Write a program that keeps printing the name entered by the user.

#include <iostream>
using namespace std;

void loop(string name);

main()
{
	while (true) {
		string name;
		loop(name);
		}
}

void loop(string name)
{
	cout << "Enter your name: ";
	cin >> name;
	cout <<"Your name is: " << name << endl;
}