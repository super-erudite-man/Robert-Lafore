#include <iostream>

using namespace std;

int maxint(int a[], int length);

int main()
{
	int a[100], n = 0;
	do
	{
		cout << "№" << n << ": ";
		cin >> a[n++];
	} while(a[n-1] != 0);
	int m = maxint(a, n);
	cout << "\nМаксимальный элемент\n" << "№" << m << ": " << a[m] << endl;
	return 0;
}

int maxint(int a[], int length)
{
	int i = 0, max = a[0];
	for(int j = 1; j < length; j++)
		if(a[j] > max)
		{
			max = a[j];
			i = j;
		}
	return i;
}