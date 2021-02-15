#include <iostream>
using namespace std;

// Basic usage of 'cin' operator #3

int main()
{
    /* We can use the cin to enter multiple
    values at a time. Here, we will be
    entering 2 numbers. */

    int num1, num2;
    cout << "Enter two numbers: ";
    
    /* Use one cin to prompt the user to
    enter the values of 'num1' and 'num2'.
    It can be done using another pair of
    greater than signs. */
 
    cin >> num1 >> num2;

    /* These numbers will be entered using
    spaces or newline.

    If, three numbers,
    'cin >> num1 >> num2 >> num3;'
    
    Working with the values and creating
    a variable to store the multiple of the
    values. */

    int multiple = num1 * num2;
    cout << "The multiple of those numbers are " << multiple;
    return 0;
}
