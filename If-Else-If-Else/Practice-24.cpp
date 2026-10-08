// Display Roman Numeral According to Number
#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number from 1 to 10: ";
    cin >> num;

    if (num == 1)
        cout << "I";
    else if (num == 2)
        cout << "II";
    else if (num == 3)
        cout << "III";
    else if (num == 4)
        cout << "IV";
    else if (num == 5)
        cout << "V";
    else if (num == 6)
        cout << "VI";
    else if (num == 7)
        cout << "VII";
    else if (num == 8)
        cout << "VIII";
    else if (num == 9)
        cout << "IX";
    else if (num == 10)
        cout << "X";
    else
        cout << "Invalid number";

    return 0;
}