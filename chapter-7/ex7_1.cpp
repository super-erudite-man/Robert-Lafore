#include <iostream>
#include <cstring>

using namespace std;

void reversit(char str[]);

int main()
{
	const int MAX = 100;
	char str[MAX];
	cout << "Введите строку: " << endl;
	cin.get(str, MAX);
	reversit(str);
	cout << "Перевёрнутая строка: " << str << endl;
	return 0;
}

void reversit(char str[])
{
	int n = strlen(str);
	for(int i = 0; i < n / 2; i++)
	{
		char buf = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = buf;
	}
}