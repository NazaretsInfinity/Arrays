#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];
	// input elements from kbrd
	for (int j = 0; j < SIZE; j++)
	{
		int c;
		cin >> c;
		arr[j] = c;
	}
	// output the list on the screen
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}