#include <iostream>

using namespace std;

int main()
{
	cout << "Нажмите 1 для перевода шкалы Цельсия в шкалу Фаренгейта.\n"
		 << "2 для перевода шкалы Фаренгейта в шкалу Цельсия: ";
	int ch;
	cin >> ch;
	double cels, fahr;
	switch(ch)
	{
		case 1:
			cout << "Введите температуру по Цельсию: ";
			cin >> cels;
			fahr = 9.0 / 5.0 * cels + 32.0;
			cout << "Значение по Фаренгейту: " << fahr << endl;
			break;
		case 2:
			cout << "Введите температуру по Фаренгейту: ";
			cin >> fahr;
			cels = 5.0 / 9.0 * (fahr - 32.0);
			cout << "Значение по Цельсию: " << cels << endl;
			break;
		default:
			cout << "Ошибка ввода!" << endl;
	}

}