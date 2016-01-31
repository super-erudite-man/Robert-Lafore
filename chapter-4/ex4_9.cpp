#include <iostream>

using namespace std;

struct time_str
{
	int hours, minutes, seconds;
};

int main()
{
	time_str t;
	char ch;
	cout << "Введите время в формате ЧЧ:ММ:СС: ";
	cin >> t.hours >> ch >> t.minutes >> ch >> t.seconds;
	long t_sec = t.hours * 3600 + t.minutes * 60 + t.seconds;
	cout << "Время в секундах: " << t_sec << endl;
	return 0;
}