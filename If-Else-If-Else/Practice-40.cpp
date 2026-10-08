// Calculate Average and Check Pass or Fail
#include <iostream>
using namespace std;

int main()
{
    float a, b, c, average;

    cout << "Enter marks of three subjects: ";
    cin >> a >> b >> c;

    if (a < 0 || a > 100 || b < 0 || b > 100 || c < 0 || c > 100)
        cout << "Invalid marks";
    else
    {
        average = (a + b + c) / 3;

        cout << "Average = " << average << endl;

        if (average >= 50)
            cout << "Pass";
        else
            cout << "Fail";
    }

    return 0;
}