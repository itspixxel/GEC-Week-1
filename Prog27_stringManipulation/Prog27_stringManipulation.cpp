#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void insertCharacter(string oldStr, int pos, string strToInsert);
void replaceCharacter(string oldStr, int pos, string strToReplace);

int main()
{
	string userName;
	string longUserName;
	cout << "Please enter your first name" << endl;
	cin >> userName;

	string tempString = "Do you know who loves Jammie Dodgers? XX does!";
	
	int pos = tempString.find('XX');

	insertCharacter(tempString, pos+1, userName);
	replaceCharacter(tempString, pos, userName);

	cout << "\nPlease enter another name, make sure it's longer than the last one (" << userName << "[" << size(userName) << "])." << endl;

	do
	{
		cin >> longUserName;
		if (!(size(longUserName) > size(userName)))
		{
			cout << "Invalid input. Please try again." << endl;
		}
		else
		{
			replaceCharacter(tempString, pos, longUserName);
		}
		
	} while (!(size(longUserName) > size(userName)));

	return 0;
}

void insertCharacter(string oldStr, int pos, string strToInsert)
{
	oldStr.insert(pos, strToInsert);
	cout << oldStr << endl;
}

void replaceCharacter(string oldStr, int pos, string strToReplace)
{
	oldStr.replace(pos, 2, strToReplace);
	cout << oldStr << endl;
}