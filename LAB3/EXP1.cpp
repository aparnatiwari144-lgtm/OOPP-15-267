#include <iostream>
using namespace std;

class Number
{
private:
    double a, b;

public:
    void input();
    void show();
};

// Function defined outside the class
void Number::input()
{
    cout << "Enter first value: ";
    if (!(cin >> a))
    {
        a = 0;
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "Enter second value: ";
    if (!(cin >> b))
    {
        b = 0;
        cin.clear();
        cin.ignore(1000, '\n');
    }
}

// Function defined outside the class
void Number::show()
{
    cout << "First value: " << a << endl;
    cout << "Second value: " << b << endl;
}

int main()
{
    Number n;

    n.input();
    n.show();

    return 0;
}