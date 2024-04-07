// Comment
/*
CSC 134
M5HW1 - 4 Questions
H Paquin
4/6/24
*/

#include <iostream>
using namespace std;

int main() {

    // declare variables
    string month;
    string month2;
    string month3;
    double rainfall;
    double rainfall2;
    double rainfall3;
    double averageRainfall;

    // main code
    // Question 1
    cout << "Question 1" << endl;
    cout << endl;
    cout << "Enter month: " << endl;
    cin >> month;
    cout << "Enter rainfall for " << month << ": " << endl;
    cin >> rainfall;
    cout << "Enter month: " << endl;
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": " << endl;
    cin >> rainfall2;
    cout << "Enter month: " << endl;
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": " << endl;
    cin >> rainfall3;

    // calculations
    averageRainfall = (rainfall + rainfall2 + rainfall3) / 3;

    // output
    cout << "The average rainfall for " << month << ", " << month2 << ", and " << month3 << " is " << averageRainfall << endl;
    cout << endl;

  return 0;

} 