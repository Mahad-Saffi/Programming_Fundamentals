//Writing "HASSAN" vertically using functions.

#include <iostream>
using namespace std;

void printA();
void printH();
void printS();
void printN();

int main()
{
	system("cls");
	printH();
	printA();               /*while using functions we can print a same letter multiple times in a descent way.
	printS();
	printS();
	printA();
	printN();

}

void printA()
{
	cout << "    ## ##    " << endl;
	cout << "  ##     ##  " << endl;
	cout << "##         ##" << endl;
	cout << "## ## ## # ##" << endl;
	cout << "##         ##" << endl;
	cout << "##         ##" << endl;
	cout << endl;
}

void printH()
{
	cout << "##         ##" << endl;
	cout << "##         ##" << endl;
	cout << "## ## ## # ##" << endl;
	cout << "##         ##" << endl;
	cout << "##         ##" << endl;
	cout << "##         ##" << endl;
	cout << endl;
}

void printS()
{
	cout << "    ####     " << endl;
	cout << "  ##    ##   " << endl;
	cout << " ##          " << endl;
	cout << "   #####     " << endl;
	cout << " ##     ##   " << endl;
	cout << "   #####     " << endl;
	cout << endl;
}

void printN()
{
	cout << "##       ##  " << endl;
	cout << "## ##    ##  " << endl;
	cout << "##  ##   ##  " << endl;
	cout << "##   ##  ##  " << endl;
	cout << "##    ## ##  " << endl;
	cout << "##       ##  " << endl;
}