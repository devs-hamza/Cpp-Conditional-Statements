//Check if a Positive Number is Even or Odd
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a positive number : ";
	int num;
	cin >> num;
	if (num > 0)
	{ 
		int num1;
		num1 = num % 2;
		if (num1 == 0)
		{
			cout << "The entered number is even";
		}
		else if (num1 == 1)
		{
			cout << "The entered number is odd";
		}
		else
		{
			cout << "Error";
		}
	}
	else if (num < 0)
	{
		cout << "Entered number is not positive";
	}
	else
	{
		cout << "Error";
	}
	return 0;
}