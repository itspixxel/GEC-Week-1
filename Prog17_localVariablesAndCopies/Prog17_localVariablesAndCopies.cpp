#include <iostream>
using namespace std;
void addTwo(int num);

int main()
{
	int myNum = 6;
	cout << "Main: [before]: myNum = " << myNum << endl;
	addTwo(myNum);
}

void addTwo(int num)
{
	num += 2;
	cout << "Function: num = " << num << endl;
}