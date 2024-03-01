#include<iostream>
using namespace std;
void main()
{
#ifdef MyStuff
	const int SIZE = 8;
	int arr[SIZE] = {};
	int numb;
	const int SIZE2 = 6;
	char arr2[SIZE] = { 'A' , 'B', 'C' , 'D', 'E' , 'F' };
	cout << "Enter ur number: "; cin >> numb;
	for (int l=0; l < SIZE; l++)
	{
		arr[l] = numb % 16;
		numb = numb / 16;
	}
	cout << "HEX is - "; for (int l = SIZE-1; l >= 0; l--)
	{
		if (arr[l] - 10 >= 0)cout << arr2[arr[l] - 10];
		else cout << arr[l];
		if (l % 4 == 0)cout << " ";
	}
#endif // MyStuff

	const int SIZE = 8;
	char hex[SIZE] = {};
	int decimal;
	int i = 0;
	cout << "Enter the number: "; cin >> decimal;
	for (; decimal; hex[i++] = decimal & 15, decimal >>= 4);
	for (--i; i >= 0; i--)
	{
		cout << char(hex[i] < 10 ? hex[i] + '0' : hex[i] + 'A' - 10);
	}
}