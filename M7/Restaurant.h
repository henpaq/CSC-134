// restaurant class file
using namespace std;
#include <string>
#include <iostream>
class Restaurant {
    private:
        string name;
        double rating;
        string comment;
    public:
    Restaurant(string n, double r, string c) {
        name = n;
        rating = r;
        comment = c;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
    void setName(string n) {
        name = n;
    }
    void setRating(double r) {
        rating = r;
    }
    void printReview() {
        cout << "Name: " << name << " ";
        cout << "(" << rating << "/5 stars)" << endl;
        cout << "Comments: " << comment << endl;
    }
};