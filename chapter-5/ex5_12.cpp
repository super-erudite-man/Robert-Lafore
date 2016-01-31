#include <iostream>

using namespace std;

struct fraction
{
	int num, den;
};

fraction fadd(fraction a, fraction b);
fraction fsub(fraction a, fraction b);
fraction fmul(fraction a, fraction b);
fraction fdiv(fraction a, fraction b);

int main()
{
	fraction a, b, s;
	char menu, op, ch;
	do
	{
		cout << "Введите первую дробь, оператор и вторую дробь: ";
		cin >> a.num >> ch >> a.den >> op >> b.num >> ch >> b.den;
		if((a.den == 0) || (b.den == 0))
			cout << "Знаменатель равен нулю!";
		else
		{
			switch(op)
			{
				case '+':
					s = fadd(a, b);
					cout << "Результат: " << s.num << '/' << s.den << endl;
					break;
				case '-':
					s = fsub(a, b);
					cout << "Результат: " << s.num << '/' << s.den << endl;
					break;
				case '*':
					s = fmul(a, b);
					cout << "Результат: " << s.num << '/' << s.den << endl;
					break;
				case '/':
					s = fdiv(a, b);
					cout << "Результат: " << s.num << '/' << s.den << endl;
					break;
				default:
					cout << "Ошибка ввода!\n";
					break;
			}
		};
		cout << "Продолжить (y/n)? ";
		cin >> menu;
	} while(menu != 'n');
}

fraction fadd(fraction a, fraction b)
{
	fraction s;
	s.num = a.num * b.den + a.den * b.num;
	s.den = a.den * b.den;
	return s;
}

fraction fsub(fraction a, fraction b)
{
	fraction s;
	s.num = a.num * b.den - a.den * b.num;
	s.den = a.den * b.den;
	return s;
}

fraction fmul(fraction a, fraction b)
{
	fraction s;
	s.num = a.num * b.num;
	s.den = a.den * b.den;
	return s;
}

fraction fdiv(fraction a, fraction b)
{
	fraction s;
	s.num = a.num * b.den;
	s.den = a.den * b.num;
	return s;
}