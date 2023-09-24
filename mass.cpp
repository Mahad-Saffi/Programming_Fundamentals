#include <iostream>
using namespace std;

int main() {
	int force;
	int acceleration;
	int mass;
	cout << "Enter Force  ";
	cin >> force;
	cout << "Enter Acceleration  ";
	cin >> acceleration;
	mass = force / acceleration;
	cout << "Mass is  " << mass;
}