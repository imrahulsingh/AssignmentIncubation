//Write a program to accept a number N and print the first N terms of the Fibonacci series.

#include <iostream>
using namespace std;

int main()
{
    int prv = 0, pre = 1, trm, i, n;
    cout << " Enter the number you want to display: ";
    cin >> n;
    cout << "the Fibonacci series upto  to " << n << " : "<<endl;
    cout << prv << " " << pre;
    for (i = 3; i <= n; i++) 
    {
        trm = prv + pre;
        cout << " " << trm;
        prv = pre;
        pre = trm;
    }
    cout << endl;
}