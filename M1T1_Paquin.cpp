// Comment
/*
CSC 134
M1T1 - Hello World
H Paquin
1/17/24
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    cout << "My name is Henry and I like to golf" << endl;
    string vehicle = "Porsche 918";
    cout << "My favorite car is " << vehicle << endl;
    cout << endl << endl;
    cout << "What's yours? ";
    string answer;
    cin >> answer;
    cout << "You said " << answer << endl;
    cout << "I guess that's OK." << endl << endl;
    return 0;
}