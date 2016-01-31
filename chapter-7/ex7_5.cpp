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
	const int MAX = 100;
	fraction frac[MAX], sum(1, 1);
	int n = 0;
	char ch;
	do
	{
		frac[n].input();
		sum.fadd(sum, frac[n++]);
		cout << "Продолжить? (y/n): ";
		cin >> ch;
	} while(ch != 'n');
	sum.fsub(sum, fraction(1, 1));
	sum.fdiv(sum, fraction(n, 1));
	sum.lowterms();
	sum.output();
	return 0;
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