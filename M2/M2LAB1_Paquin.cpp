// Comment
/*
CSC 134
M2LAB1 - Area
H Paquin
1/31/24
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Part 1 - Area of a Rectangle" << endl;
    cout << endl;

    // declare variables
    double length;
    double width;
    double area;
    double height; // for later
    double volume;
    double width3d;
    double length3d;
    double cost;
    double sell;
    double profit;

    // constants don't change during the run
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    // get input
    cout << "Enter in the width of your rectangle" << endl;
    cin >> width;
    cout << "Enter in the length of your rectangle" << endl;
    cin >> length;

    // do calculations
    area = length * width;

    // print output

    cout << "The area of your rectangle is " << area << "." << endl;
    cout << endl;

    cout << "--------------------------------------" << endl;
    cout << endl;

    // volume of a 3d shape
    // main code
    cout << "Part 2 - Volume of a Rectangular Prism" << endl;
    cout << endl;
    cout << "Enter in the width of your rectangle" << endl;
    cin >> width3d;
    cout << "Enter in the length of your rectangle" << endl;
    cin >> length3d;
    cout << "Enter in the height of your rectangle" << endl;
    cin >> height;

    // calculations
    volume = length3d * width3d * height;

    // output
    cout << "The volume of your rectangular prism is " << volume << endl;
    cout << endl;
    cout << "--------------------------------------" << endl;
    cout << endl;

    // Price of box code
    cout << "Part 3 - Calculate the cost of the box" << endl;
    cout << endl;
    cout << "Box Price Inc." << endl;
    cout << endl;
    cout << fixed << setprecision(2);
    
    // equations
    cost = volume * COST_PER_CUBIC_FOOT;
    sell = volume * CHARGE_PER_CUBIC_FOOT;
    profit = sell - cost;

    // price to make it
    cout << "Price to make the box is $" << cost << endl;

    // price it is sold at
    cout << "Price to sell the box is $" << sell << endl;
    cout << endl;

    // profit
    cout << "The profit of selling the box is $" << profit << endl;
    cout << endl;
    return 0;
}