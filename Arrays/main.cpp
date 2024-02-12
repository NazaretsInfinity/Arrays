#include<iostream>
using namespace std;
#define task
void main()
{
	setlocale(LC_ALL, "");
// task1 
	cout << "Type ur list: "; 
	const int SIZE = 5;
	int arr[SIZE];
	// input elements from kbrd
	for (int j = 0; j < SIZE; j++)
	{
		int c;
		cin >> c;
		arr[j] = c;
	}
//task 2 
	// output the list on the screen
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
//task 3 vice versa
	for (int p = SIZE-1; p >= 0; p--)
	{
		cout << arr[p] << "\t";
	}
	cout << endl;
//task 4 summ
	int sum = 0;
	for (int n = 0; n < SIZE; n++)sum += arr[n]; cout << sum;
	cout << endl;
//task 5 average
	cout << (double)sum / SIZE << endl;
//task 6 max & min
	int min = arr[1];
	int max=arr[1];
	for (int l = 0; l < SIZE; l++)
	{
		if (arr[l] > max)max = arr[l];
		if (arr[l] < min)min = arr[l];
	}
	cout << "max is " << max << ", min is " << min;
}