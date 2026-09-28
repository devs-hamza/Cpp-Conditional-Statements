//Check Voting Eligibility
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter your age : ";
	int age;
	cin >> age;

	if (age >= 18)
	{
		cout << "Are you citizen (YES/NO) : ";
		string answer;
		cin >> answer;
		if (answer == "YES" || answer == "yes" || answer == "Yes")
		{
			cout << "You are eligible for voting";
		}
		else if (answer == "NO" || answer == "no" || answer == "No")
		{
			cout << "You are not eligible";
		}
		else
		{
			cout << "Error";
		}
	}
	else if (age < 18)
	{
		cout << "You are not eligible for voting";
	}
	else
	{
		cout << "Error";
	}
	return 0;
}