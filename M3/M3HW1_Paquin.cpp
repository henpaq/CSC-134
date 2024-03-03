// Comment
/*
CSC 134
M2HW1 - Silver
H Paquin
3/3/24
*/

#include <iostream>
using namespace std;

int main() {

  // declare variables
  string answer;
    int choice;

  // Question 1
  cout << "Question 1" << endl;
  cout << endl;

  cout << "Hello, I am a C++ program." << endl;
  cout << "Do you like me? Please type yes or no. (lowercase)" << endl;
  cin >> answer;
  cout << endl;
  if (answer == "yes") {
    cout << "That's great. Im sure we will get along." << endl;
  }
  else if (answer == "no") {
    cout << "Maybe you will like me later." << endl;
  }
  else
    cout << "If you are not sure, it is okay." << endl;

    // Question 2
    cout << "Question 2" << endl;
    cout << endl;

    // Question 3
    // ask the question
    cout << "Do you want to drive for Red Bull (1) or Ferrari (2)?" << endl;
    cout << "Type 1 or 2: "; 
    cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You chose Red Bull" << endl;
    cout << endl;
    cout << "It is the final race of the season. You are winning the championship, but there is an issue." << endl;
    cout << "Your team warns you that there is potential rain in 5 minutes. They give you the option to box or stay out." << endl;
    cout << endl;
    cout << "What do you choose? (Box (1) or stay out (2))" << endl;
    cout << endl;
    cin >> choice;
    if (1 == choice) {
        cout << "You chose to box" << endl;
        cout << endl;
        cout << "Your team makes a perfect pit stop!" << endl;
        cout << "The rain falls down heavily, and you are the only one on Wet tires." << endl;
        cout << endl;
        cout << "Congratulations! You won the Championship and the race!" << endl;
        cout << endl;
    }
    if (2 == choice) {
        cout << "You chose to stay out" << endl;
        cout << endl;
        cout << "The rain on the forecast is approaching!" << endl;
        cout << "The cars behind you decide to change tires for wet tires." << endl;
        cout << "Luckily the rain is not heavy enough and you are able to maintain your lead!" << endl;
        cout << endl;
        cout << "Congratulations! You won the Championship and the race!" << endl;
        cout << endl;
  }
  }
  else if (2 == choice) {
  	cout << "You chose Ferrari" << endl;
    cout << endl;
    cout << "It is the final race of the season. You are winning the championship, but there is an issue." << endl;
    cout << "Your team warns you that there is potential rain in 5 minutes. They give you the option to box or stay out." << endl;
    cout << endl;
    cout << "What do you choose? (Box (1) or stay out (2))" << endl;
    cout << endl;
    cin >> choice;
    if (1 == choice) {
        cout << "You chose to box" << endl;
        cout << endl;
        cout << "Your team calls you in, but your teammate is already in the pits!" << endl;
        cout << "Your team tries to tell you to stay out, but it is too late." << endl;
        cout << "Your team has ruined your pit stop!" << endl;
        cout << "When you come out of the pits, you lost the lead, and your now losing the championship!" << endl;
        cout << endl;
        cout << "Sadly, you end up losing the championship" << endl;
        cout << endl;
    }
     if (2 == choice) {
        cout << "You chose to stay out" << endl;
        cout << endl;
        cout << "The rain on the forecast has gone away, and the race will stay dry!" << endl;
        cout << "On lap 55 / 57, you start to feel a vibration in your car." << endl;
        cout << "Seconds later you have a puncture!" << endl;
        cout << "You are forced to pull over and retire the car." << endl;
        cout << endl;
        cout << "Sadly, you end up losing the championship" << endl;
        cout << endl;
    }
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl;
  cout << endl; // this runs no matter what they choose


  return 0;

}