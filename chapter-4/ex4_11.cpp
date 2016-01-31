#include <iostream>

using namespace std;

struct time_str
{
	int hours, minutes, seconds;
};

int main()
{
	time_str t1, t2;
	char ch;
	cout << "Введите время в формате ЧЧ:ММ:СС: ";
	cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;
	cout << "Введите время в формате ЧЧ:ММ:СС: ";
	cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;
	long t1L = t1.hours * 3600 + t1.minutes * 60 + t1.seconds, t2L = t2.hours * 3600 + t2.minutes * 60 + t2.seconds, t3L = t1L + t2L;
	time_str t3;
	t3.hours = t3L / 3600;
	t3.minutes = t3L % 3600 / 60;
	t3.seconds = t3L % 3600 % 60;
	cout << "Сумма равна " << t3.hours << ':' << t3.minutes << ':' << t3.seconds << endl;
	return 0;
}