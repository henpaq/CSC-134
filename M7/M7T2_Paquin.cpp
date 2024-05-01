#include <iostream>
using namespace std;
#include "Rectangle.h"

int main() {
    cout << "M7T2" << endl;

    Rectangle r;

    double length, width, area;
    string text;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter character or emoji: ";
    cin >> text;

    r.setLength(length);
    r.setWidth(width);
    r.setChar(text);
    cout << "Retangle is: " << endl;
    cout << r.getLength() << " by " << r.getWidth() << endl;
    cout << "Rectangle area = " << r.getArea() << endl;
    cout << "Printing the Rectangle" << endl;
    r.drawRectangle();
    return 0;

  return 0; 

} 