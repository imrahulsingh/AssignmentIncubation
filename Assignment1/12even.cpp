//Write a program to accept a number and check if it is even.
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter the Number which you want to check: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << n << " is an Even Number.";
  
  else
    cout<< n << " is not an Even Number";

      return 0;

}