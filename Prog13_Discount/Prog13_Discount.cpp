#include <iostream>
using namespace std;

int main()
{
	char userStatus;
	int userChoice;

	cout << "Please tell me your status with 's' for Student, 't' for Teacher, or 'o' for Other" << endl;
	cin >> userStatus;

	cout << "Which game would you like?" << endl;
	cin >> userChoice;

	if (userStatus == 's' || userStatus == 't' && userChoice == 1)
	{
		cout << "You are eligible for a 20% discount!" << endl;
	}
	else if (userStatus == 's' || userStatus == 't' && userChoice == 2)
	{
		cout << "You are eligible for a 10% discount!" << endl;
	}
	else 
	{
		cout << "You are not entitled to a discount." << endl;
	}
}