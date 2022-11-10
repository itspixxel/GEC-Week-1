#include <iostream>
using namespace std;

int main()
{
	const int MAX_ITEMS = 4;
	int numItems = 0;
	int userChoice;

	string inventory[MAX_ITEMS];
	inventory[numItems++] = "Flashlight";
	inventory[numItems++] = "Shotgun";
	inventory[numItems++] = "Bandages";
	inventory[numItems++] = "Blue Cheese";

	cout << "You see Garlic lying on the floor.\nYour inventory is full.\n\nWould you like to swap it out for another item?\n";
	for (int i = 0; i < size(inventory); i++)
	{
		cout << i+1 << ". " << inventory[i] << endl;
	}
	cout << "\nPlease enter the number for the item you'd like to swap out Garlic for." << endl;
	cin >> userChoice;

	if (userChoice >= 1 && userChoice <= MAX_ITEMS)
	{
		cout << "\nYou swapped out your " << inventory[userChoice - 1] << " for the Garlic." << endl;
		inventory[userChoice - 1] = "Garlic";
		for (int i = 0; i < size(inventory); i++)
		{
			cout << i + 1 << ". " << inventory[i] << endl;
		}
	}
	else
	{
		cout << "Invalid input." << endl;
	}
}