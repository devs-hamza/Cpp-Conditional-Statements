// School Management System

#include <iostream>
using namespace std;

int main()
{
    int person, choice;

    cout << "===== School Management System =====";
    cout << "\n1. Student";
    cout << "\n2. Teacher";

    cout << "\nEnter choice: ";
    cin >> person;

    switch (person)
    {
    case 1:
        cout << "\n1. Student Name";
        cout << "\n2. Student Marks";
        cout << "\n3. Student Roll Number";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Student Name: Ali";
            break;
        case 2:
            cout << "Student Marks: 85";
            break;
        case 3:
            cout << "Roll Number: 101";
            break;
        default:
            cout << "Invalid choice";
        }
        break;

    case 2:
        cout << "\n1. Teacher Name";
        cout << "\n2. Teacher Subject";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Teacher Name: Ahmed";
            break;
        case 2:
            cout << "Teacher Subject: C++";
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