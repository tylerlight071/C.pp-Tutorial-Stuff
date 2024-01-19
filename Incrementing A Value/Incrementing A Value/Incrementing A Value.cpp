#include <iostream>

using namespace std;

int main()
{
	int x = 10; 
	// incrementing --> x = 11, y = 10
	int y = x++; 
	// decrementing --> x = 11, z = 11
	int z = ++x;

	cout << x;

	return 0;
}

