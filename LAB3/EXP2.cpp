#include <iostream>
using namespace std;

class Number
{
private:
    double a, b;

public:
    inline void input();
    inline void show();
};

// Inline functions defined outside the class
inline void Number::input()
{
    cout << "Enter first value: ";
    cin >> a;

    cout << "Enter second value: ";
    cin >> b;
}

inline void Number::show()
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