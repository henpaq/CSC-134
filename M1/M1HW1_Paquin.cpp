// Comment
/*
CSC 134
M2T1 - Receipt Calculator
H Paquin
1/24/24
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "M1HW1" << endl;

    // Set up variables
    string titanic = "Titanic";
    int year = 1997;
    double box_office = 2.18;

    // main code
    cout << "Movie name: " << titanic << endl;
    cout << "Movie date release date (year): " << year << endl;
    cout << "Had a worldwide income of $" << box_office << " billion dollars." << endl;

    // things from the movie
    cout << "Popular quote: \"Iceberg right ahead!\"" << endl;
    cout << "Popular scene: Titanic hits the iceberg" << endl;
    cout << "Most controversial scene: When Jack dies" << endl;
    cout << "Movie Starts: Exploring the wreck of the Titanic" << endl;
    return 0;
}