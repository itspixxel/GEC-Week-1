#include <iostream>
using namespace std;
int add25(int& rNum);
int subtract25(int& rNum);

int main()
{
	int num;
	cout << "Please enter a number" << endl;
	cin >> num;
	cout << "Value of num: " << num << endl;
	cout << num << " + 25 = ";
	cout << add25(num) << endl;

	cout << endl;

	cout << "Please enter another number" << endl;
	cin >> num;
	cout << "Value of num: " << endl;
	cout << num << " - 25 = ";
	cout << subtract25(num) << endl;
}

int add25(int& rNum)
{
	rNum += 25;
	return rNum;
}

int subtract25(int& rNum)
{
	rNum -= 25;
	return rNum;
}