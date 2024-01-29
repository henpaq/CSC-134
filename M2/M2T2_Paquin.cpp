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

int main() {
    cout << "M2T2" << endl;
    // set up variables
    string name;
    int num_apples;
    double price_per_apple;
    double total;
    double tax_amount;
    double tax_percent = 0.07;
    double total_price;

    // ask user for name
    cout << "Hi, what's your name? ";
    cin >> name;
    cout << "Nice to meet you, " << name << endl;
    // how many apples?
    cout << "How many apples would you like? ";
    cin >> num_apples;
    // ask price per apple
    cout << "How much are they each? ";
    cin >> price_per_apple;
    // calculate the total price
    total = num_apples * price_per_apple;
    tax_amount = total * tax_percent;
    total_price = total + tax_amount;
    // print the output
    cout << "Your total is: " << total;
    cout << endl;
    // TODO: make a nice receipt
    cout << endl;
    cout << " Thank you for shopping with us!" << endl;
    cout << endl;
    cout << " " << num_apples << " apples" << "\t" << "$" << total << endl;
    cout << "---------------------------" << endl;
    cout << " Tax (7%)" << "\t" << "$" << tax_amount << endl;
    cout << "---------------------------" << endl;
    cout << " Total" << "\t\t" << "$" << total_price << endl;
    cout << "---------------------------" << endl;
    cout << " Have a nice day!" << endl;
    cout << " Phone: (910)-785-8910" << endl;
    cout << " 684 Apple St. 28311" << endl;
    cout << endl;
    return 0;
}