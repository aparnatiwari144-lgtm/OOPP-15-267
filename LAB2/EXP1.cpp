#include <iostream>
using namespace std;

int main()
{
    float salary = 50000;

    // Reference variable
    float &newSalary = salary;

    // Update salary by 10%
    newSalary = newSalary + (newSalary * 0.10);

    cout << "Salary from old variable: " << salary << endl;
    cout << "Salary from reference variable: " << newSalary << endl;

    return 0;
}