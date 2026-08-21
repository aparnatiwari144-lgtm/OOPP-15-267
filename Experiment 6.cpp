#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;

public:
    // Default constructor
    Student() {
        rollNo = 0;
        cout << "Default Constructor called\n";
    }

    // Parameterized constructor
    Student(int r) {
        rollNo = r;
        cout << "Parameterized Constructor called\n";
    }

    // Copy constructor
    Student(const Student &s) {
        rollNo = s.rollNo;
        cout << "Copy Constructor called\n";
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for Roll No: "
             << rollNo << endl;
    }
};

int main() {
    Student s1;
    s1.display();

    Student s2(101);
    s2.display();

    Student s3(s2);
    s3.display();

    return 0;
}