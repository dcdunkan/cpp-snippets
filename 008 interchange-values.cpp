#include <iostream>
using namespace std;

// Demonstration of how to interchange two
// variable's values using another variable.

int main()
{
   // Variable initialisation.
   int num1, num2, num3;
   
   // Saying to enter the numbers to interchange.
   cout << "Enter 2 values seperated by space: ";
   cin >> num1 >> num2;

   /* The interchange workflow. Try this out
      A few times, and you will be clear. */

   num3 = num1;
   num1 = num2;
   num2 = num3;

   // Printing out.
   cout << "The interchanged numbers are: " << num1 << ", " << num2;
}
