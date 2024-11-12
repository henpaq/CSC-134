#include <iostream>
using namespace std;

int main() {

  int choice; 

  // ask the question
  cout << "Congratulations! You have won a 50 dollar Amazon gift card." << endl; 
  cout << "Send us your credit card information and your address for shipping." << endl;
  cout << "Is this a scam?" << endl;
  cout << "Type 1 for yes or 2 for no: "; 
  cin >> choice;
  cout << endl;

  if (1 == choice) {
  	cout << "Your answer is correct! Great Job!" << endl;
    cout << "Here is another question" << endl;
    cout << "URGENT! Your bank needs your info to verify your identy." << endl;
    cout << "If you fail to complete in 24 hrs your account will be closed!" << endl;
    cout << endl;
    cout << "Is this a scam?" << endl;
    cout << "Type 1 for yes or 2 for no: " << endl;
    cin >> choice;

    if (1 == choice) {
        cout << "Your answer is correct! Great Job!" << endl;
        cout << "That is the end of the first module." << endl;
        cout << endl;
    }
    if (2 == choice) {
        cout << "Your answer is incorrect." << endl;
        cout << endl;
        cout << "It was a scam because the word idenity was misspelled." << endl;
        cout << "Your bank would most likely not send a message in that wording." << endl;
        cout << "Restart and try again!" << endl;
        cout << endl;
  }
  }
  else if (2 == choice) {
  	cout << "Your answer is incorrect." << endl;
    cout << endl;
    cout << "This is a scam because they are asking for your credit card information and your address." << endl;
    cout << "Also if you won a gift card, you would have previously entered some type of giveaway." << endl;
    cout << endl;
    cout << "Restart and try again!" << endl;
    cout << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thanks for using our course!" << endl;
  cout << endl;
  return 0;

}