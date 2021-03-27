#include <iostream>
using namespace std;

// A very basic calculator, which can be used
// to enter two numbers and get the sum of them.

int main()
{
    /* Using 'double' data type to manage
       the decimal point numbers. You can also
       use 'float' data type. */

    double num1, num2;

    // Prompting the user to enter the 1st number.
    cout << "Enter First number: ";
    cin >> num1;
    
    // Prompting to enter the 2nd number
    cout << "enter second number: ";
    cin >> num2;
    
    // Printing out the sum.
    cout << num1 + num2;
    return 0;
}
