#include <iostream>

// This allows us to use std without having to manually write it before a command
using namespace std;

// Creating the main function
int main() {
	// Creates an interger variable called 'a' with a value of 1
	int a = 1;

	// Creates an integer variable called 'b' with a value of 2
	int b = 2;

	// Creates an interger variable called 'temp' with the value of 'a'
	// This means that the value of 'a' which is 1, is now stored in the varible temp
	int temp = a;

	// This says that the value of 'a' is now equal to the value of 'b' which is 2
	// So now both 'a' and 'b' both have a value of 2, while 'temp' STILL has the value of 1
	a = b;

	// This gives 'b' the value of 'temp' which is 1
	// This means that the value of 'b' has changed from 2 to 1
	b = temp;

	// This displays the output of 'b' to the terminal which would be '1'
	// If we changed it from 'b' to 'a', the output would show 2
	cout << b;

	return 0;
}

// To sum this up, what has happened is the value of 'a' was stored temporarily in the 'temp' variable. Then, the variable 'a' is given the same value as 'b' so they both have the same value.
// 'b' is then given the value of temp which is the ORIGINAL value of 'a' and 'b' no longer has its original value, thus swapping the values of the variables