
//Write a program to accept an integer N and calculate the sum of its digits. Please note N can have maximum 5 digits.
#include <iostream>
 
 using namespace std;

 bool checknumber(int n){
    int count=0;
    if(n>0 && n<99999)
    return true;
    else
    return false;

 }

int main()
{
    int num, sum = 0, rem;
   
   cout<< "Enter the number ";
   cin>>num;
   if(checknumber(num))
   {
     while(num !=0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    cout<< " \n Sum of digits of the number is "<<sum;
   }
   else{
    cout<<"Please Enter 5 digit number";
   }
   return 0;    
   
}