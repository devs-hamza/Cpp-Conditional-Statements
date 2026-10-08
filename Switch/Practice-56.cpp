// Banking Menu System

#include <iostream>
using namespace std;

int main()
{
    int choice;
    double balance = 50000;
    double amount;

    cout << "===== Banking Menu =====";
    cout << "\n1. Check Balance";
    cout << "\n2. Deposit Money";
    cout << "\n3. Withdraw Money";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Your balance = Rs. " << balance;
        break;

    case 2:
        cout << "Enter deposit amount: ";
        cin >> amount;

        balance = balance + amount;

        cout << "New balance = Rs. " << balance;
        break;

    case 3:
        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "New balance = Rs. " << balance;
        }
        else
        {
            cout << "Insufficient balance";
        }
        break;

    default:
        cout << "Invalid choice";
    }

    return 0;
}