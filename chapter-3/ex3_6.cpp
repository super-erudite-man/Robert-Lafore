#include <iostream>

using namespace std;

int main()
{
	char ch;
	do
	{
		unsigned int num = 0;
		unsigned long fact = 1;
		cout << "Введите целое число: ";
		cin >> num;
		for(int j = num; j > 0; j--)
			fact *= j;
		cout << "Факториал числа равен " << fact << endl
			 << "Продолжить (y/n)? ";
		cin >> ch;
	} while(ch != 'n');
	return 0;
}