#include <iostream>
using namespace std;

int main()
{
	int playerLife = 100;
	int qCount = 1;
	int userInput;

	cout << "Current Health: " << playerLife;

	do
	{
		cout << "Question " << qCount << ": How much damage shall I deal?\n";
		cin >> userInput;
		playerLife -= ""
		cout << "Current Health: " << playerLife;
		qCount++;
	} while (playerLife > 0);
}