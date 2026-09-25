#include <iostream>
using namespace std;

class Calculator
{
public:
    // Inline function
    inline int square(int n)
    {
        return n * n;
    }

    // Function with default argument
    int add(int a, int b = 10)
    {
        return a + b;
    }

    // Function overloading
    int multiply(int a, int b)
    {
        return a * b;
    }

    double multiply(double a, double b)
    {
        return a * b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }

    double divide(double a, double b)
    {
        if (b == 0)
        {
            cout << "Division by zero is not allowed." << endl;
            return 0;
        }

        return a / b;
    }
};

int main()
{
    Calculator c;

    cout << "Square of 5: " << c.square(5) << endl;

    cout << "Addition with default argument: "
         << c.add(20) << endl;

    cout << "Addition of two numbers: "
         << c.add(20, 30) << endl;

    cout << "Multiplication of integers: "
         << c.multiply(5, 4) << endl;

    cout << "Multiplication of decimal numbers: "
         << c.multiply(2.5, 4.0) << endl;

    cout << "Subtraction: "
         << c.subtract(50, 20) << endl;

    cout << "Division: "
         << c.divide(20.0, 4.0) << endl;

    return 0;
}