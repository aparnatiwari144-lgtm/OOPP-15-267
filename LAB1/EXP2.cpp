#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;
    string branch;

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter branch: ";
        cin >> branch;
    }

    void display() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter details of Student 1:\n";
    s1.input();

    cout << "\nEnter details of Student 2:\n";
    s2.input();

    s1.display();
    s2.display();

    return 0;
}