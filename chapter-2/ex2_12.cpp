#include <iostream>

using namespace std;

int main()
{
	int p1, p2, p3;
	double p, temp;
	cout << "Введите сумму в десятичных фунтах: ";
	cin >> p;
	p1 = static_cast<int>(p);
	temp = p - p1;
	p2 = temp * 20;
	p3 = static_cast<int>(temp * 240) % 12;
	cout << "Старые фунты: " << p1 << '.' << p2 << '.' << p3 << endl;
	return 0;
}