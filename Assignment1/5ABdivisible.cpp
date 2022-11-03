//Write a program to accept 2 numbers A,B and check if A is divisible by B.
#include<iostream>
using namespace std;
 
int main()
{
    int A, B;
 
    cout << "Enter A : ";
    cin >> A;
     cout << "Enter B : ";
    cin >> B;
    if (A % B == 0)
        cout << A
             << " is divisible by "
             << B;
    else
        cout << A 
             << " is not divisible by  "
             << B;
}