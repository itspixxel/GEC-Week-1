#include <iostream>
using namespace std;

int main()
{
	int myStash = 40;
	int students = 14;

	int eachStudent = myStash / students;
	int remainingHaribo = myStash % students;

	cout << "Each student will get " << eachStudent << " Haribo packets!" << endl;
	cout << "There will be " << remainingHaribo << " remaining in MY stash!" << endl;
}