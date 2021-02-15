#include <iostream>
using namespace std;

// Basic usage of 'cin' operator #4

int main()
{
    /* We can use the cin to enter multiple
    values at a time. Here, we will be
    entering 2 strings. */

    string first_name, last_name;
    cout << "Enter your first and last name: ";
    
    /* Use one cin to prompt the user to
    enter the values of 'first_name' and
    'last_name'. It can be done using
    another pair of greater than signs. */

    cin >> first_name >> last_name;
    
    // Working with the values

    cout << "Your first name: " << first_name;
    cout << "\nYour last name: " << last_name;
    cout << "\nYour full name: " << first_name << " " << last_name;
    return 0;
}
