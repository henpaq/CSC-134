#include <iostream>
// CSC 134
// M5T1 -- Functions Part 1
// Paquin H
// 3/20/24

// Function Prototypes --
// these tell the compiler what functions to expect
using namespace std;
void greet_user();
int get_answer();

int main()
{
    cout << "M5T1" << endl;
    // call the greet_user function
    greet_user();
    cout << "Your lucky number is: ";
    cout << get_answer() << endl;

    return 0;
}
// function definitions --
// now we explain the function prototypes
void greet_user() {
    // greet the user
    cout << "Hello, user!" << endl;
    return; // for void, return is assumed at the end.
}

int get_answer() {
    // provide the one true answer
    return 42;
}
