#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string userSent;
	cout << "Please enter a sentence" << endl;
	getline(cin, userSent);

	cout << "Your input: " << userSent << endl;
	replace(userSent.begin(), userSent.end(), 'e', 'X');
	cout << "every occurence of 'e' replaced with 'X': " << userSent << endl;
}