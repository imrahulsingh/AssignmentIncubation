//Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. Please note N can have maximum 5 digits.
#include <iostream>
using namespace std;

void findreverse(int n){
    int result=n;
    
 int reverse = 0, remainder;

     while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  cout<<"Reversed number = "<<reverse<<endl;

}
int main() {
    int n;
  cout<<"Enter an integer: ";
  cin>>n;
 findreverse(n);
 

  return 0;
}
