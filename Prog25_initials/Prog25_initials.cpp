#include <iostream>
using namespace std;

int main()
{
	char firstMidSurArr[32] = "";
	cout << "Please enter your first name inital followed by your middle name initial followed by your full last name." << endl;
	cin.get(firstMidSurArr, 32);
	cout << endl;

	for (int i = 0; i < size(firstMidSurArr); i++)
	{
		cout << firstMidSurArr[i];
		if (firstMidSurArr[i] == ' ')
		{
			cout << endl;
		}
	}
}