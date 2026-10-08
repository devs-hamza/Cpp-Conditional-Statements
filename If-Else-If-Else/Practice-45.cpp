// Classify BMI
#include <iostream>
using namespace std;

int main()
{
    float weight, height, bmi;

    cout << "Enter weight in kg: ";
    cin >> weight;

    cout << "Enter height in meters: ";
    cin >> height;

    if (weight <= 0 || height <= 0)
        cout << "Invalid Input";
    else
    {
        bmi = weight / (height * height);

        cout << "BMI = " << bmi << endl;

        if (bmi < 18.5)
            cout << "Underweight";
        else if (bmi < 25)
            cout << "Normal Weight";
        else if (bmi < 30)
            cout << "Overweight";
        else
            cout << "Obese";
    }

    return 0;
}