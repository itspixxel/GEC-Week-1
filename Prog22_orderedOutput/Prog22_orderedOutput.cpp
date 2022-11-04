#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	// Creates an array to store 5 ints
	int arr[5];

	// Takes 5 inputs from the user
	for (int i = 0; i < 5; i++)
	{
		cout << "Please enter value " << i + 1 << " of 5" << endl;
		cin >> arr[i];
	}
	cout << endl;

	// Sorts the array in ascending order
	sort(arr, end(arr));
	cout << "Ascending order sort: ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	// Sorts the array in descending order
	sort(arr, end(arr), greater<int>());
	cout << "Descending order sort: ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}