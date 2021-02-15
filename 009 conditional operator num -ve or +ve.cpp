#include <iostream>
using namespace std;

int main()
{
  double num;
  cout << "Enter any number: ";
  cin >> num;
  (num>0)?cout << "The input is positive":cout << "The input is negative";

  return 0;
}
