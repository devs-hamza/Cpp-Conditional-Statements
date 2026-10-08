// Vehicle Showroom System

#include <iostream>
using namespace std;

int main()
{
    int vehicle, model;

    cout << "===== Vehicle Showroom =====";
    cout << "\n1. Car";
    cout << "\n2. Bike";

    cout << "\nEnter vehicle type: ";
    cin >> vehicle;

    switch (vehicle)
    {
    case 1:
        cout << "\n1. Toyota";
        cout << "\n2. Honda";
        cout << "\n3. Suzuki";

        cout << "\nEnter car brand: ";
        cin >> model;

        switch (model)
        {
        case 1:
            cout << "Toyota selected";
            break;
        case 2:
            cout << "Honda selected";
            break;
        case 3:
            cout << "Suzuki selected";
            break;
        default:
            cout << "Invalid choice";
        }
        break;

    case 2:
        cout << "\n1. Honda";
        cout << "\n2. Yamaha";
        cout << "\n3. Suzuki";

        cout << "\nEnter bike brand: ";
        cin >> model;

        switch (model)
        {
        case 1:
            cout << "Honda bike selected";
            break;
        case 2:
            cout << "Yamaha bike selected";
            break;
        case 3:
            cout << "Suzuki bike selected";
            break;
        default:
            cout << "Invalid choice";
        }
        break;

    default:
        cout << "Invalid vehicle type";
    }

    return 0;
}