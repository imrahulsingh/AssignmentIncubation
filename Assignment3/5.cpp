//Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.

#include<iostream>
using namespace std;
int main()
{
    int num, sum, i, number, count=0, n=1;

    cout<<"Enter your Number: ";
    cin>>num;

    number = num;

    //get the counter till then we have to run the loop

    while(number!=0)
    {
        number = number/10;
        count = count + 1;
    }

    for(i=1;i<count;i++)
    {
        n = n * 10;  //n = 10
        n = n + 1;   //n = 11
    }

    sum = num + n;
    cout<<"\n Output after Adding 1 to last : "<<sum;
}