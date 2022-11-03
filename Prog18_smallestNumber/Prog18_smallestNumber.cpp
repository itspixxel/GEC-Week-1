#include <iostream>
using namespace std;
void smallestNumber(int a, int b);
float timesTen(int a);
void overThree(int a);


int main()
{
	int a;
	int b;

	for (int i = 0; i < 3; i++)
	{
		cout << "Please enter an integer" << endl;
		cin >> a;
		cout << "Please enter another integer" << endl;
		cin >> b;
		smallestNumber(a, b);
		cout << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "Please enter an integer (it's gonna be worth it)" << endl;
		cin >> a;
		float temp1 = timesTen(a);
		overThree(temp1);
	}
}

void smallestNumber(int a, int b)
{
	if (a > b)
	{
		cout << a << " is greater than " << b << endl;
	}
	else if (a < b)
	{
		cout << a << " is less than " << b << endl;
	}
	else
	{
		cout << a << " is equal to " << b << endl;
	}
}

float timesTen(int a)
{
	int mResult = a * 10;
	cout << a << " multiplied by 10 is " << mResult << endl;
	return mResult;
}

void overThree(int a)
{
	cout << a << " divided by 3 is " << a / 3 << endl;
}