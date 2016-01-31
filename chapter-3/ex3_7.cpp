#include <iostream>

using namespace std;

int main()
{
	double begin, per, end;
	int year;
	cout << "Введите начальный вклад: ";
	cin >> begin;
	cout << "Введите число лет: ";
	cin >> year;
	cout << "Введите процентную ставку: ";
	cin >> per;
	end = begin;
	for(int i = 1; i <= year; i++)
			end *= 1.0 + per / 100.0;
	cout << "Через " << year << ' ';

	if(year % 10 == 1)
		cout << "год";
	else if((year % 10 >= 2) && (year % 10 <= 4))
		cout << "года";
	else
		cout << "лет";
	
	cout << " вы получите $" << end << endl; 
	return 0;
}