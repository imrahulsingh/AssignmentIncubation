#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[50];
    int  i;
  
    cout<<"Enter the String :\n ";
    cin>>str;
    
    //Replacing the vovewls to *
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'
           || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'
           || str[i]=='O' || str[i]=='U')
        {
            str[i] = '*';
        }
    }
    
    cout<<"New String after replacing vowel with * :\n  "<<str;
    
    return 0;
}