#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	// srand generates a random number from a seed
	// uses time as the seed in which shows the number of seconds since Jan 1970
	srand(time(0));
	
	// we are giving the variable 'number' the value of the random number and are using modulo to make it 1 number
	int number = rand() % 10;
	
	cout << number;
	
	return 0;

}