#include <iostream>
using namespace std;

int playerHealth = 1000;
int enemyHealth = 2000;

void attackChoice(int choice);
bool playState();

int main()
{
	int userChoice;

	do
	{
		cout << "A troll stands tall in front of you with teeth as sharp as knives and drool flowing down its mouth. It has got a big club in its hand over its shoulder and it's stomping menacingly towards you.\n\nYou have three options of attack:\n 1. Use Sword (Your sharp and trusty blade forged by your village blacksmith)\n 2. Use Magic (Arcane arts you've practiced and perfected over the years)\n 3. Use Axe (An old axe you've been chopping wood and making a living with for years)\n\nChoose wisely." << endl;
		cin >> userChoice;
	} while (playState());

	return 0;
}

void attackChoice(int choice)
{
	const int sword_damage = 300, magic_damage = 650, axe_damage = 450, troll_club = 350, troll_magic = 50, troll_axe = 100;

	switch (choice) 
	{
		case 1:
			enemyHealth -= sword_damage;
			playerHealth -= troll_club;

			if (playerHealth < 0)
			{
				playerHealth = 0;
			}
			if (enemyHealth < 0)
			{
				enemyHealth = 0;
			}

			cout << "You successfully landed a sword slash on the troll but it struck you back with its club!" << endl;
			cout << "Your health: " << playerHealth << endl;
			cout << "Troll's health: " << enemyHealth << endl;
			break;
	}
		

}

bool playState()
{
	if (playerHealth <= 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}