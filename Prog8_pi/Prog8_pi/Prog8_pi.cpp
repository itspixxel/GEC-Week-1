#include <iostream>
using namespace std;

int main()
{
	const float pi = 3.14159;
	float radius = 25.0f;
	float area = pi * radius * radius;
	
	cout << "The area of a circle of radius " << radius << " is " << area << endl;

	return 0;
}