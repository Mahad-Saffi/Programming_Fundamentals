#include <iostream>
using namespace std;

main() {
	int mega_bytes;
	float bit, byte, kilobyte;

	cout << "Enter the size in megabytes (MB): ";
	cin >> mega_bytes;
	kilobyte = mega_bytes * 1024;
	byte= kilobyte * 1024;
	bit = byte * 8;
	cout << mega_bytes << " MB is equivalent to " << bit << " bits.";
}



