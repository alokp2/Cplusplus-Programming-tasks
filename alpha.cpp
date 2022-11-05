// program to input any alphabet and check whether it is vowel or consonant.
#include <iostream>
using namespace std;
int main() {
  char c;
  cout << "Enter a character: ";
  cin >> c;
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
    cout << "The alphabet is vowel";
  } else {
    cout << "The alphabet is consonant";
  }
}
