//Determine Pass Status and Grade
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter your percentage : ";
	int per;
	cin >> per;

	if (per >= 40 && per<=100)
	{
		cout << "You are pass\n";
		if (per >= 40 && per <= 60)
		{
			cout << "Your grade is C";
		}
		else if (per > 60 && per <= 80)
		{
			cout << "Your grade is B";
		}
		else if (per > 80 && per <= 85)
		{
			cout << "Your grade is A";
		}
		else if (per > 85 && per <= 100)
		{
			cout << "Your grade is A+";
		}
		else
		{
			cout << "Error";
		}
	}
	else if (per < 40 && per >= 0)
	{
		cout << "You are fail";
	}
	else
	{
		cout << "Error";
	}
	return 0;
}