#include <iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string : \n";
    cin>>str;
    
    for(int i=0; i<str.length();i++)
    {
        if(i%2==0){
            cout<<" ";
        }
        else
        cout<< "*";
    }
}