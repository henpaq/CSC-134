#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

// class declaration
class Rectangle {
    private:
        double width;
        double length;
        string text;
    public:
        void setLength(double);
        void setWidth(double);
        void setChar(string);
        double getLength() const;
        double getWidth() const;
        double getArea() const;
        void drawRectangle() const;
};







// Function definitions
void Rectangle::setLength(double len) {
    length = len;
}

void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setChar(string ch) {
    text = ch;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getArea() const {
    double area = length * width;
    return area;
}

void Rectangle::drawRectangle() const {
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) {
            cout << text;
        }
        cout << endl;
    }
}


#endif