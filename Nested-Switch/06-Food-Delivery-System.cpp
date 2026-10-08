// Food Delivery System

#include <iostream>
using namespace std;

int main()
{
    int food, item;

    cout << "===== Food Delivery =====";
    cout << "\n1. Pizza";
    cout << "\n2. Burger";
    cout << "\n3. Biryani";

    cout << "\nEnter food category: ";
    cin >> food;

    switch (food)
    {
    case 1:
        cout << "\n1. Small Pizza";
        cout << "\n2. Medium Pizza";
        cout << "\n3. Large Pizza";

        cout << "\nEnter choice: ";
        cin >> item;

        switch (item)
        {
        case 1:
            cout << "Small Pizza selected";
            break;
        case 2:
            cout << "Medium Pizza selected";
            break;
        case 3:
            cout << "Large Pizza selected";
            break;
        default:
            cout << "Invalid choice";
        }
        break;

    case 2:
        cout << "\n1. Chicken Burger";
        cout << "\n2. Beef Burger";
        cout << "\n3. Cheese Burger";

        cout << "\nEnter choice: ";
        cin >> item;

        switch (item)
        {
        case 1:
            cout << "Chicken Burger selected";
            break;
        case 2:
            cout << "Beef Burger selected";
            break;
        case 3:
            cout << "Cheese Burger selected";
            break;
        default:
            cout << "Invalid choice";
        }
        break;

    case 3:
        cout << "\n1. Chicken Biryani";
        cout << "\n2. Beef Biryani";

        cout << "\nEnter choice: ";
        cin >> item;

        switch (item)
        {
        case 1:
            cout << "Chicken Biryani selected";
            break;
        case 2:
            cout << "Beef Biryani selected";
            break;
        default:
            cout << "Invalid choice";
        }
        break;

    default:
        cout << "Invalid category";
    }

    return 0;
}