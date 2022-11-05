#include <iostream>
using namespace std;

int main() {
  char grade = char();
  cout << "Please enter your grade : ";
  cin >> grade;

  switch (grade) {
  case 'A':
  case 'B':
    cout << "Excellent work" << endl;
    break;
  default:
    cout << "Enter the right case value";
  }
}
