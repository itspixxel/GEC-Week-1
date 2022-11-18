#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	char userName;
	cout << "Please enter your name" << endl;
	cin >> userName;

	string tempString = "Do you know who loves Jammie Dodgers? XX does!";
	tempString.replace(35, 2, userName);
	cout << tempString;
	return 0;
}