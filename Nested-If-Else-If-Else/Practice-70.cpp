// Check Whether a Year is a Leap Year
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter total days of the year : ";
    int year;
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "Leap Year";
            }
            else
            {
                cout << "Not a Leap Year";
            }
        }
        else
        {
            cout << "Leap Year";
        }
    }
    else
    {
        cout << "Not a Leap Year";
    }
    return 0;
}