#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Item
{
public:
    string name;
    int quantity;
    double price;
};

void displayCart(const vector<Item>& cart)
{
    cout << "\n------ SHOPPING CART ------\n";

    cout << left << setw(15) << "Name"
         << setw(12) << "Quantity"
         << setw(12) << "Price" << endl;

    for (auto item : cart)
    {
        cout << left << setw(15) << item.name
             << setw(12) << item.quantity
             << setw(12) << item.price << endl;
    }
}

int main()
{
    vector<Item> cart;
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Item item;

        cout << "\nEnter item name: ";
        cin >> item.name;

        cout << "Enter quantity: ";
        cin >> item.quantity;

        cout << "Enter price: ";
        cin >> item.price;

        cart.push_back(item);
    }

    displayCart(cart);

    return 0;
}

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Item
{
public:
    string name;
    int quantity;
    double price;
};

// Program 1: Display Cart
void displayCart(const vector<Item>& cart)
{
    cout << "\n------ SHOPPING CART ------\n";

    cout << left << setw(15) << "Name"
         << setw(12) << "Quantity"
         << setw(12) << "Price" << endl;

    for (auto item : cart)
    {
        cout << left << setw(15) << item.name
             << setw(12) << item.quantity
             << setw(12) << item.price << endl;
    }
}

// Program 2: Calculate Total
double calculateTotal(const vector<Item>& cart)
{
    double total = 0;

    for (auto item : cart)
    {
        total += item.quantity * item.price;
    }

    return total;
}

int main()
{
    vector<Item> cart;
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Item item;

        cout << "\nEnter item name: ";
        cin >> item.name;

        cout << "Enter quantity: ";
        cin >> item.quantity;

        cout << "Enter price: ";
        cin >> item.price;

        cart.push_back(item);
    }

    displayCart(cart);

    cout << fixed << setprecision(2);

    cout << "\nTotal Amount: Rs. "
         << calculateTotal(cart) << endl;

    return 0;
}