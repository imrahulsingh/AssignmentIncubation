// Write a program to accept a number and check if it is prime.
#include<iostream>

using namespace std;
int main ()
{  
    int num, i, count = 0;
    cout << "Enter the number you want to be check : ";
    cin >> num;
    if (num == 0)
    {
        cout << "\n" << num << " is not prime";
        return 0;
    }
    else   {
            for(i=2; i < num; i++)
                if (num % i == 0)
                    count++;
    }
    if (count > 1)
 	    cout << "\n" << num << " is not prime.";
    else
        cout << "\n" << num << " is prime.";
    return 0;
}