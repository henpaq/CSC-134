// Comment
/*
CSC 134
M6LAB1
H Paquin
4/10/24
*/

#include <iostream>
using namespace std;
#include "M6LAB1_utils.h"

// array is a global variable (all functions can see it)
int magazine[MAX_SHELLS] = {BLANK, LIVE, LIVE, BLANK, EMPTY, EMPTY};

// function prototypes
// get the name of a shell
string shell_name(int shell);

int main() {

  cout << "M6LAB1" << endl;
  cout << "The magazine holds: " << endl;
  // loop through the magazine

  for (int i=0; i < MAX_SHELLS; i++) {
    int shell = magazine[i]; // get current shell
    string name = shell_name(shell);
    cout << name << ", ";
  }
  cout << endl;
  // 2nd option: Range-based for loop
  for (int shell: magazine) {
    cout << shell_name(shell) << " ,";
  }


  cout << endl;
} 