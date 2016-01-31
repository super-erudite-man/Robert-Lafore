#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	double a, b, c;
	char sym, ch;
	do
	{
		cout << "Введите первый операнд, операцию и второй операнд: ";
		cin >> a >> sym >> b;
		switch(sym)
		{
			case '+':
				c = a + b;
				cout << "Результат равен " << c << endl;
				cout << "Выполнить ещё одну операцию (y/n)? ";
				cin >> ch;
				break;
			case '-':
				c = a - b;
				cout << "Результат равен " << c << endl;
				cout << "Выполнить ещё одну операцию (y/n)? ";
				cin >> ch;
				break;
			case '*':
				c = a * b;
				cout << "Результат равен " << c << endl;
				cout << "Выполнить ещё одну операцию (y/n)? ";
				cin >> ch;
				break;
			case '/':
				if(b != 0)
				{
					c = a / b;
					cout << "Результат равен " << c << endl;
				}
				else
					cout << "Деление на ноль!" << endl;
				cout << "Выполнить ещё одну операцию (y/n)? ";
				cin >> ch;
				break;
			default:
				cout << "Ошибка ввода!" << endl;
				cout << "Выполнить ещё одну операцию (y/n)? ";
				cin >> ch;
		}
	} while(ch != 'n');
	return 0;
}