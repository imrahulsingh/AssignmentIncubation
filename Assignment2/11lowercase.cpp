
#include<iostream>
#include <algorithm>
using namespace std;

int main(){
	string str;
    cout<<"Enter the word to convert lowercase : \n";
    cin>>str;
	transform(str.begin(), str.end(), str.begin(), ::tolower);
   cout<<str<<endl;
	return 0;
}