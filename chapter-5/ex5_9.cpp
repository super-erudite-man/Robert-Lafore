#include <iostream>

using namespace std;

struct time_str
{
	int hours, minutes, seconds;
};

void swap(time_str &a, time_str &b);

int main()
{
	time_str t1, t2;
	char ch;
	cout << "Введите время в формате ЧЧ:ММ:СС: ";
	cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;
	cout << "Введите время в формате ЧЧ:ММ:СС: ";
	cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;
	swap(t1, t2);
	cout << "t1 = " << t1.hours << ':' << t1.minutes << ':' << t1.seconds << ", t2 = " << t2.hours << ':' << t2.minutes << ':' << t2.seconds << endl;
}

void swap(time_str &a, time_str &b)
{
	time_str buffer;
	buffer.hours = a.hours;
	a.hours = b.hours;
	b.hours = buffer.hours;
	buffer.minutes = a.minutes;
	a.minutes = b.minutes;
	b.minutes = buffer.minutes;
	buffer.seconds = a.seconds;
	a.seconds = b.seconds;
	b.seconds = buffer.seconds;
}