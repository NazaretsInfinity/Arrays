#include<iostream>
using namespace std;
void main()
{
#ifdef MyStuff
	const int SIZE = 32;
	int arr[SIZE];
	int numb;
	cout << "Enter ur number: "; cin >> numb;
	for (int l = 0; l < SIZE; l++)
	{
		arr[l] = numb % 2;
		numb = numb / 2;
	}
	cout << "Binary is - "; for (int l = SIZE - 1; l >= 0; l--)
	{
		cout << arr[l];
		if (l % 4 == 0)cout << " ";
	}
#endif 
	int decimal;
	cin >> decimal;
	int i = 0;
	const int n = 32;
	bool bin[n] = {};
	while (decimal > 0)
		/*{
			bin[i] = decimal % 2;
			i++;
			decimal /= 2;
		}*/
		/*for(; decimal>0; bin[i++]=decimal%2,decimal/=2)*/
		for (; decimal; bin[i++] = decimal & 1, decimal >>= 1);
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if ((i & 3) == 0)cout << " ";
		if ((i&7) ==0 )cout << " ";
	}
	cout << endl;
}