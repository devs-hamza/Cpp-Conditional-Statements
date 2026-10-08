//Restaurant Food Selection System
#include <iostream>
using namespace std;
int main()
{
	cout << "======WELCOME======\n";
	cout << "Choose: \n";
	cout << "1. Vegetarian\n2. Non-Vegetarian\n3. Drinks\n Choice = \t";
	int choice;
	cin >> choice;


	switch (choice)
	{
	case 1:
	{
		cout << "1. Paneer tika - 550rs\n2. Vegetable seekh kabab - 400rs\n3. Hara bhara kabab - 250rs\nChoice = \t";
		int vegchoice;
		cin >> vegchoice;
		switch (vegchoice)
		{
		case 1:
		{
			cout << "You ordered Paneer tika - It's price is 550rs";
		}
		break;
		case 2:
		{
			cout << "You ordered Vegetable seekh kabab - It's price is 400rs";
		}
		break;
		case 3:
		{
			cout << "You ordered Hara bhara kabab - It's price is 250rs";
		}
		break;
		default:
		{
			cout << "Error";
		}
		break;
		}
	}
	break;

	case 2:
	{
		cout << "1. Chicken curry - 300rs\n2. Chicken fry - 250rs\n3. Fish fry - 400rs\nChoice = \t";
		int nonvegchoice;
		cin >> nonvegchoice;

		switch (nonvegchoice)
		{
		case 1:
		{
			cout << "You ordered Chicken curry - It's price is 300rs";
		}
		break;
		case 2:
		{
			cout << "You ordered Chicken fry - It's price is 250rs";
		}
		break;
		case 3:
		{
			cout << "You ordered Fish fry - It's price is 400rs";
		}
		break;
		default:
		{
			cout << "Error";
		}
		break;
		}
	}
	break;

	case 3:
	{
		cout << "1. Lemonand - 200rs\n2. Strawberry milkshake - 250rs\n3. Berry cocktail - 300rs\n\Choice = \t";
		int drinkchoice;
		cin >> drinkchoice;

		switch (drinkchoice)
		{
		case 1:
		{
			cout << "You ordered Lemonad - It's price is 200rs";
		}
		break;
		case 2:
		{
			cout << "You ordered Strawberry milkshake - It's price is 250rs";
		}
		break;
		case 3:
		{
			cout << "You ordered Berry cocktail - It's price is 300rs";
		}
		break;
		default:
		{
			cout << "Error";
		}
		break;
		}
	}
	break;

	default:
	{
		cout << "Error";
	}
	break;
	}
	return 0;
}