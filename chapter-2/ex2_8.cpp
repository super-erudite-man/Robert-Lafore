// http://www.cyberforum.ru/cpp-linux/thread60148.html

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
	long pop1 = 8425785, pop2 = 47, pop3 = 9761;
	locale::global(locale("ru_RU.UTF-8"));
	wcout << setfill(L'.') << setw(9) << left << L"Город" << setw(12) << right << L"Население" << endl
		 << setw(9) << left << L"Москва" << setw(12) << right << pop1 << endl
		 << setw(9) << left << L"Киров" << setw(12) << right << pop2 << endl
		 << setw(9) << left << L"Угрюмовка" << setw(12) << right << pop3 << endl;
	return 0;
}