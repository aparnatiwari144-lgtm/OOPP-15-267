#include <iostream>
using namespace std;

class Area
{
public:

    // Area of Circle
    double area(double radius)
    {
        return 3.14159 * radius * radius;
    }

    // Area of Rectangle
    double area(double length, double width)
    {
        return length * width;
    }

    // Area of Square
    int area(int side)
    {
        return side * side;
    }

    // Area of Triangle
    double area(double base, double height, bool triangle)
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Area a;

    double radius;
    double length, width;
    int side;
    double base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Area of Circle = "
         << a.area(radius) << endl;

    cout << "\nEnter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    cout << "Area of Rectangle = "
         << a.area(length, width) << endl;

    cout << "\nEnter side of square: ";
    cin >> side;

    cout << "Area of Square = "
         << a.area(side) << endl;

    cout << "\nEnter base of triangle: ";
    cin >> base;

    cout << "Enter height of triangle: ";
    cin >> height;

    cout << "Area of Triangle = "
         << a.area(base, height, true) << endl;

    return 0;
}