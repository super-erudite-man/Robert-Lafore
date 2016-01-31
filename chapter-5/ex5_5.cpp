#include <iostream>

using namespace std;

long hms_to_secs(int hours, int minutes, int seconds);

int main()
{
	char ch;
	do
	{
		cout << "Введите время в формате ЧЧ:ММ:СС: ";
		char sym;
		int h, m, s;
		cin >> h >> sym >> m >> sym >> s;
		long sec = hms_to_secs(h, m, s);
		cout << h << " ч " << m << " мин " << s << " с равно " << sec << " сек\n";
		cout << "Продолжить (y/n)? ";
		cin >> ch;
	} while(ch != 'n');
	return 0;
}

long hms_to_secs(int hours, int minutes, int seconds)
{
	long secs = hours * 3600 + minutes * 60 + seconds;
	return secs;
}