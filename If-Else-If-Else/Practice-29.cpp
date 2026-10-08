// Classify Electricity Usage
#include <iostream>
using namespace std;

int main()
{
    int units;

    cout << "Enter electricity units: ";
    cin >> units;

    if (units <= 100)
        cout << "Low Usage";
    else if (units <= 300)
        cout << "Moderate Usage";
    else if (units <= 500)
        cout << "High Usage";
    else
        cout << "Very High Usage";

    return 0;
}