#include <iostream>
using namespace std;

int playerHealth = 1000;
int enemyHealth = 2000;
bool playing = true;

void attackChoice(int choice);
bool playState();

int main()
{
	int userChoice;

	do
	{
		cout << "A troll stands tall in front of you with teeth as sharp as knives and drool flowing down its chin. It has got a big club in its hand over its shoulder and it's stomping menacingly towards you.\n\nYou have three options of attack:\n 1. Use Sword (Your sharp and trusty blade forged by your village blacksmith)\n 2. Use Magic (Arcane arts you've practiced and perfected over the years)\n 3. Use Axe (An old axe you've been chopping wood and making a living with for years)\n\nChoose wisely." << endl;
		cin >> userChoice;

		attackChoice(userChoice);
		playState();
	} while (playing == true);

	return 0;
}

void attackChoice(int choice)
{
	const int sword_damage = 300, magic_damage = 650, axe_damage = 150, troll_club = 350, troll_magic = 50, troll_axe = 100;

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

			cout << "You successfully landed a sword slash on the troll(300 PP) but it struck you back with its club(350 PP)!" << endl;
			cout << "Your health: " << playerHealth << endl;
			cout << "Troll's health: " << enemyHealth << endl;
			break;

		case 2:
			enemyHealth -= magic_damage;
			playerHealth -= troll_magic;

			if (playerHealth < 0)
			{
				playerHealth = 0;
			}
			if (enemyHealth < 0)
			{
				enemyHealth = 0;
			}

			cout << "Your bright ball of magic(650 PP) hit the troll and took a big chunk of its health! The troll tried to use its magic but... it's not smart enough, so it just made you fall and hurt your butt(50 HP)" << endl;
			cout << "Your health: " << playerHealth << endl;
			cout << "Troll's health: " << enemyHealth << endl;
			break;

		case 3:
			enemyHealth -= axe_damage;
			playerHealth -= troll_axe;

			if (playerHealth < 0)
			{
				playerHealth = 0;
			}
			if (enemyHealth < 0)
			{
				enemyHealth = 0;
			}

			cout << "You pulled out your old axe(100 PP) and swung it at the Troll. It got back at you with its own axe(100 PP)" << endl;
			cout << "Your health: " << playerHealth << endl;
			cout << "Troll's health: " << enemyHealth << endl;
			break;
		
		default:
			cout << "Invalid input, please choose a value from 1-3." << endl;
			break;
	}
}

bool playState()
{
	char playAgain;

	if (enemyHealth <= 0)
	{
		cout << "Congratulations! you killed the troll and made it out alive! Your village praised you for your bravery and dubbed you \"The Knight of the Village\"\n\n\nWould you like to play again? (y/n)" << endl;
		cin >> playAgain;

		if (playAgain == 'y')
		{
			playerHealth = 1000;
			enemyHealth = 2000;
			return playing = true;
		}
		else 
		{
			cout << "Goodbye" << endl;
			return playing = false;
		}
	}
	
	if (playerHealth <= 0)
	{
		cout << "The troll overpowered you and ate you for dinner, you were forgotten by the village and no one came looking for you...\n\n\nWould you like to try again?(y/n) Maybe things will go differently this time..." << endl;
		cin >> playAgain;

		if (playAgain == 'y')
		{
			playerHealth = 1000;
			enemyHealth = 2000;
			return playing = true;
		}
		else
		{
			cout << "Goodbye" << endl;
			return playing = false;
		}
	}
}