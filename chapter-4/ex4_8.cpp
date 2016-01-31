#include <iostream>

using namespace std;

struct fraction
{
	int num, den;
};

int main()
{
	fraction a1, a2, s;
	char ch;
	cout << "Введите первую дробь: ";
	cin >> a1.num >> ch >> a1.den;
	cout << "Введите вторую дробь: ";
	cin >> a2.num >> ch >> a2.den;
	s.num = a1.num * a2.den + a1.den * a2.num;
	s.den = a1.den * a2.den;
	cout << "Сумма равна " << s.num << '/' << s.den << endl;
	return 0;
}