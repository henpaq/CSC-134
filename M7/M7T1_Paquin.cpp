#include <iostream>
using namespace std;
#include "Restaurant.h"
#include <string>

int main() {
    cout << "Restaurant Review Program" << endl;
    cout << "Breakfast: " << endl;
    cout << "Lunch: " << endl;
    Restaurant breakfast = Restaurant("Bojangles", 3.0, "The chicken biscuit were a little dry.");
    Restaurant lunch = Restaurant("Chick-fil-a", 4.5, "The food was very good!");
    cout << breakfast.getName() << endl;
    cout << breakfast.getRating() << endl;
    breakfast.printReview();
    cout << lunch.getName() << endl;
    cout << lunch.getRating() << endl;
    lunch.printReview();
    cout << endl;
    return 0;
}