#include <iostream>
using namespace std;

int main()
{
	int rows;

	cout << "Please enter a number between 1-10" << endl;
	cin >> rows;

	for (int i = 0; i <= rows; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}