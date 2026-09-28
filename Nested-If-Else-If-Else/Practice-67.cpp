//Simple Login System
#include <iostream>
using namespace std;
int main()
{
	string user, pass;
	user = "hamza1234";
	pass = "123Hamza123";
	cout << "Enter your user name : ";
	string username;
	cin >> username;
	if (username == user)
	{
		cout << "Enter your password : ";
		string password;
		cin >> password;
		if (password == pass)
		{
			cout << "Login successfully";
		}
		else
		{
			cout << "Your password isn't correct";
		}
	}
	else
	{
		cout << "Your username isn't correct";
	}
	return 0;
}