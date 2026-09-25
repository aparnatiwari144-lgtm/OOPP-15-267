#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    string branch;

    void input() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter branch: ";
        cin >> branch;
    }

    void show() {
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << roll;
        cout << "\nBranch: " << branch << endl;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter details of Student 1:\n";
    s1.input();

    cout << "\nEnter details of Student 2:\n";
    s2.input();

    cout << "\n--- Student Details ---\n";
    s1.show();
    s2.show();

    return 0;
}