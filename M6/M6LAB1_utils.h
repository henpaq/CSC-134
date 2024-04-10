#ifndef M6LAB1_UTILITY_H
#define M6LAB1_UTILITY_H

#include <iostream>
using namespace std;

// constants
const int EMPTY = 0;
const int MAX_SHELLS = 6;
const int BLANK = 1;
const int LIVE = 2;

string shell_name(int shell);

// functions
// utility functions

string shell_name(int shell) {
    // input: number of shell
    // output: name ("empty", "blank", "live")
    string name;
    if (shell == EMPTY) {
        name = "Empty";
    }
    if (shell == BLANK) {
        name = "Blank";
    }
    if (shell == LIVE) {
        name = "Live";
    }
    return name;
}


#endif // M6LAB1_UTILITY_H