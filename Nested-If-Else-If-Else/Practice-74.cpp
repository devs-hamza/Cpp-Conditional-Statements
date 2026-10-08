//Check Exam Eligibility
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter your attendence percentage : ";
	int per;
	cin >> per; 

	if (per >= 75)
	{
		cout << "Enter your marks percentage : ";
		int percent;
		cin >> percent;
		if (percent >= 40 )
		{
			cout << "You are eligible for exam";
		}
		else
		{
			cout << "You are not eligible for exam";
		}
	}
	else
	{
		cout << "You are not eligible for exam";
	}
	return 0;
}