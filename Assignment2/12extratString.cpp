#include <iostream>
#include <string>

using namespace std;

string removeWhiteSpace(string inputstring) {
    int start_index = 0, end_index = inputstring.length()-1;

    // remove white space from left side of the string
    for(int i = 0; i <= end_index; ++i) {
        if(inputstring[i] != ' ' || inputstring[i] != '\t' || inputstring[i] != '\n') {
            start_index = i;
            break;
        }
    }

    cout << endl << "Start index : "<< start_index;

    // remove white space from right side of the string
    for(int i = end_index; i >= 0; --i) {
        if(inputstring[i] != 32 || inputstring[i] != 9 || inputstring[i] != 10){
            end_index = i;
            break;
        }
    }

    string temp = inputstring.substr(start_index, end_index+1);
    return temp;
}

string extractString(string inputstring, int index, int length) {
    inputstring = removeWhiteSpace(inputstring);
    if(index < 0 || index >= inputstring.length()) {
        cout << endl << "Invalid index input";
    }
    else if(length < 0 || length >= inputstring.length()) {
        cout << endl << "Invalid number of character !";
    }

    if(inputstring.length() == 0){
        cout << endl << "Empty string !";
        return inputstring;
    }
    else{
        return inputstring.substr(index, length);
    }
}

int main() {

    string candidatestring;
    int position, no_of_char;
    system("cls");
    cout << endl << "Enter string : ";
    getline(cin, candidatestring);
    
    cout << endl << "Enter position to extract string : ";
    cin >> position;

    cout << endl << "Enter no of character to extract from string : ";
    cin >> no_of_char;

    cout << endl << "input string : " << candidatestring;
    cout << endl << "Modified string : " << extractString(candidatestring, position-1, no_of_char);

    return 0;
}
