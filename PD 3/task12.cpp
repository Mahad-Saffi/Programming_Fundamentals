#include <iostream>
using namespace std;

int main()
{
	int sq_paint;
	int width;
	int height;
	int walls;

	cout << "Number of square meters you can paint: ";
	cin >> sq_paint;
	cout << "Width of the single wall (in meters): ";
	cin >> width;
	cout << "Height of the single wall (in meters): ";
	cin >> height; 

	walls = sq_paint / (width*height);
	cout << "Number of walls you can paint: " << walls;


}