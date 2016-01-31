#include <iostream>

using namespace std;

int main()
{
	double begin, per, end, _end;
	int year = 0;
	cout << "Введите начальную сумму: $";
	cin >> begin;
	cout << "Введите процентную ставку: ";
	cin >> per;
	cout << "Введите конечную сумму: $";
	cin >> end;
	_end = begin;
	
	do
	{
		_end *= 1.0 + per / 100.0;
		year++;
	} while(_end < end);

	cout << "Вы получите $" << end << " через " << year << ' ';

	if(year % 10 == 1)
		cout << "год";
	else if((year % 10 >= 2) && (year % 10 <= 4))
		cout << "года";
	else
		cout << "лет";

	cout << endl;
	return 0;
}