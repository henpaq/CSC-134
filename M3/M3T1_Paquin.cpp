// Comment
/*
CSC 134
M2T1 - Receipt Calculator
H Paquin
1/24/24
*/
#include <iostream>
// #include <iomanip>
using namespace std;

int main() {
    cout << "Part 1 - Area of a Rectangle" << endl;
    cout << endl;

    // declare variables
    double length;
    double width;
    double area;
    double length2;
    double width2;
    double area2;

    // main code
    cout << "Enter in the width of your rectangle" << endl;
    cin >> width;
    cout << "Enter in the length of your rectangle" << endl;
    cin >> length;

    // calculations
    area = length * width;

    // display
    cout << endl;
    cout << "The area of your rectangle is " << area << "." << endl;
    cout << endl;

    cout << "--------------------------------------" << endl;
    cout << endl;

    // rectangle 2
    // main code rectangle 2
    cout << "Enter in the width of your rectangle" << endl;
    cin >> width2;
    cout << "Enter in the length of your rectangle" << endl;
    cin >> length2;

    // calculations
    area2 = length2 * width2;

    // display
    cout << endl;
    cout << "The area of your rectangle is " << area2 << "." << endl;
    cout << endl;

    cout << "--------------------------------------" << endl;
    cout << endl;

    // if statements
    cout << "Part 2 - Which Rectangle is bigger?" << endl;
    cout << endl;

    // main code
    if (area > area2)
    cout << "The first rectangle is the largest." << endl;
    cout << endl;

    if (area < area2)
    cout << "The second rectangle is the largest." << endl;
    cout << endl;

    if (area == area2)
    cout << "Both rectangles are the same size." << endl;
    cout << endl;
    
    return 0;
}
