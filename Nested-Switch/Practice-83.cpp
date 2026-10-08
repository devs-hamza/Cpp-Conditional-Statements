// Hospital Department and Service Selection

#include <iostream>
using namespace std;

int main()
{
    int department, service;

    cout << "===== Hospital =====";
    cout << "\n1. General";
    cout << "\n2. Dental";
    cout << "\n3. Eye";

    cout << "\nEnter department: ";
    cin >> department;

    switch (department)
    {
    case 1:
        cout << "\n1. General Checkup";
        cout << "\n2. Blood Test";

        cout << "\nEnter service: ";
        cin >> service;

        switch (service)
        {
        case 1:
            cout << "General Checkup selected";
            break;
        case 2:
            cout << "Blood Test selected";
            break;
        default:
            cout << "Invalid service";
        }
        break;

    case 2:
        cout << "\n1. Dental Checkup";
        cout << "\n2. Teeth Cleaning";

        cout << "\nEnter service: ";
        cin >> service;

        switch (service)
        {
        case 1:
            cout << "Dental Checkup selected";
            break;
        case 2:
            cout << "Teeth Cleaning selected";
            break;
        default:
            cout << "Invalid service";
        }
        break;

    case 3:
        cout << "\n1. Eye Checkup";
        cout << "\n2. Eye Test";

        cout << "\nEnter service: ";
        cin >> service;

        switch (service)
        {
        case 1:
            cout << "Eye Checkup selected";
            break;
        case 2:
            cout << "Eye Test selected";
            break;
        default:
            cout << "Invalid service";
        }
        break;

    default:
        cout << "Invalid department";
    }

    return 0;
}