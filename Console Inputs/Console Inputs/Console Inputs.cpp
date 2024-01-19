#include <iostream>

using namespace std;

int main()
{
    // cout means character output, thus what is displayed to the user
    cout << "Enter a value: ";
    
    // created integer variable called 'value'
    int value;

    // to use a floating point or decimal number, use double instead
    //double value;

    // cin means character input, thus it takes the input from the user and in this case are storing it in the variable 'value'
    // the use of >> here is important. Think of it like the direction of data flow
    cin >> value;

    cout << value << endl;

    // created two double variables called 'x' and 'y'
    double x;
    double y;

    // display to the user 
    cout << "Enter values for x & y: ";
    
    // take the input for both 'x' & 'y' in a "compressed way". This can be modified to explicitly tell the user to enter a value for 'x' then for 'y'
    cin >> x >> y;

    // display the value of 'x' + 'y'
    cout << x + y;

    return 0;
}
