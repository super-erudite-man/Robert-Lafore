#include <iostream>

using namespace std;

int main()
{
	int p1, p2, p3;
	double p;
	cout << "Введите количество фунтов: ";
	cin >> p1;
	cout << "Введите количество шиллингов: ";
	cin >> p2;
	cout << "Введите количество пенсов: ";
	cin >> p3;
	p = p1 + (p2 * 12.0 + p3) / 240.0;
	cout << "Десятичных фунтов: " << p << endl;
	return 0;
}