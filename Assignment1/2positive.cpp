//Write a program to accept a number and check if it is positive.
#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout << "Enter the number which you want to be checked : ";
    cin >> num;
    if (num >= 0)
        cout << num << " is a positive number.";
    else 
        cout << num << " is not positive number.";
    return 0;
}