//Write a program to accept a number and check if it is odd.
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter the Number which you want to check: ";
  cin >> n;

  if ( n % 2 != 0)
    cout << n << " is an Odd Number.";
  
  else
    cout<< n << " is not an Odd Number";

      return 0;

}