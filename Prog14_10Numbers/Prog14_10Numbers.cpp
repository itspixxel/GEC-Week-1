#include <iostream>
using namespace std;

int main() 
{
	int inputNum = 0;
	int total = 0;
	float mean = 0.0f;
	int numCount = 2;

	cout << "Enter a number" << endl;
	cin >> inputNum;
	total += inputNum;

	cout << endl;

	cout << "Enter a number" << endl;
	cin >> inputNum;
	total += inputNum;

	mean = (float)total / numCount;

	cout << "Sum: " << total << endl;
	cout << "Mean: " << mean << endl;

	do
	{
		cout << endl;

		cout << "Enter a number" << endl;
		cin >> inputNum;

		if (inputNum != 0)
		{
			numCount++;
			total += inputNum;
			mean = (float)total / numCount;

			cout << endl;

			cout << "Sum: " << total << endl;
			cout << "Mean: " << mean << endl;
		}
	} while (inputNum != 0);
	cout << "Exiting..." << endl;
}