#include <iostream>
using namespace std;
main ()
{
	string name;
	int wins;
	int draws;
	int losses;
	int total;
	cout << "Enter the name of the cricket team: ";
	cin >> name;
	cout << "Enter the number of wins: ";
	cin >> wins;
	cout << "Enter the number of draws: ";
	cin >> draws;
	cout << "Enter the number of losses: ";
	cin >> losses;
	total = wins * 3 + draws * 1 ;
	cout << name << " has obtained " << total << " points in the Asia cup tournament.";
}