// University Fee Management System

#include <iostream>
using namespace std;

int main()
{
    int program, semester;

    cout << "===== University Fee System =====";
    cout << "\n1. BSCS";
    cout << "\n2. BBA";
    cout << "\n3. Engineering";

    cout << "\nEnter program: ";
    cin >> program;

    switch (program)
    {
    case 1:
        cout << "\n1. Semester 1";
        cout << "\n2. Semester 2";
        cout << "\n3. Semester 3";

        cout << "\nEnter semester: ";
        cin >> semester;

        switch (semester)
        {
        case 1:
            cout << "BSCS Semester 1 Fee = Rs. 60000";
            break;
        case 2:
            cout << "BSCS Semester 2 Fee = Rs. 60000";
            break;
        case 3:
            cout << "BSCS Semester 3 Fee = Rs. 60000";
            break;
        default:
            cout << "Invalid semester";
        }
        break;

    case 2:
        cout << "\n1. Semester 1";
        cout << "\n2. Semester 2";
        cout << "\n3. Semester 3";

        cout << "\nEnter semester: ";
        cin >> semester;

        switch (semester)
        {
        case 1:
            cout << "BBA Semester 1 Fee = Rs. 50000";
            break;
        case 2:
            cout << "BBA Semester 2 Fee = Rs. 50000";
            break;
        case 3:
            cout << "BBA Semester 3 Fee = Rs. 50000";
            break;
        default:
            cout << "Invalid semester";
        }
        break;

    case 3:
        cout << "\n1. Semester 1";
        cout << "\n2. Semester 2";
        cout << "\n3. Semester 3";

        cout << "\nEnter semester: ";
        cin >> semester;

        switch (semester)
        {
        case 1:
            cout << "Engineering Semester 1 Fee = Rs. 70000";
            break;
        case 2:
            cout << "Engineering Semester 2 Fee = Rs. 70000";
            break;
        case 3:
            cout << "Engineering Semester 3 Fee = Rs. 70000";
            break;
        default:
            cout << "Invalid semester";
        }
        break;

    default:
        cout << "Invalid program";
    }

    return 0;
}