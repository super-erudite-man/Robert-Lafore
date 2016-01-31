#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a, max;
	cout << "Введите число: ";
	cin >> a;
	const int LAST_NUMBER = 1910;
	max = a * LAST_NUMBER;

	int k = 1;
	while(max > 0)
	{
		max /= 10;
		k++;
	}

	for(int i = 0; i < 20; i++)
	{
		for(int j = 1; j <= 10; j++)
			cout << setw(k) << a * (1 + i * 10) * j;
		cout << endl;
	}

	return 0;
}