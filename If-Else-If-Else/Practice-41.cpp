// Calculate Salary Bonus
#include <iostream>
using namespace std;

int main()
{
    float salary, bonus;

    cout << "Enter salary: ";
    cin >> salary;

    if (salary < 0)
        cout << "Invalid salary";
    else if (salary >= 100000)
    {
        bonus = salary * 0.10;
        cout << "Bonus = " << bonus;
    }
    else if (salary >= 50000)
    {
        bonus = salary * 0.07;
        cout << "Bonus = " << bonus;
    }
    else
    {
        bonus = salary * 0.05;
        cout << "Bonus = " << bonus;
    }

    return 0;
}