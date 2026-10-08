// Check Voting Eligibility
#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
        cout << "Eligible for voting";
    else if (age >= 0)
        cout << "Not eligible for voting";
    else
        cout << "Invalid age";

    return 0;
}