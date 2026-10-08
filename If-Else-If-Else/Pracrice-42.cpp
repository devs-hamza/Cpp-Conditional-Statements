// Count Number of Digits
#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 0 && num <= 9)
        cout << "Number of digits = 1";
    else if (num >= 10 && num <= 99)
        cout << "Number of digits = 2";
    else if (num >= 100 && num <= 999)
        cout << "Number of digits = 3";
    else if (num >= 1000 && num <= 9999)
        cout << "Number of digits = 4";
    else
        cout << "Number has 5 or more digits";

    return 0;
}