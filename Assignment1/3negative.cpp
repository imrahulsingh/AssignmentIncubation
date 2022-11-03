//Write a program to accept a number and check if it is negative.
#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout << "Enter the number which you want to be checked : ";
    cin >> num;
    if (num <= 0)
        cout << num << " is a negative number.";
    else 
        cout << num << " is not negative number.";
    return 0;
}