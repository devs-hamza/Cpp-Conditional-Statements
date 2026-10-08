//Calculate Electricity Bill
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter your electricity units :  ";
	int units;
	cin >> units;
	int price;
	if (units >= 0)
	{
		if (units >= 0 && units <= 100)
		{
			price = units * 45;
			cout << "Your bill is " << price;
		}
		else if (units >= 101 && units <= 200)
		{
			price = units * 60;
			cout << "Your bill is " << price;
		}
		else
		{
			price = units * 80;
			cout << "Your bill is " << price;
		}
	}
	else
	{
		cout << "Error";
	}
	return 0;
}