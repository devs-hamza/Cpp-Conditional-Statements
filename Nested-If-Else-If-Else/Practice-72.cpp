// Compare Two Numbers
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the 1st number : ";
	int num1;
	cin >> num1;
	cout << "Enter the 2nd number : ";
	int num2;
	cin >> num2;
	if (num1 == num2)
	{
		cout << "Both numbers are equal";
	}
	else
	{
		if (num1 > num2)
		{
			cout << "Number 1 is greater ";
		}
		else
		{
			cout << "Number 2 is greater";
		}
	}
	return 0;
}