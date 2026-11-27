#include <iostream>
#include <vector>
using namespace std;

class Item
{
public:
    string name;
    int quantity;
    double price;
};

void applyDiscount(vector<Item>& cart)
{
    for (auto& item : cart)
    {
        if (item.price > 1000)
        {
            item.price = item.price * 0.90;
        }
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

    applyDiscount(cart);

    cout << "\nItems After Discount:\n";

    for (auto item : cart)
    {
        cout << item.name << "  "
             << item.quantity << "  "
             << item.price << endl;
    }

    return 0;
}