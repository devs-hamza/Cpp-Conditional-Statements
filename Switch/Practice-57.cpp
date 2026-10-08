// Rock Paper Scissors

#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== Rock Paper Scissors =====";
    cout << "\n1. Rock";
    cout << "\n2. Paper";
    cout << "\n3. Scissors";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You selected Rock";
        break;

    case 2:
        cout << "You selected Paper";
        break;

    case 3:
        cout << "You selected Scissors";
        break;

    default:
        cout << "Invalid choice";
    }

    return 0;
}