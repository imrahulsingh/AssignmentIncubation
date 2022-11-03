#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[50];
  int count = 0, check;
  cout<<"Enter the word to check\n  ";
  cin>>str;

  // loop to count the no. of alphabets in str
  for (int i = 0; i <= strlen(str); ++i) {

    // check if str[i] is an alphabet
    check = isalpha(str[i]);

  // increment count if str[i] is an alphabet
    if (check)
      ++count;
  }

  cout << "Number of alphabet characters: " << count << endl;


  return 0;
}