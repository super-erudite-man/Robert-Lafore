#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

long double mstold(char s[]);

int main()
{
	const int MAX = 100;
	char ch, s[MAX];
	do
	{
		cout << "Введите денежную сумму: ";
		cin >> s;
		long double lds = mstold(s);
		cout << "Денежная сумма равна " << lds << endl;
		cout << "Продолжить? (y/n): ";
		cin >> ch;
		cout << endl;
	} while(ch != 'n');
	return 0;
}

long double mstold(char s[])
{
	long double sum = 0;
	int p;
	for(int i = 1; i < strlen(s); i++)
	{
		if(48 <= static_cast<int>(s[i]) && static_cast<int>(s[i]) <= 57)
			sum = sum * 10 + static_cast<int>(s[i]) - 48;
		else if(s[i] == '.')
			p = i;
	}
	long double frac_part = pow(10, strlen(s) - 1 - p);
	sum /= frac_part;
	return sum;
}