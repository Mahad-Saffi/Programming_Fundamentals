#include <iostream>
using namespace std;

string decideActivity(string temp, string humidity);

main()
{
	string temp;
	string humidity;

	cout << "Enter temperature (warm or cold): ";
	cin >> temp;

	cout << "Enter humidity (dry or humid): ";
	cin >> humidity;

	cout << decideActivity( temp,  humidity);
}
string decideActivity(string temp, string humidity)
{
	string result;

	if (temp == "warm" && humidity == "dry")
	{
	result = "Recommended activity: Play tennis";
	}

	else if (temp == "warm" && humidity == "humid")
	{
	result = "Recommended activity: Swim";
	}
	
	else if (temp == "cold" && humidity == "dry")
	{
	result = "Recommended activity: Play basketball";
	}
	
	else if (temp == "cold" && humidity == "humid")
	{
	result = "Recommended activity: Watch TV";
	}

	return result;
}