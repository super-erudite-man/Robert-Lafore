#include <iostream>

using namespace std;

int main()
{
	int j1, j2, j3, p1, p2, p3, s1, s2, s3;
	char ch;
	do
	{
		cout << "Введите первую сумму: J";
		cin >> j1 >> ch >> j2 >> ch >> j3;
		cout << "Введите вторую сумму: J";
		cin >> p1 >> ch >> p2 >> ch >> p3;
		s3 = j3 + p3;
		s2 = j2 + p2;
		s2 += (s3 > 11) ? 1 : 0;
		s1 = j1 + p1;
		s1 += (s2 > 19) ? 1 : 0;
		s3 = (s3 > 11) ? (s3 - 12) : s3;
		s2 = (s2 > 19) ? (s3 - 20) : s2;
		cout << "Всего: J" << s1 << '.' << s2 << '.' << s3 << endl
			 << "Продолжить (y/n)? ";
		cin >> ch;
	} while(ch != 'n');
	return 0;
}