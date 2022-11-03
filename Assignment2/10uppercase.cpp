
#include<iostream>
#include <algorithm>
using namespace std;

int main(){
	string s1;
    cout<<"Enter the word to convert uppercase : \n";
    cin>>s1;
	transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
	cout<<s1<<endl;

	return 0;
}
