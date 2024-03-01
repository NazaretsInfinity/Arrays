#include<iostream>
using namespace std;
void main()
{
	int const SIZE = 10;
	int c;
	int arr[SIZE] = { 0,1,1,2,3,5,8,13,21,34 };
	//int arr2[SIZE];
	cout << "Enter the size of move: "; cin >> c;
	 // arr2[n] = a;
#ifdef Mystuff
	for (int a = 0; a < SIZE - c; a++)
	{
		arr[a] = arr[a + c];
		cout << arr[a] << "\t";
	}
	for (int l = 0; l < c; l++)cout << arr2[l] << "\t";
#endif 
	for (int i = 0; i < c; i++)
	{
		int buffer = arr[0];
		for (int l = 0; l < SIZE-1; l++)
		{
			arr[l] = arr[l + 1];
		}
		arr[SIZE - 1] = buffer;
	}
	for (int i = 0; i < SIZE; i++)cout << arr[i] << "\t";
}