#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, s1, s2;
	char ch;
	cout << "Введите первую дробь: ";
	cin >> a >> ch >> b;
	cout << "Введите вторую дробь: ";
	cin >> c >> ch >> d;
	s1 = a * d + b * c;
	s2 = b * d;
	cout << "Сумма равна " << s1 << '/' << s2 << endl;
	return 0;
}