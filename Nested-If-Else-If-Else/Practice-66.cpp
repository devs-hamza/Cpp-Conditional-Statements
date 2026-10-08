//Check Number Range and Even/Odd
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a number between 1 to 100 : ";
	int num;
	cin >> num;
	if (num >= 0 && num <= 100)
	{
		if (num % 2 == 0)
		{
			cout << "Entered number is even";
		}
		else
		{
			cout << "Entered number is odd";
		}
	}
	else
	{
		cout << "Number isn't from 1 to 100 ";
	}
	return 0;
}