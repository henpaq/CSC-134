/*
CSC 134
M4LAB1 - Multiplication Table
Henry Paquin
3/4/23
Ask user for number input
Silver
*/

#include <iostream>
using namespace std;

int main() {

    // declare variables
    int number;
    int total1;
    int total2;
    int total3;
    int total4;
    int total5;
    int total6;
    int total7;
    int total8;
    int total9;
    int total10;
    int total11;
    int total12;

    // main code
    cout << "Enter a number between 1 - 12" << endl;
    cin >> number;

    // calculations
    total1 = number * 1;
    total2 = number * 2;
    total3 = number * 3;
    total4 = number * 4;
    total5 = number * 5;
    total6 = number * 6;
    total7 = number * 7;
    total8 = number * 8;
    total9 = number * 9;
    total10 = number * 10;
    total11 = number * 11;
    total12 = number * 12;

    // output
    cout << endl;
    cout << number << " * 1 = " << total1 << endl;
    cout << number << " * 2 = " << total2 << endl;
    cout << number << " * 3 = " << total3 << endl;
    cout << number << " * 4 = " << total4 << endl;
    cout << number << " * 5 = " << total5 << endl;
    cout << number << " * 6 = " << total6 << endl;
    cout << number << " * 7 = " << total7 << endl;
    cout << number << " * 8 = " << total8 << endl;
    cout << number << " * 9 = " << total9 << endl;
    cout << number << " * 10 = " << total10 << endl;
    cout << number << " * 11 = " << total11 << endl;
    cout << number << " * 12 = " << total12 << endl;
    cout << endl;

    return 0;

} 