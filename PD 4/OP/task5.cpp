//Printing name in the center of screen using Goto function

#include <iostream>
#include <windows.h>         //Header file for function recalling
using namespace std;

void gotoxy(int x, int y);   //Function prototype
void printName();            //Function for name
int main()
{
	system("cls");    //-->Clearing terminal
	gotoxy (0,17);    //-->goto funtion call
	printName();
	gotoxy (0,40);
}

void gotoxy(int x, int y)     //goto function main body
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printName()
{
	cout << "                                                        ##           ##    ## ##    ##     ##    ## ##    ## ## ##   "  << endl;
	cout << "                                                        ## ##     ## ##  ##     ##  ##     ##  ##     ##  ##     ##  "  << endl;
	cout << "                                                        ##  ##  ##   ## ##       ## ##     ## ##       ## ##      ## "  << endl;
	cout << "                                                        ##    ##     ## ## ## ## ## ## ### ## ## ## ## ## ##      ## "  << endl;
	cout << "                                                        ##           ## ##       ## ##     ## ##       ## ##     ##  "  << endl;
	cout << "                                                        ##           ## ##       ## ##     ## ##       ## ## ## ##   "  << endl;
} 
