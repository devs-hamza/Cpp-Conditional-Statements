//Find the Smallest of Three Numbers
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the 1st number : ";
    int num1;
    cin >> num1;
    cout << "Enter the 2nd number : ";
    int num2;
    cin >> num2;
    cout << "Enter the 3rd number : ";
    int num3;
    cin >> num3;

    if (num1 < num2)
    {
        if (num1 < num3)
        {
            cout << "Num 1 is Smallest";
        }
        else
        {
            cout << "Num 3 is Smallest";
        }
    }
    else
    {
        if (num2 < num3)
        {
            cout << "Num 2 is Smallest";
        }
        else
        {
            cout << "Num 3 is Smallest";
        }
    }
    return 0;
}