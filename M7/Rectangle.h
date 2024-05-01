#ifndef RECTANGLE_H
#define RECTANGLE_H

// class declaration
class Rectangle {
    private:
        double width;
        double length;
    public:
    void setLength(double);
    void setWidth(double);
    double getLength() const;
    double getWidth() const;
    double getArea() const;
};







// Function definitions
void Rectangle::setLength(double len) {
    length = len;
}

void Rectangle::setWidth(double w) {
    width = w;
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


#endif