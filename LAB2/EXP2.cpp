#include <iostream>
using namespace std;

int main() {
    double salary = 50000;

    double *newSalary = &salary;

    *newSalary = *newSalary + (*newSalary * 0.10);

    cout << "Salary from old variable: " << salary << endl;

    return 0;
}