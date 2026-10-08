// Calculate Shopping Discount
#include <iostream>
using namespace std;
int main()
{
	cout << "Is your bill more than 10k?\n1. Yes\n2. No\n";
	int bill;
	cin >> bill;
	if (bill == 1)
	{
		cout << "\nDo you have our membership?\n1. Yes\n2. No";
		int memship;
		cin >> memship;
		if (memship == 1)
		{
			cout << "You are eligible for discount";
		}
		else
		{
			cout << "You are not eligible for discount";
		}
	}
	else
	{
		cout << "You are not eligible for discount";
	}
	return 0;
}
