#include <iostream>
using namespace std;

int main() {
    float salary = 50000;

    // Pointer stores address of salary
    float *newSalary = &salary;

    cout << "Salary before update: " << salary << endl;

    // Update salary using pointer
    *newSalary = *newSalary + (*newSalary * 0.10);

    cout << "Salary after 10% update: " << salary << endl;

    return 0;
}