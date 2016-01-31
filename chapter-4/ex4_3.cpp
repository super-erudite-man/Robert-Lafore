#include <iostream>

using namespace std;

struct Distance
{
	int feet;
	float inches;
};

struct Volume
{
	Distance a, b, c;
};

int main()
{
	Volume v;
	char ch;
	cout << "Введите значение длины: ";
	cin >> v.a.feet >> ch >> v.a.inches >> ch;
	cout << "Введите значение ширины: ";
	cin >> v.b.feet >> ch >> v.b.inches >> ch;
	cout << "Введите значение высоты: ";
	cin >> v.c.feet >> ch >> v.b.inches >> ch;
	float x, y, z, vol;
	x = v.a.feet + v.a.inches / 12.0;
	y = v.b.feet + v.b.inches / 12.0;
	z = v.c.feet + v.c.inches / 12.0;
	vol = x * y * z;
	cout << "Объём равен " << vol << " фут3\n";
	return 0; 
}