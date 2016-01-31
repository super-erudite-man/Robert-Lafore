#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

class fraction
{
	private:
		int num;
	public:
		int den;
		void fadd(fraction a, fraction b);
		void fsub(fraction a, fraction b);
		void fmul(fraction a, fraction b);
		void fdiv(fraction a, fraction b);
		void input(void);
		void output(void) const;
		void lowterms(void);
		fraction(void): num(0), den(0) { }
		fraction(int n, int d): num(n), den(d) { }
};

int main()
{
	fraction a, b, s;
	char ch, op;
	do
	{
		a.input();
		cout << "Введите оператор: ";
		cin >> op;
		b.input();
		if((a.den == 0) || (b.den == 0))
			cout << "Знаменатель равен нулю!\n";
		else
		{
			switch(op)
			{
				case '+':
					s.fadd(a, b);
					s.lowterms();
					s.output();
					break;
				case '-':
					s.fsub(a, b);
					s.lowterms();
					s.output();
					break;
				case '*':
					s.fmul(a, b);
					s.lowterms();
					s.output();
					break;
				case '/':
					s.fdiv(a, b);
					s.lowterms();
					s.output();
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

void fraction::fadd(fraction a, fraction b)
{
	num = a.num * b.den + a.den * b.num;
	den = a.den * b.den;
}

void fraction::fsub(fraction a, fraction b)
{
	num = a.num * b.den - a.den * b.num;
	den = a.den * b.den;
}

void fraction::fmul(fraction a, fraction b)
{
	num = a.num * b.num;
	den = a.den * b.den;
}

void fraction::fdiv(fraction a, fraction b)
{
	num = a.num * b.den;
	den = a.den * b.num;
}

void fraction::input(void)
{
	char sym;
	cout << "Введите дробь: ";
	cin >> num >> sym >> den;
}

void fraction::output(void) const
{
	cout << num << '/' << den << endl;
}

void fraction::lowterms(void)
{
	long tnum = abs(num), tden = abs(den), temp, gcd;
	if(tden == 0)
	{
		cout << "Недопустимый знаменатель!"; 
		exit(1);
	}
	else if(tnum == 0)
	{
		num = 0;
		den = 1;
		return;
	}
	while(tnum != 0)
	{
		if(tnum < tden)
		{
			temp = tnum;
			tnum = tden;
			tden = temp;
		}
		tnum -= tden;
	}
	gcd = tden;
	num /= gcd;
	den /= gcd;
}