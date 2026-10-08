// Student Portal System

#include <iostream>
using namespace std;

int main()
{
    int category, choice;

    cout << "===== Student Portal =====";
    cout << "\n1. Academic";
    cout << "\n2. Personal";
    cout << "\n3. Fee";

    cout << "\nEnter category: ";
    cin >> category;

    switch (category)
    {
    case 1:
        cout << "\n===== Academic =====";
        cout << "\n1. Marks";
        cout << "\n2. Grade";
        cout << "\n3. Attendance";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Marks = 85";
            break;

        case 2:
            cout << "Grade = A";
            break;

        case 3:
            cout << "Attendance = 90%";
            break;

        default:
            cout << "Invalid choice";
        }
        break;

    case 2:
        cout << "\n===== Personal =====";
        cout << "\n1. Name";
        cout << "\n2. Roll Number";
        cout << "\n3. Department";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Name = Ali";
            break;

        case 2:
            cout << "Roll Number = 101";
            break;

        case 3:
            cout << "Department = Computer Science";
            break;

        default:
            cout << "Invalid choice";
        }
        break;

    case 3:
        cout << "\n===== Fee =====";
        cout << "\n1. Total Fee";
        cout << "\n2. Paid Fee";
        cout << "\n3. Remaining Fee";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Total Fee = Rs. 60000";
            break;

        case 2:
            cout << "Paid Fee = Rs. 40000";
            break;

        case 3:
            cout << "Remaining Fee = Rs. 20000";
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