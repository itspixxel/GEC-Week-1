#include <iostream>
using namespace std;

int main()
{
	typedef int health;

	enum Weapons
	{
		SWORD = 1,
		DAGGER,
		MACE,
		TWIN_SWORDS,
		SAMURAI,
		WIZARD_STAFF,
		FIRE_POTION,
		ICE_BLADE,
		SMALL_KNIFE
	};

	health Health = 1300;
	Weapons Weapon = SAMURAI;

	cout << "My current health is " << Health << endl;
	cout << "And the ID of my weapon of choice is " << Weapon << endl;

	return 0;
}