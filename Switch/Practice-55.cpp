// Restaurant Menu System

#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== Restaurant Menu =====";
    cout << "\n1. Burger - Rs. 500";
    cout << "\n2. Pizza - Rs. 1200";
    cout << "\n3. Biryani - Rs. 350";
    cout << "\n4. Fries - Rs. 250";

    cout << "\n\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You selected Burger. Price = Rs. 500";
        break;

    case 2:
        cout << "You selected Pizza. Price = Rs. 1200";
        break;

    case 3:
        cout << "You selected Biryani. Price = Rs. 350";
        break;

    case 4:
        cout << "You selected Fries. Price = Rs. 250";
        break;

    default:
        cout << "Invalid choice";
    }

    return 0;
}