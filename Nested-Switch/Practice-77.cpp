// University Program and Semester Selection

#include <iostream>
using namespace std;

int main()
{
    int program, semester;

    cout << "===== University Programs =====";
    cout << "\n1. BSCS";
    cout << "\n2. BBA";
    cout << "\n3. Engineering";

    cout << "\nEnter program: ";
    cin >> program;

    switch (program)
    {
    case 1:
        cout << "\nBSCS";
        cout << "\n1. Semester 1";
        cout << "\n2. Semester 2";
        cout << "\n3. Semester 3";

        cout << "\nEnter semester: ";
        cin >> semester;

        switch (semester)
        {
        case 1:
            cout << "BSCS - Semester 1";
            break;
        case 2:
            cout << "BSCS - Semester 2";
            break;
        case 3:
            cout << "BSCS - Semester 3";
            break;
        default:
            cout << "Invalid semester";
        }
        break;

    case 2:
        cout << "\nBBA";
        cout << "\n1. Semester 1";
        cout << "\n2. Semester 2";
        cout << "\n3. Semester 3";

        cout << "\nEnter semester: ";
        cin >> semester;

        switch (semester)
        {
        case 1:
            cout << "BBA - Semester 1";
            break;
        case 2:
            cout << "BBA - Semester 2";
            break;
        case 3:
            cout << "BBA - Semester 3";
            break;
        default:
            cout << "Invalid semester";
        }
        break;

    case 3:
        cout << "\nEngineering";
        cout << "\n1. Semester 1";
        cout << "\n2. Semester 2";
        cout << "\n3. Semester 3";

        cout << "\nEnter semester: ";
        cin >> semester;

        switch (semester)
        {
        case 1:
            cout << "Engineering - Semester 1";
            break;
        case 2:
            cout << "Engineering - Semester 2";
            break;
        case 3:
            cout << "Engineering - Semester 3";
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