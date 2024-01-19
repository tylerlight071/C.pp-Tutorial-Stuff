#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 3;

	// Adds x & y 
	int z = x + y;
	
	// Divides x & y
	int z = x / y;

	// Subtracts x & y
	int z = x - y;

	// Returns remainder of division between x & y (Modulo)
	int z = x % y;

	// Multiplies x & y
	int z = x * y;

	cout << z;

	return 0;

	// multiplication and division are higher priority than addition and subtraction and must be performed first
	// using ( ) makes the contents take priority regardless of the symbol
}


