 
#include <iostream>
using namespace std;
 
bool isNumber(const string& s)
{
    for (char const &ch : s) {
        if (std::isdigit(ch) == 0)
            return false;
    }
    return true;
}
 
int main(){
    string s1 = "Java2Blog";
    string s2 = "C++";
    string s3 = "5189746";
    char str[50];
    cout << " Enter the string :";
    cin>>str;
 
    isNumber(str) ? cout << str <<" is a Number\n" : cout <<str<< " is Not a number\n";
   
    return 0;
}
 