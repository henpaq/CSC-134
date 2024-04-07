// Comment
/*
CSC 134
M5HW1 - 3 Questions
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
    double length;
    double width;
    double height;
    double volume;
    int number;

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

    // Question 2
    cout << "Question 2" << endl;
    cout << endl;

    cout << "What is the length of the block?" << endl;
    cin >> length;
    cout << "What is the width of the block?" << endl;
    cin >> width;
    cout << "What is the height of the block?" << endl;
    cin >> height;

    if (length <= 0) {
      cout << "Not a valid input" << endl;
    }
    if (width <= 0) {
      cout << "Not a valid input" << endl;
    }
    if (height <= 0) {
      cout << "Not a valid input" << endl;
    }

    // calculations
    volume = length * width * height;

    //output
    cout << "The volume of the block is " << volume << "." << endl;
    cout << endl;

    // Question 3
    cout << "Enter a number between 1 - 10" << endl;
    cin >> number;

    if (number == 1) {
      cout << "The Roman numeral version is I" << endl;
    }
    if (number == 2) {
      cout << "The Roman numeral version is II" << endl;
    }
    if (number == 3) {
      cout << "The Roman numeral version is III" << endl;
    }
    if (number == 4) {
      cout << "The Roman numeral version is IV" << endl;
    }
    if (number == 5) {
      cout << "The Roman numeral version is V" << endl;
    }
    if (number == 6) {
      cout << "The Roman numeral version is VI" << endl;
    }
    if (number == 7) {
      cout << "The Roman numeral version is VII" << endl;
    }
    if (number == 8) {
      cout << "The Roman numeral version is VIII" << endl;
    }
    if (number == 9) {
      cout << "The Roman numeral version is IX" << endl;
    }
    if (number == 10) {
      cout << "The Roman numeral version is X" << endl;
    }
    if (number <= 0) {
      cout << "Not a valid input" << endl;
    }
    if (number > 10) {
      cout << "Not a valid input" << endl;
    }
    cout << endl;
  return 0;

} 