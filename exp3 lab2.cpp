#include <iostream>
using namespace std;

// Function using reference
void updateByReference(float &salary) {
    salary = salary + (salary * 0.10);
}

// Function using pointer
void updateByPointer(float *salary) {
    *salary = *salary + (*salary * 0.10);
}

int main() {
    float salary1 = 50000;
    float salary2 = 50000;

    cout << "Original Salary 1: " << salary1 << endl;
    updateByReference(salary1);
    cout << "Salary 1 after 10% update: " << salary1 << endl;

    cout << "\nOriginal Salary 2: " << salary2 << endl;
    updateByPointer(&salary2);
    cout << "Salary 2 after 10% update: " << salary2 << endl;

    return 0;
}