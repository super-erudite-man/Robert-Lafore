#include <iostream>

using namespace std;

class fraction
{
	private:
		int num, den;
	public:
		void input(void);
		void output(void) const;
		void sum(fraction f1, fraction f2);
};

int main()
{
	char ch;
	do
	{
		fraction ff1, ff2, ff3;
		ff1.input();
		ff2.input();
		ff3.sum(ff1, ff2);
		ff3.output();
		cout << "Продолжить (y/n)? ";
		cin >> ch;
	} while(ch != 'n');
	return 0;
}

void fraction::input(void)
{
	cout << "Введите значение дроби: ";
	char sym;
	cin >> num >> sym >> den;
}

void fraction::output(void) const
{
	cout << num << '/' << den << endl;
}

void fraction::sum(fraction f1, fraction f2)
{
	num = f1.num * f2.den + f1.den * f2.num;
	den = f1.den * f2.den;
}
