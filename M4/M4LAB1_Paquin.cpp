/*
CSC 134
M4LAB1 - ACSII Rectangles
Henry Paquin
3/4/23
Ask user for width and length.
Draw rectangle
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "ASCII Rectangles" << endl;
    //cout << "#" << endl;

    // declare variables
    int width = 6;
    int height = 5;

    // with while loop
    int count = 0;
    cout << endl;

    // with for loop
    for (int i=0; i<width; i++) {
        cout << "# ";
    }
    cout << endl;
    cout << "print " << height << " lines" << endl;
    for (int i=0; i<height; i++) {
        cout << "#" << endl;
    }

    cout << "Do both -- print rectangle" << endl;
    cout << endl;
    for (int i=0; i<height; i++) {
        for (int j=0; j<width; j++) {
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}