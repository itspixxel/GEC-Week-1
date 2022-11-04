#include <iostream>
using namespace std;

int main()
{
	int playerLife = 100, qCount = 1, userInput;

	cout << "Current Health: " << playerLife << endl;

	do
	{
		cout << "Question " << qCount << ": How much damage shall I deal?\n";
		cin >> userInput;
		playerLife -= userInput;
		cout << "Current Health: " << playerLife << endl;
		qCount++;
	} while (playerLife > 0);
}