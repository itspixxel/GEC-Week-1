#include <iostream>
using namespace std;
void inputDetails(int* n1, int* n2);
void outputDetails(int& integer1, int& integer2, int* pointer);

int main()
{
	int num1;
	int num2;
	int* pNum = &num1;

	inputDetails(&num1, &num2);
	cout << endl;
	outputDetails(num1, num2, pNum);
}

void inputDetails(int* n1, int* n2)
{
	cout << "Please enter a number" << endl;
	cin >> *n1;

	cout << "Please enter another number" << endl;
	cin >> *n2;
}
void outputDetails(int& integer1, int& integer2, int* pointer)
{
	cout << "Value of num1: " << integer1 << endl;
	cout << "Address of num1 in memory: " << &integer1 << endl;
	cout << "Value of num2: " << integer2 << endl;
	cout << "Address of num2 in memory: " << &integer2 << endl;
	cout << "Value of pNum (the address it currently holds): " << pointer << endl;
	cout << "Deferenced value of pNum: " << *pointer << endl;
	cout << "Address of pNum in memory: " << &pointer << endl;
}