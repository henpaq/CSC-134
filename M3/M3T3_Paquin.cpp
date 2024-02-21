// Comment
/*
CSC 134
M3T3 - RNG
H Paquin
2/21/24
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    // variables
    int roll, die1, die2;
    int seed;
    int point;

    // main code
    cout << "Welcome to the craps table" << endl;
    //cout << "Enter your lucky number: " << endl;
    //cin >> seed;

    // set the random seed
    seed = time(0);
    srand(seed);

    // roll the dice
    die1 = (rand() % 6) + 1; // roll 0-5, add 1
    die2 = (rand() % 6) + 1;
    roll = die1 + die2;
    cout << "Your dice roll is: " << die1 << " and " << die2 << " -> " << roll << endl;

    // TODO: Check for win, loss, or point
    if (roll == 7) {
        cout << "Loss" << endl;
    }
    else if (roll == 6 || roll == 9 || roll == 12) {
        cout << "Win!" << endl;
    }
    else {
        point == roll;
        cout << "Your point is " << point << endl;
        do {
            die1 = (rand() % 6) + 1; // roll 0-5, add 1
            die2 = (rand() % 6) + 1;
            roll = die1 + die2;
            cout << "Your dice roll is: " << die1 << " and " << die2 << " -> " << roll << endl;
        } while (roll != point && roll != 7);
        if (point == roll) {
            cout << "Win!" << endl;
        }
        else {
            cout << "Loss" << endl;
        }
    }

    return 0; 

} 