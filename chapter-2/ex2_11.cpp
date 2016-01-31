#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
	locale::global(locale("ru_RU.UTF-8"));
	wcout << left << setw(8) << L"Фамилия" << setw(8) << L"Имя" << setw(13) << L"Адрес" << setw(15) << L"Город" << endl
		  << setw(8 + 8 + 13 + 15) << setfill(L'-') << "" << endl
		  << setfill(L' ') << setw(8) << L"Петров" << setw(8) << L"Василий" << setw(13) << L"Кленовая 16" << setw(15) << L"Санкт-Петербург" << endl
		  << setw(8) << L"Иванов" << setw(8) << L"Сергей" << setw(13) << L"Осиновая 3" << setw(15) << L"Находка" << endl
		  << setw(8) << L"Сидоров" << setw(8) << L"Иван" << setw(13) << L"Берёзовая 21" << setw(15) << L"Калининград" << endl;
	return 0;
}