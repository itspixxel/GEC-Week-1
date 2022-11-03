#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int rows;

	cout << "Please enter a number between 1-10" << endl;
	cin >> rows;

	if (rows >= 1 && rows <= 10)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Invalid input." << endl;
	}

	
}