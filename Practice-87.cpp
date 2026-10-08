// Electronics Shop System

#include <iostream>
using namespace std;

int main()
{
    int category, brand;

    cout << "===== Electronics Shop =====";
    cout << "\n1. Mobile";
    cout << "\n2. Laptop";
    cout << "\n3. Tablet";

    cout << "\nEnter category: ";
    cin >> category;

    switch (category)
    {
    case 1:
        cout << "\n1. Samsung";
        cout << "\n2. Apple";
        cout << "\n3. Xiaomi";

        cout << "\nEnter brand: ";
        cin >> brand;

        switch (brand)
        {
        case 1:
            cout << "Samsung Mobile selected";
            break;
        case 2:
            cout << "Apple Mobile selected";
            break;
        case 3:
            cout << "Xiaomi Mobile selected";
            break;
        default:
            cout << "Invalid brand";
        }
        break;

    case 2:
        cout << "\n1. Dell";
        cout << "\n2. HP";
        cout << "\n3. Lenovo";

        cout << "\nEnter brand: ";
        cin >> brand;

        switch (brand)
        {
        case 1:
            cout << "Dell Laptop selected";
            break;
        case 2:
            cout << "HP Laptop selected";
            break;
        case 3:
            cout << "Lenovo Laptop selected";
            break;
        default:
            cout << "Invalid brand";
        }
        break;

    case 3:
        cout << "\n1. Samsung";
        cout << "\n2. Apple";
        cout << "\n3. Lenovo";

        cout << "\nEnter brand: ";
        cin >> brand;

        switch (brand)
        {
        case 1:
            cout << "Samsung Tablet selected";
            break;
        case 2:
            cout << "Apple Tablet selected";
            break;
        case 3:
            cout << "Lenovo Tablet selected";
            break;
        default:
            cout << "Invalid brand";
        }
        break;

    default:
        cout << "Invalid category";
    }

    return 0;
}