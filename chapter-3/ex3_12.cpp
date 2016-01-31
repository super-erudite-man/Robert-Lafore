#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, s1, s2;
	char ch, op, sym;
	do
	{
		cout << "Введите первую дробь, оператор и вторую дробь: ";
		cin >> a >> sym >> b >> op >> c >> sym >> d;
		if((b == 0) || (d == 0))
			cout << "Знаменатель равен нулю!";
		else
		{
			switch(op)
			{
				case '+':
					s1 = a * d + b * c;
					s2 = b * d;
					cout << "Результат: " << s1 << '/' << s2 << endl;
					break;
				case '-':
					s1 = a * d - b * c;
					s2 = b * d;
					cout << "Результат: " << s1 << '/' << s2 << endl;
					break;
				case '*':
					s1 = a * c;
					s2 = b * d;
					cout << "Результат: " << s1 << '/' << s2 << endl;
					break;
				case '/':
					s1 = a * d;
					s2 = b * c;
					cout << "Результат: " << s1 << '/' << s2 << endl;
					break;
				default:
					cout << "Ошибка ввода!\n";
					break;
			}
			cout << "Продолжить (y/n)? ";
			cin >> ch;
		} while(ch != 'n');
	}
}