//Write a program to accept 2 numbers a A,B and calculate A ^ B(A to the powe B) .
#include <iostream>
using namespace std;

int main() 
{
  
    float A, result = 1;
      int B;

    cout << "Enter the first Number A:  ";
    cin >> A ;
    cout <<"Enter the Second Number B:  ";
    cin >>B;

    cout << A << "^" << B << " = ";

    while (B != 0) {
        result *= A;
        --B;
    }

    cout << result;
    
    return 0;
}