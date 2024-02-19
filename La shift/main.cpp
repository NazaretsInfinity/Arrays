#include<iostream>
using namespace std;
void main()
{
	int const SIZE = 10;
	int c;
	int arr[SIZE];
	int arr2[SIZE];
	cout << "Enter the size of move: "; cin >> c;
	for (int a = 0, b = 1, n = 0; n < SIZE; b += a, a = b - a, n++)arr[n] = a, arr2[n]=a; 
	for (int a = 0; a < SIZE - c; a++)
	{
		arr[a] = arr[a + c];
		cout << arr[a] << "\t";
	}
	for (int l = 0; l < c; l++)cout << arr2[l] << "\t";
}