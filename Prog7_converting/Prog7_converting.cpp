#include <iostream>
using namespace std;

int main()
{
	float fahrenheit = 95.0f;
	float celcius = (fahrenheit - 32) * 0.5556;

	cout << fahrenheit << "F is equal to " << celcius << " C." << endl;

	return 0;
}