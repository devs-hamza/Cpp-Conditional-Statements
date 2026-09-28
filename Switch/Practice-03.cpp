//Simple Calculator Using Switch
#include <iostream>
using namespace std;

int main()
{
    float num1, num2;

    cout << "Enter number 1 :  ";
    cin >> num1;

    cout << "Enter number 2 :  ";
    cin >> num2;

    cout << "Enter oprator(+,-,/,*) :  ";
    char oprator;
    cin >> oprator;

    switch(oprator)
    {
    case '+':
        cout << "Sum = " << num1 + num2;
        break;
    case '-':
        cout << "Subtraction = " << num1 - num2;
        break;
    case '/':
        if (num2 == 0)
            cout << "Error";
        else
            cout << "Division = " << num1 / num2;
        break;
    case '*':
        cout << "Multiplication = " << num1 * num2;
        break;
    }

    return 0;
}