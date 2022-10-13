#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	int playerInput;

	cout << "Please choose your difficulty:\n1. I'm too young to die\n2. Hey, not too rough!\n3. Hurt me plenty.\n4. Ultra-Violence\n5. Nightmare...\n\nPlease enter a number 1-5..." << endl;

	cin >> playerInput;

	switch (playerInput)
	{
	case 1:
		cout << "Enemies do attack but you won't die! Well, unless you're just a baby." << endl;
		break;

	case 2:
		cout << "Enemies will attack often but even a novice like you can handle this, maybe..." << endl;
		break;

	case 3:
		cout << "Enemies can use power attacks and do significant damage." << endl;
		break;

	case 4:
		cout << "You might throw your control or whatever." << endl;
		break;

	case 5:
		cout << "You will die." << endl;
		break;

	default:
		cout << "Invalid input." << endl;
		break;
	}
}