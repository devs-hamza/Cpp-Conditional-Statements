//Classify Temperature
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the temprature : ";
	int tem;
	cin >> tem;
	if (tem > 0)
	{
		if (tem >= 0 && tem <= 20)
		{
			cout << "It's cold";
		}
		else if (tem >= 21 && tem <= 30)
		{
			cout << "It's normal";
		}
		else if (tem >= 31 && tem <= 50)
		{
			cout << "It's Hot";
		}
		else
		{
			cout << "It's very hot";
		}
	}
	else
	{
		cout << "It's below freezing point";
	}
	return 0;
}