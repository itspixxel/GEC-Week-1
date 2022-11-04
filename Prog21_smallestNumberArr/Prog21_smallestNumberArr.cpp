#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	// Takes 10 integer inputs
	int arr[10], sum = 0, min;
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter value " << i+1 << " of 10" << endl;
		cin >> arr[i];
	}

	cout << "You entered the following values:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\nMinimum value: " << *min_element(arr, end(arr)) << endl;
}