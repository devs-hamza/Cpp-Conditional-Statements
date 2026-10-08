// Game Selection System

#include <iostream>
using namespace std;

int main()
{
    int category, game;

    cout << "===== Game Selection =====";
    cout << "\n1. Action";
    cout << "\n2. Racing";
    cout << "\n3. Sports";

    cout << "\nEnter category: ";
    cin >> category;

    switch (category)
    {
    case 1:
        cout << "\n1. GTA";
        cout << "\n2. PUBG";

        cout << "\nEnter game: ";
        cin >> game;

        switch (game)
        {
        case 1:
            cout << "GTA selected";
            break;
        case 2:
            cout << "PUBG selected";
            break;
        default:
            cout << "Invalid game";
        }
        break;

    case 2:
        cout << "\n1. Need for Speed";
        cout << "\n2. Asphalt";

        cout << "\nEnter game: ";
        cin >> game;

        switch (game)
        {
        case 1:
            cout << "Need for Speed selected";
            break;
        case 2:
            cout << "Asphalt selected";
            break;
        default:
            cout << "Invalid game";
        }
        break;

    case 3:
        cout << "\n1. FIFA";
        cout << "\n2. Cricket";

        cout << "\nEnter game: ";
        cin >> game;

        switch (game)
        {
        case 1:
            cout << "FIFA selected";
            break;
        case 2:
            cout << "Cricket selected";
            break;
        default:
            cout << "Invalid game";
        }
        break;

    default:
        cout << "Invalid category";
    }

    return 0;
}