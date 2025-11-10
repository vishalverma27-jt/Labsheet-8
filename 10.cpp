#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll_no;
    float marks;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no: ";
        cin >> roll_no;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nRoll No: " << roll_no;
        cout << "\nMarks: " << marks;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
}
