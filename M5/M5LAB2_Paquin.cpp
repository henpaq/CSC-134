// M5LAB2
// Header goes here

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double calcArea(double length, double width);
double getLength();
double getWidth();
void displayData(double length, double width, double area);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = calcArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area); 
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double calcArea(double length, double width) {
    // area is length time width
    double area = length * width;
    return area;
}

double getLength() {
    cout << "What is the length of the rectangle?" << endl;
    double length;
    cin >> length;
    return length;
}

double getWidth() { 
    cout << "What is the width of the rectangle?" << endl;
    double width;
    cin >> width;
    return width;
}

   void displayData(double length, double width, double area) {
    // Display the rectangle's data.
    cout << "The rectangle's length is " << length << endl;
    cout << "The rectangle's width is " << width << endl;
    cout << "The rectangle's area is " << area << endl;
  }