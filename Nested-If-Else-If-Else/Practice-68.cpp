//Check Driving License Eligibility
#include <iostream>
using namespace std;
int main()
{
	cout << "Have u passed your test? \n1. Yes\n2. No";
	int test;
	cin >> test;
	
	if (test == 1)
	{
		cout << "Is your age above 18? \n1. Yes \n2. No";
		int age;
		cin >> age;
		if (age == 1)
		{
			cout << "You are eligible";
		}
		else
		{
			cout << "You are not eligible";
		}
	}
	else
	{
		cout << "You have to pass the test";
	}
	return 0;
}