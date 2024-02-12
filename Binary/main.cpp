#include<iostream>
using namespace std;
void main()
{
	const int SIZE = 32;
	int arr[SIZE];
	int numb;
	cout << "Enter ur number: "; cin >> numb;
	for (int l = 0; l < SIZE; l++)
	{
		arr[l] = numb % 2;
		numb = numb/2;
	}
	cout << "Binary is - "; for (int l = SIZE - 1; l >= 0; l--)
	{
		cout << arr[l];
		if (l % 4 == 0)cout << " ";
	}
}