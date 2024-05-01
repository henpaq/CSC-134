#include <iostream>
using namespace std;
#include "Rectangle.h"

int main() {
    cout << "M7T2" << endl;

    Rectangle r;

    double length, width, area;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    r.setLength(length);
    r.setLength(width);
    cout << "Retangle is: " << endl;
    cout << r.getLength() << " by " << r.getWidth() << endl;
    cout << "Rectangle area = " << r.getArea() << endl;
    return 0;

  return 0; 

} 