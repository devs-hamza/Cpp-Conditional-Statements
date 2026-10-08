// Mobile Phone Menu System

#include <iostream>
using namespace std;

int main()
{
    int mainChoice, subChoice;

    cout << "===== Mobile Phone Menu =====";
    cout << "\n1. Calls";
    cout << "\n2. Messages";
    cout << "\n3. Internet";

    cout << "\nEnter your choice: ";
    cin >> mainChoice;

    switch (mainChoice)
    {
    case 1:
        cout << "\n1. Make Call";
        cout << "\n2. Call History";

        cout << "\nEnter choice: ";
        cin >> subChoice;

        switch (subChoice)
        {
        case 1:
            cout << "Making a call...";
            break;
        case 2:
            cout << "Opening call history...";
            break;
        default:
            cout << "Invalid choice";
        }
        break;

    case 2:
        cout << "\n1. Send Message";
        cout << "\n2. Message Inbox";

        cout << "\nEnter choice: ";
        cin >> subChoice;

        switch (subChoice)
        {
        case 1:
            cout << "Sending message...";
            break;
        case 2:
            cout << "Opening message inbox...";
            break;
        default:
            cout << "Invalid choice";
        }
        break;

    case 3:
        cout << "\n1. Turn Internet On";
        cout << "\n2. Turn Internet Off";

        cout << "\nEnter choice: ";
        cin >> subChoice;

        switch (subChoice)
        {
        case 1:
            cout << "Internet turned on";
            break;
        case 2:
            cout << "Internet turned off";
            break;
        default:
            cout << "Invalid choice";
        }
        break;

    default:
        cout << "Invalid choice";
    }

    return 0;
}