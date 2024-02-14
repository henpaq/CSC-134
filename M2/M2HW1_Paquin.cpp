// Comment
/*
CSC 134
M2HW1 - HW
H Paquin
2/14/24
*/

#include <iostream>
using namespace std;


int main() {

    // delcare variables
    string name;
    int startingBalance;
    int deposit;
    int withdrawl;
    int finalBalance;
    string team;
    string school;
    string chant;

    // Part 1
    //main code
    cout << "Part - 1 Banking" << endl;
    cout << endl;
    cout << "What is your name: " << endl;
    cin >> name;
    cout << "What is your starting bank balance: " << endl;
    cin >> startingBalance;
    cout << "What is your amount of deposit: " << endl;
    cin >> deposit;
    cout << "What is your amount of withdrawl (no negatives): " << endl;
    cin >> withdrawl;
    cout << endl;

    // calculations
    finalBalance = startingBalance + deposit - withdrawl;
    cout << endl;

    // outputs
    cout << name << endl;
    cout << "Account Number - 485940921" << endl;
    cout << "Your final balance is " << finalBalance << endl;
    cout << endl;

    // Part 2

    // Part 3

    // Part 4
    cout << "Part - 4 cheering on your school" << endl;
    cout << endl;
    cout << "Type in your school name: " << endl;
    cin >> school;
    cout << "Type in your team name: " << endl;
    cin >> team;
    cout << "Type in your chant " << endl;
    cin >> chant;
    cout << endl;
    cout << chant << " " << school << "!" << endl;
    cout << chant << " " << school << "!" << endl;
    cout << chant << " " << school << "!" << endl;
    cout << chant << " " << team << "!" << endl;
    cout << endl;
  return 0; 

} 