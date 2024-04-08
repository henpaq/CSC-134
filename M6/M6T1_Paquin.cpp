// Comment
/*
CSC 134
M6T1
H Paquin
4/8/24
*/

#include <iostream>
using namespace std;

// function prototypes
void part1();
void part2();

int main() {

  cout << "M6T1" << endl;
  part1();
  part2();

  return 0; 

} 

// function definitions
void part1() {
    cout << "Part 1" << endl;

    // declaring variables
    const int SIZE = 5; // because 5 days
    int cars;
    int total = 0;
    double average;

    // find out how many cars spotted per day
    for (int i=0; i < SIZE; i++) {
        cout << "Day " << i+1 << ": ";
        cin >> cars;
        // add to the total
        total = total + cars;
    }
    // find total and average
    average = (double) total / SIZE;
    cout << "Total cars: " << total << endl;
    cout << "Average per day: " << average << endl;
}

void part2() {
    cout << "Part 2" << endl;
    const int SIZE = 5;
    int total = 0;
    double average;
    // array to hold the car data
    int cars[SIZE];
    // array to hold the days
    string days[] = {"Mon", "Tue", "Wed", "Thu", "Fri"}; // size is implicit

    // get data for each day
    for (int i=0; i < SIZE; i++) {
        cout << days[i] << ": ";
        cin >> cars[i];
    }
    // find total and average
    for (int i=0; i < SIZE; i++) {
        total += cars[i];
    }
    average = (double) total / SIZE;
    cout << "Total = " << total << ", average = " << average << endl;

    // Finally plot the data
    for (int i=0; i < SIZE; i++) {
        cout << days[i] << "\t";
        cout << cars[i] << "\t";
        for (int j=0; j < cars[i]; j++) {
            cout << "|";
        }
        cout << endl;
    }
}