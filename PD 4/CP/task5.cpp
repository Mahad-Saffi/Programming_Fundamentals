/*
In board game if two players gets the 
same place then they will get bonus.
take your and your friends position 
and calculate if it is possible for
you both to get bonus.
*/


#include <iostream>
using namespace std;

void possibleBonus(int yourPosition, int friendPosition);

int main()
{
	int yourPosition;
	int friendPosition;

	cout << "Enter your position: ";
	cin >> yourPosition;

	cout << "Enter your friend's position: ";
	cin >> friendPosition;

	possibleBonus(yourPosition, friendPosition);
}

void possibleBonus(int yourPosition, int friendPosition)
{
	if ((friendPosition - yourPosition) <= 6)  //If difference between you and friend is 6 he can reach you by getting 6 in dice.
		{
		cout << "true";
		}

	if ((friendPosition - yourPosition) > 6)  //If difference between you and friend is greater than 6, then he can't reach you.
		{
		cout << "false";
		}	

}