#include <iostream>

using namespace std;

struct date
{
	int day, month, year;
};

int main()
{
	date d;
	char ch;
	cout << "Введите дату в формате ДД/ММ/ГГГГ: ";
	cin >> d.day >> ch >> d.month >> ch >> d.year;
	cout << "Вы ввели: " << d.day << '/' << d.month << '/' << d.year << endl;
	return 0;
}