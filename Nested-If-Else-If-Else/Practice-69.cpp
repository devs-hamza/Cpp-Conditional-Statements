//Validate and Classify a Triangle
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the 1st angle : ";
	float angle1;
	cin >> angle1;
	cout << "Enter the 2nd angle : ";
	float angle2;
	cin >> angle2;
	cout << "Enter the 3rd angle : ";
	float angle3;
	cin >> angle3;

	int sum;
	sum = angle1 + angle2 + angle3;
	if (sum == 180)
	{
		if (angle1 == angle2 && angle2 == angle3)
		{
			cout << "It's an Equilateral triangle";
		}
		else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3)
		{
			cout << "It's an Isosceles triangle";
		}
		else
		{
			cout << "It's a triangle";
		}
	}
	else
	{
		cout << "It's not a triangle";
	}
	return 0;

}