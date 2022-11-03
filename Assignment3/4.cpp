//Write a program to accept 5 digit integer N and calculate the sum of its first and fifth digit.
#include <iostream>
using namespace std;
int main()
{
    int n, sum=0, firstDigit, lastDigit;
    cout<<"Enter the 5 digit number= ";
    cin>>n;

    // Find last digit 
    lastDigit = n % 10;

    //Find the first digit 
    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    //Calculate sum of first and last digit
    sum = firstDigit + lastDigit;

    cout<<"\n Sum of first and last digit = " <<sum;
    return 0;
}