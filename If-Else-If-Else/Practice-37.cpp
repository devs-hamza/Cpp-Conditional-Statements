// Validate Username and Password
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username, password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == "admin" && password == "12345")
        cout << "Login Successful";
    else
        cout << "Invalid Username or Password";

    return 0;
}