// ATM Account Management System

#include <iostream>
using namespace std;

int main()
{
    int account, choice;
    double balance = 50000;
    double amount;

    cout << "===== ATM =====";
    cout << "\n1. Personal Account";
    cout << "\n2. Business Account";

    cout << "\nEnter account type: ";
    cin >> account;

    switch (account)
    {
    case 1:
        cout << "\nPersonal Account";
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Balance = Rs. " << balance;
            break;

        case 2:
            cout << "Enter amount: ";
            cin >> amount;
            balance += amount;
            cout << "New Balance = Rs. " << balance;
            break;

        case 3:
            cout << "Enter amount: ";
            cin >> amount;

            if (amount <= balance)
            {
                balance -= amount;
                cout << "New Balance = Rs. " << balance;
            }
            else
                cout << "Insufficient Balance";

            break;

        default:
            cout << "Invalid choice";
        }
        break;

    case 2:
        cout << "\nBusiness Account";
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Balance = Rs. " << balance;
            break;

        case 2:
            cout << "Enter amount: ";
            cin >> amount;
            balance += amount;
            cout << "New Balance = Rs. " << balance;
            break;

        case 3:
            cout << "Enter amount: ";
            cin >> amount;

            if (amount <= balance)
            {
                balance -= amount;
                cout << "New Balance = Rs. " << balance;
            }
            else
                cout << "Insufficient Balance";

            break;

        default:
            cout << "Invalid choice";
        }
        break;

    default:
        cout << "Invalid account type";
    }

    return 0;
}