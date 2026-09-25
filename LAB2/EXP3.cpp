#include <iostream>
using namespace std;

void updateByReference(double &salary) {
    salary = salary + (salary * 0.10);
}

void updateByPointer(double *salary) {
    *salary = *salary + (*salary * 0.10);
}

int main() {
    double salary1 = 50000;
    double salary2 = 50000;

    updateByReference(salary1);
    updateByPointer(&salary2);

    cout << "Salary after reference update: " << salary1 << endl;
    cout << "Salary after pointer update: " << salary2 << endl;

    return 0;
}
