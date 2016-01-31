#include <iostream>

using namespace std;

int main()
{
	int j1, j2, j3, p1, p2, p3, s1, s2, s3;
	char sym, ch, menu;
	double num;
	do
	{
		cout << "Введите первую сумму: ";
		cin >> j1 >> ch >> j2 >> ch >> j3;
		cout << "Введите операцию: ";
		cin >> sym;
		switch(sym)
		{
			case '+':
				cout << "Введите вторую сумму: ";
				cin >> p1 >> ch >> p2 >> ch >> p3;
				s3 = j3 + p3;
				s2 = j2 + p2;
				s1 = j1 + p1;
				if(s3 > 11) {s2 += s3 / 12; s3 %= 12;}
				if(s2 > 19) {s1 += s2 / 20; s2 %= 20;}
				cout << "Всего: " << s1 << '.' << s2 << '.' << s3 << endl;
				break;
			case '-':
				cout << "Введите вторую сумму: ";
				cin >> p1 >> ch >> p2 >> ch >> p3;
				s3 = j3 - p3;
				s2 = j2 - p2;
				s1 = j1 - p1;
				if(s3 < 0) {s2--; s3 += 12;}
				if(s2 < 0) {s1--; s2 += 20;}
				cout << "Всего: " << s1 << '.' << s2 << '.' << s3 << endl;
				break;
			case '*':
				cout << "Введите число: ";
				cin >> num;
				s3 = j3 * num;
				s2 = j2 * num;
				s1 = j1 * num;
				if(s3 > 11) {s2 += s3 / 12; s3 %= 12;}
				if(s2 > 19) {s1 += s2 / 20; s2 %= 20;}
				cout << "Всего: " << s1 << '.' << s2 << '.' << s3 << endl;
				break;
			default:
				cout << "Ошибка ввода!\n";
				break;
		}
		cout << "Продолжить (y/n)? ";
		cin >> menu;
	} while(menu != 'n');
	return 0;
}