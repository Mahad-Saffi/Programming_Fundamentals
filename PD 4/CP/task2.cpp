//write a function that changes true to false and false to true.

#include <iostream>
using namespace std;

void reverse(string);            //Function prototype

int main()
{
	string boolean;
	cout << "Enter 'true' or 'false': ";
	cin >> boolean;
	reverse(boolean);        //Function call
}

void reverse(string boolean)
{
	if (boolean == "true")   //if user input 'true'
		{
		cout << "false";
			}

	if (boolean == "false")  //if user input 'false'
		{
		cout << "true";
			}
}