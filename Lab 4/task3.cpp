//Task03(OP): Rubik's Cube

#include <iostream>
using namespace std;

void howManyStickers(int sideLength);

main()
{
	int sideLength;
	cout << "Enter the side length of the Rubik's Cube: ";
	cin >> sideLength;

	howManyStickers(sideLength);
}

void howManyStickers(int sideLength)
{
	int stickers;
	stickers = sideLength * 6 * sideLength;
	cout << "Number of stickers needed: " << stickers;	
}