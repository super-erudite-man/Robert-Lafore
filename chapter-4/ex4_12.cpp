#include <iostream>

using namespace std;

struct fraction
{
	int num, den;
};


int main()
{
	fraction a, b, s;
	char ch, op, sym;
	do
	{
		cout << "Введите первую дробь, оператор и вторую дробь: ";
		cin >> a.num >> sym >> a.den >> op >> b.num >> sym >> b.den;
		if((a.den == 0) || (b.den == 0))
			cout << "Знаменатель равен нулю!";
		else
		{
			switch(op)
			{
				case '+':
					s.num = a.num * b.den + a.den * b.num;
					s.den = a.den * b.den;
					cout << "Результат: " << s.num << '/' << s.den << endl;
					break;
				case '-':
					s.num = a.num * b.den - a.den * b.num;
					s.den = a.den * b.den;
					cout << "Результат: " << s.num << '/' << s.den << endl;
					break;
				case '*':
					s.num = a.num * b.num;
					s.den = a.den * b.den;
					cout << "Результат: " << s.num << '/' << s.den << endl;
					break;
				case '/':
					s.num = a.num * b.den;
					s.den = a.den * b.num;
					cout << "Результат: " << s.num << '/' << s.den << endl;
					break;
				default:
					cout << "Ошибка ввода!\n";
					break;
			}
		};
			cout << "Продолжить (y/n)? ";
			cin >> ch;
	} while(ch != 'n');
}