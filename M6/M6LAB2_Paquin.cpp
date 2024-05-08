#include <iostream>
#include <vector>

// CSC 134
// M6LAB2 - Vectors and Linked Lists
// norrisa
// 4/22/24

using namespace std;

struct Node {
    int num;
    Node* next;
};

int main() {

  cout << "M6LAB2" << endl;
  // part 1 - vector
  // create a vector of ints
  vector <int> numbers;
  // add numbers to the end
  int num;
  int how_many;
  cout << "Enter how many numbers? ";
  cin >> how_many;
  cout << "Enter " << how_many << " numbers (space or enter between).";
  cout << endl;
  for (int i=0; i < how_many; i++) {
    // cout << "Enter a number: ";
    cin >> num;
    numbers.push_back(num);
  }
  // print out the vector
  cout << endl;
  cout << "Vector contents: ";
  for (int i: numbers) {
    cout << i << ",";
  }

  cout << endl;

  // part 2 - linked list
  // mak some nodes, then link them together
  Node* head = nullptr;

  Node first;
  first.num = 1;

  Node second;
  second.num = 2;

  // connect head to first
  head = &first;
  //connect first to second
  first.next = &second;

  // fincally, loop through the list
  cout << "Nodes of the list: " << endl;
  Node* probe = head;
  while (probe != nullptr) {
    cout << probe->num << ",";
    probe = probe->next;
  }
  cout << endl; 

}