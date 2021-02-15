#include <iostream>
using namespace std;

int main()
{
   int num1, num2, num3;
   cout << "Enter 2 values seperated by space: ";
   cin >> num1 >> num2;
   num3 = num1;
   num1 = num2;
   num2 = num3;
   cout << "The interchanged numbers are: " << num1 << ", " << num2;
}
