#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <iomanip>

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
		void setden(void);
		void table(void);
};

void line(char ch);
const int indent = 10;

int main()
{
	fraction f;
	f.setden();
	f.table();
	cout << endl;
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
	char ch;
	cout << "Введите дробь: ";
	cin >> num >> ch >> den;
}

void fraction::output(void) const
{
	cout << setw(indent) << num << '/' << den;
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

void fraction::setden(void)
{
	cout << "Введите знаменатель: ";
	cin >> den;
}

void fraction::table(void)
{
	cout << setw(indent + 1) << ' ';
	for(int i = 1; i < den; i++)
		cout << setw(indent + 1) << i << '/' << den;
	cout << endl;
	line('-');
	for(int i = 1; i < den; i++)
	{
		cout << endl << setw(indent) << i << '/' << den;
		fraction ff1, ff2, fsum;
		ff1.num = i;
		ff1.den = ff2.den = den;
		for(int k = 1; k < den; k++)
		{
			ff2.num = k;
			fsum.fmul(ff1, ff2);
			fsum.lowterms();
			fsum.output();
		}
	}
}

void line(char ch)
{
	for(int j = 1; j <= 50; j++)
		cout << ch;
}