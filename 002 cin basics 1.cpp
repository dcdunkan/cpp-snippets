#include <iostream>
using namespace std;

// Basic usage of 'cin' operator

int main()
{ 
    /* Declare a variable as the data type
     you want the user to enter. Here to
     get age, will be using 'int' */

    int num;
    cout << "Enter your age: ";
    
    /* Use cin to prompt the user to enter
    the value of 'num' */
    cin >> num;

    cout << "Your age is " << num;
    return 0;
}
