#include <iostream>
#include <string>

using namespace std;

string replaceChar(string inputString, int position, char ch) {
    if(position <0 || position > (inputString.length())){
        cout << endl << "Invalid position";
        cout << endl << "Position lies between 0 to " << inputString.length()-1 << " including both";
        return inputString;
    }
    else {
        inputString[position] = ch;
        return inputString;
    }
}

int main() {
    string candidateString;
    int index;
    char ch;

    system("cls");
    cout << endl << "Enter any string : ";
    getline(cin, candidateString);

    cout << endl << "Enter position on which you replace character : ";
    cin >> index;

    cout << endl << "Enter character for replace : ";
    cin >> ch;

    string result = replaceChar(candidateString, index, ch);

    cout << endl << "Input String : " << candidateString;
    cout << endl << "string after replacing character : ";
    cout << endl << result; 

    return 0;
}