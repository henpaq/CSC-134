// Comment
/*
CSC 134
M3LAB2 - Grader
H Paquin
2/29/24
*/


#include <iostream>
using namespace std;

// beginning of the main() method
int main() {

  // declare variables
  double grade;

  // ask question
  cout << "Enter your grade: " << endl;
  cin >> grade;

  // calculations
  if (grade >= 89.5) {
    cout << "Your grade is an A." << endl;
  }
  else if (grade >= 79.5) {
    cout << "Your grade is a B." << endl;
  }
  else if (grade >= 69.5) {
    cout << "Your grade is a C." << endl;
  }
  else if (grade >= 59.5) {
    cout << "Your grade is a D." << endl;
  }
  else {
    cout << "Your grade is a F." << endl;
  }
    cout << endl;
    cout << "Goodbye!" << endl;

  return 0; 

} 