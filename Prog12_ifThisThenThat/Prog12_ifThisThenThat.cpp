#include <iostream>
using namespace std;

int main()
{
	// Option vars
	int rain = 1;
	int snow = 2;

	// Input vars
	int userInput;
	int temperature;
	
	// Question 1
	cout << "Please tell me if it's raining with '1' or snowing with '2'" << endl;
	cin >> userInput;

	// Question 2
	cout << "What's the temperature?" << endl;
	cin >> temperature;

	// Logic
	if (userInput == 1)
	{
		if (temperature >= 15)
		{
			cout << "Please wear a light raincoat." << endl;
		}
		else
		{
			cout << "Please wear a thick coat." << endl;
		}
	}
	else if (userInput == 2)
	{
		if (temperature >= 5)
		{
			cout << "Please wear something warm. It's kinda cold outside" << endl;
		}
		else if (temperature <= 5)
		{
			cout << "Please wrap yourself up well, it's pretty chilly out there!" << endl;
		}
	}
	else
	{
		cout << "Have a nice day! It's neither raining nor snowing." << endl;
	}
}