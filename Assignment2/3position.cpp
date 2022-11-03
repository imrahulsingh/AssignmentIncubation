#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char str[25],sr;
    int i,freq=0,flag=0;
  cout<<"Enter Any String: ";
  gets(str);
  cout<<"\nEnter the searching Character: ";
  cin>>sr;
  for(i=0;i<strlen(str);i++)
  {
    if(str[i]==sr)
    {
        flag=1;
        cout<<"\n At position: "<<i+1;
        freq++;
    }
  }
  if(flag==1)
  {
    cout<<"\n Character: "<<sr<<"Occrence time: "<<freq;
  }
  else {
    cout<<"\nCharacter not found";
  }

}