//	Write a program to accept a list of N integers. Accept integer K. Find the Kth smallest number in the list and its position
#include <iostream>
using namespace std;
int main() {
	int e, i, sval, position;

	cout<<"\nInput the length of the list: ";
	cin>>e;

	int v[e];
    cout<<"\nInput the  elements:\n ";
	for(i = 0; i < e; i++) {
			cin>>v[i];
	}
	sval = v[0];
	position = 0;
	for(i = 0; i < e; i++) {
		if(sval > v[i]) {
			sval = v[i];
			position = i;
		}
	}
	
	cout<<"Smallest Value: "<<sval<<endl;
	cout<<"Position of the element:"<< position<<endl;
	return 0;
}
