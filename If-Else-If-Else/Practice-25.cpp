// Classify Speed
#include <iostream>
using namespace std;

int main()
{
    int speed;

    cout << "Enter speed: ";
    cin >> speed;

    if (speed < 40)
        cout << "Slow";
    else if (speed <= 80)
        cout << "Normal";
    else if (speed <= 120)
        cout << "Fast";
    else
        cout << "Very Fast";

    return 0;
}