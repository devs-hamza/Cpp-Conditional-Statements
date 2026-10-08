// Travel Booking System

#include <iostream>
using namespace std;

int main()
{
    int transport, destination;

    cout << "===== Travel Booking =====";
    cout << "\n1. Bus";
    cout << "\n2. Train";
    cout << "\n3. Flight";

    cout << "\nEnter transport: ";
    cin >> transport;

    switch (transport)
    {
    case 1:
        cout << "\n1. Lahore";
        cout << "\n2. Islamabad";
        cout << "\n3. Karachi";

        cout << "\nEnter destination: ";
        cin >> destination;

        switch (destination)
        {
        case 1:
            cout << "Bus booked for Lahore";
            break;
        case 2:
            cout << "Bus booked for Islamabad";
            break;
        case 3:
            cout << "Bus booked for Karachi";
            break;
        default:
            cout << "Invalid destination";
        }
        break;

    case 2:
        cout << "\n1. Lahore";
        cout << "\n2. Islamabad";
        cout << "\n3. Karachi";

        cout << "\nEnter destination: ";
        cin >> destination;

        switch (destination)
        {
        case 1:
            cout << "Train booked for Lahore";
            break;
        case 2:
            cout << "Train booked for Islamabad";
            break;
        case 3:
            cout << "Train booked for Karachi";
            break;
        default:
            cout << "Invalid destination";
        }
        break;

    case 3:
        cout << "\n1. Lahore";
        cout << "\n2. Islamabad";
        cout << "\n3. Karachi";

        cout << "\nEnter destination: ";
        cin >> destination;

        switch (destination)
        {
        case 1:
            cout << "Flight booked for Lahore";
            break;
        case 2:
            cout << "Flight booked for Islamabad";
            break;
        case 3:
            cout << "Flight booked for Karachi";
            break;
        default:
            cout << "Invalid destination";
        }
        break;

    default:
        cout << "Invalid transport";
    }

    return 0;
}