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

Item findMostExpensiveItem(const vector<Item>& cart)
{
    Item expensive = cart[0];

    for (auto item : cart)
    {
        if (item.price > expensive.price)
        {
            expensive = item;
        }
    }

    return expensive;
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

        cout << "Enter item name: ";
        cin >> item.name;

        cout << "Enter quantity: ";
        cin >> item.quantity;

        cout << "Enter price: ";
        cin >> item.price;

        cart.push_back(item);
    }

    if (cart.empty())
    {
        cout << "Cart is empty!";
        return 0;
    }

    Item result = findMostExpensiveItem(cart);

    cout << "\nMost Expensive Item: " << result.name;
    cout << "\nUnit Price: Rs. " << result.price;

    return 0;
}