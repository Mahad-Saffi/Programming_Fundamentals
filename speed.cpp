#include <iostream>
using namespace std;

int main() {
	int distance;
	int time;
	int speed;
	cout << "Enter Distance in Km  ";
	cin >> distance;
	cout << "Enter Time in hours  ";
	cin >> time;
	speed = distance / time;
	cout << "Speed is  " << speed << "Km/h";
}