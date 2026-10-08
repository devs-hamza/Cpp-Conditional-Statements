// Bank Account Management System

#include <iostream>
using namespace std;

int main()
{
    int accountType;
    int choice;
    double balance = 50000;
    double amount;

    cout << "===== Bank Account Management System =====";

    cout << "\n\n1. Personal Account";
    cout << "\n2. Business Account";

    cout << "\n\nEnter account type: ";
    cin >> accountType;

    switch (accountType)
    {
    case 1:
        cout << "\nPersonal Account";

        cout << "\n1. Check Balance";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Balance = Rs. " << balance;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;

            balance = balance + amount;

            cout << "New Balance = Rs. " << balance;
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance)
            {
                balance = balance - amount;
                cout << "New Balance = Rs. " << balance;
            }
            else
            {
                cout << "Insufficient Balance";
            }

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

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Balance = Rs. " << balance;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;

            balance = balance + amount;

            cout << "New Balance = Rs. " << balance;
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance)
            {
                balance = balance - amount;
                cout << "New Balance = Rs. " << balance;
            }
            else
            {
                cout << "Insufficient Balance";
            }

            break;

        default:
            cout << "Invalid choice";
        }

        break;

    default:
        cout << "Invalid Account Type";
    }

    return 0;
}