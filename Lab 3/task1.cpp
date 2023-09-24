#include <iostream>
using namespace std;

int main() {
	string name;
	int rollNumber;
	float agg;
	char section;

	cout <<"Enter your name: ";
	cin >> name;
	cout <<"Enter your roll number: ";
	cin >> rollNumber;
	cout <<"Enter your aggregate: ";
	cin >> agg;
	cout <<"Enter your section: ";
	cin >> section;

	cout << "Student Information:" << endl;
	cout << "Name: " << name << endl;
	cout << "Roll Number: " << rollNumber << endl;
	cout << "Aggregate: " << agg << endl;
	cout << "Section: " << section << endl;
}