// Menu-Driven Calculator
#include <iostream>
using namespace std;

int main()
{
    int choice;
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
        cout << "Result = " << num1 + num2;
        break;
    case 2:
        cout << "Result = " << num1 - num2;
        break;
    case 3:
        cout << "Result = " << num1 * num2;
        break;
    case 4:
        if (num2 != 0)
            cout << "Result = " << num1 / num2;
        else
            cout << "Cannot divide by zero";
        break;
    default:
        cout << "Invalid choice";
    }

    return 0;
}