// Check Pass or Fail
#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50 && marks <= 100)
        cout << "Pass";
    else if (marks >= 0)
        cout << "Fail";
    else
        cout << "Invalid marks";

    return 0;
}