#include <iostream>
using namespace std;

// Another example of how to use 'cin's and
// 'cout's to input sides of a rectangle,
// and print the area of the rectangle.

int main()
{
  /* Initialising length, breadth, area varibles
     as float data type for decimal support. You can
     use 'double' also. */

  float length, breadth, area;

  // Prompts to enter the length.
  cout << "Enter length of the rectangle: ";
  cin >> length;

  // Prompts to enter the breadth(width)
  cout << "Enter breadth of the rectangle: ";
  cin >> breadth;

  /* Demonstration of how to store some worked
     datas to a variable. Storing the area as
     multiple of length and breadth. */
  area = length * breadth;

  // Printing out the area with some sentence.
  cout <<"Area of the rectangle = " << area;
}
