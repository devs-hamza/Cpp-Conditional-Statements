// Calculate Discount According to Purchase Amount
#include <iostream>
using namespace std;

int main()
{
    float amount, discount;

    cout << "Enter purchase amount: ";
    cin >> amount;

    if (amount < 0)
        cout << "Invalid Amount";
    else if (amount >= 10000)
    {
        discount = amount * 0.20;
        cout << "Discount = " << discount;
    }
    else if (amount >= 5000)
    {
        discount = amount * 0.10;
        cout << "Discount = " << discount;
    }
    else if (amount >= 2000)
    {
        discount = amount * 0.05;
        cout << "Discount = " << discount;
    }
    else
        cout << "No Discount";

    return 0;
}