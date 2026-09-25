#include <iostream>
using namespace std;

// Call by Value
void callByValue(int x) {
    x = x + 10;
}

// Call by Reference
void callByReference(int &x) {
    x = x + 10;
}

// Call by Address
void callByAddress(int *x) {
    *x = *x + 10;
}

int main() {
    int a = 10;
    int b = 10;
    int c = 10;

    cout << "Before function calls:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    callByValue(a);
    callByReference(b);
    callByAddress(&c);

    cout << "\nAfter function calls:" << endl;
    cout << "a = " << a << " (Call by Value)" << endl;
    cout << "b = " << b << " (Call by Reference)" << endl;
    cout << "c = " << c << " (Call by Address)" << endl;

    return 0;
}