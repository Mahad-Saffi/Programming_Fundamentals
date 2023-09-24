#include <iostream>
using namespace std;

int main() 
{
	int minutes;
	int fps;
	int seconds;
	int totalFrames;


	cout << "Number of Minutes: ";
	cin >> minutes;
	cout << "Frames per Second: ";
	cin >> fps;

	seconds = minutes * 60;
	totalFrames = seconds * fps;
	cout << "Total Number of Frames: " << totalFrames;
}