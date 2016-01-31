#include <iostream>

using namespace std;

struct time_str
{
	int hours, minutes, seconds;
};

long time_to_secs(time_str t);
time_str secs_to_time(long secs);

int main()
{
	time_str t1, t2;
	char ch;
	cout << "Введите время в формате ЧЧ:ММ:СС: ";
	cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;
	cout << "Введите время в формате ЧЧ:ММ:СС: ";
	cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;
	long t1L = time_to_secs(t1), t2L = time_to_secs(t2), t3L = t1L + t2L;
	time_str t3 = secs_to_time(t3L);
	cout << "Сумма равна " << t3.hours << ':' << t3.minutes << ':' << t3.seconds << endl;
}

long time_to_secs(time_str t)
{
	long s = t.hours * 3600 + t.minutes * 60 + t.seconds;
	return s;
}

time_str secs_to_time(long secs)
{
	time_str tt;
	tt.hours = secs / 3600;
	tt.minutes = secs % 3600 / 60;
	tt.seconds = secs % 3600 % 60;
	return tt;
}