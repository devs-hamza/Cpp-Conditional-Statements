// Check Vowel, Consonant, Digit or Special Character
#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= '0' && ch <= '9')
        cout << "Digit";
    else if (ch == 'A' || ch == 'E' || ch == 'I' ||
        ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u')
        cout << "Vowel";
    else if ((ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z'))
        cout << "Consonant";
    else
        cout << "Special Character";

    return 0;
}