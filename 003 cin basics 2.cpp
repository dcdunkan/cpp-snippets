#include <iostream>
using namespace std;

// Basic usage of 'cin' operator #2

int main()
{ 
    /* Declare a variable as the data type
     you want the user to enter. Here to
     get NAME, will be using 'string' */

    string name;
    cout << "Enter your name: ";
    
    /* Use cin to prompt the user to enter
    the value of 'name' */
    cin >> name;

    cout << "Your name is " << name;
    return 0;
}
