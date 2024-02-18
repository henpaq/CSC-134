// Comment
/*
CSC 134
M2HW1 - HW
H Paquin
2/14/24
*/

#include <iostream>
#include <iomanip>
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
    int pizza;
    int slices;
    int people;
    int totalPizzas;
    int slicesPeople;
    int leftover;
    double length;
    double width;
    double height;
    double volume;
    double cost;
    double sell;
    double profit;

    // constants don't change during the run
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    // Part 1
    // main code
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
    // 2 decimal places
    cout << fixed << setprecision(2);

    // main code
    cout << "Part 2 - Price of crates" << endl;
    cout << endl;
    cout << "Enter in the width of your rectangle" << endl;
    cin >> width;
    cout << "Enter in the length of your rectangle" << endl;
    cin >> length;
    cout << "Enter in the height of your rectangle" << endl;
    cin >> height;

    // calculations
    volume = length * width * height;

    // output
    cout << "The volume of your rectangular prism is " << volume << endl;
    cout << endl;
    cout << "--------------------------------------" << endl;
    cout << endl;

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

    // Part 3
    // main code
    cout << "Part - 3 Pizza Party" << endl;
    cout << endl;
    cout << "How many pizzas are going to be ordered? " << endl;
    cin >> pizza;
    cout << "How many slices will there be per pizza? " << endl;
    cin >> slices;
    cout << "How many people will be showing up to the party? (Three slices per person) " << endl;
    cin >> people;

    // calculations
    totalPizzas = pizza * slices;
    slicesPeople = 3 * people;
    leftover = totalPizzas - slicesPeople;

    // output
    cout << "There will be " << leftover << " slice(s) of pizza leftover." << endl;
    cout << endl;

    // Part 4
    // main code
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