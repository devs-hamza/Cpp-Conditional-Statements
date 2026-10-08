// Student Information Menu

#include <iostream>
using namespace std;

int main()
{
    int choice;

    string name = "Ali";
    int rollNo = 25;
    int marks = 85;

    cout << "===== Student Information =====";
    cout << "\n1. Display Name";
    cout << "\n2. Display Roll Number";
    cout << "\n3. Display Marks";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Name = " << name;
        break;

    case 2:
        cout << "Roll Number = " << rollNo;
        break;

    case 3:
        cout << "Marks = " << marks;
        break;

    default:
        cout << "Invalid choice";
    }

    return 0;
}