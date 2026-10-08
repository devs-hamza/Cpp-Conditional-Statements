// Library Book Selection System

#include <iostream>
using namespace std;

int main()
{
    int category, book;

    cout << "===== Library =====";
    cout << "\n1. Fiction";
    cout << "\n2. Science";
    cout << "\n3. Computer";

    cout << "\nEnter category: ";
    cin >> category;

    switch (category)
    {
    case 1:
        cout << "\n1. Harry Potter";
        cout << "\n2. The Hobbit";

        cout << "\nEnter book: ";
        cin >> book;

        switch (book)
        {
        case 1:
            cout << "Harry Potter selected";
            break;
        case 2:
            cout << "The Hobbit selected";
            break;
        default:
            cout << "Invalid book";
        }
        break;

    case 2:
        cout << "\n1. Physics";
        cout << "\n2. Chemistry";

        cout << "\nEnter book: ";
        cin >> book;

        switch (book)
        {
        case 1:
            cout << "Physics selected";
            break;
        case 2:
            cout << "Chemistry selected";
            break;
        default:
            cout << "Invalid book";
        }
        break;

    case 3:
        cout << "\n1. C++ Programming";
        cout << "\n2. Java Programming";

        cout << "\nEnter book: ";
        cin >> book;

        switch (book)
        {
        case 1:
            cout << "C++ Programming selected";
            break;
        case 2:
            cout << "Java Programming selected";
            break;
        default:
            cout << "Invalid book";
        }
        break;

    default:
        cout << "Invalid category";
    }

    return 0;
}