// Classify Attendance Percentage
#include <iostream>
using namespace std;

int main()
{
    int attendance;

    cout << "Enter attendance percentage: ";
    cin >> attendance;

    if (attendance < 0 || attendance > 100)
        cout << "Invalid Attendance";
    else if (attendance >= 90)
        cout << "Excellent Attendance";
    else if (attendance >= 75)
        cout << "Good Attendance";
    else if (attendance >= 60)
        cout << "Average Attendance";
    else
        cout << "Poor Attendance";

    return 0;
}