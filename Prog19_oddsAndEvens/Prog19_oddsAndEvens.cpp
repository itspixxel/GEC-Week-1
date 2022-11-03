#include <iostream>
using namespace std;
void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);
bool isOddorEven(int num);

int main()
{
	int number;
	int oddsTotal = 0;
	int evensTotal = 0;
	int evens = 0;
	int odds = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter value " << i+1 << " of 10" << endl;
		cin >> number;
		if (isOddorEven(number))
		{
			evensTotal += number;
			evens++;
			cout << "This value is even" << endl;
		}
		else
		{
			oddsTotal += number;
			odds++;
			cout << "This value is odd" << endl;
		}
	}
	outputResults(odds, oddsTotal, evens, evensTotal);
}

bool isOddorEven(int num)
{
	if (num % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
	cout << "You entered " << numOfOdd << " odd values.\n Adding up to a total of " << oddTotal << endl;
	cout << "You entered " << numOfEven << " even values.\n Adding up to a total of " << evenTotal << endl;
}