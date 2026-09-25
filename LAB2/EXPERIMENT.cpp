#include <iostream>
using namespace std;

// Call by Value
void callByValue(int x)
{
    x = x + 10;
    cout << "Inside Call by Value: " << x << endl;
}

// Call by Reference
void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside Call by Reference: " << x << endl;
}

// Call by Address
void callByAddress(int *x)
{
    *x = *x + 10;
    cout << "Inside Call by Address: " << *x << endl;
}

int main()
{
    int a = 10;
    int b = 10;
    int c = 10;

    cout << "Original values:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "\nAfter modification:" << endl;

    callByValue(a);
    callByReference(b);
    callByAddress(&c);

    cout << "\nValues in main:" << endl;
    cout << "After Call by Value: " << a << endl;
    cout << "After Call by Reference: " << b << endl;
    cout << "After Call by Address: " << c << endl;

    return 0;
}