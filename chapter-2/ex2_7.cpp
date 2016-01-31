#include <iostream>

using namespace std;

int main()
{
	double cels, fahr;
	cout << "Введите температуру в градусах Цельсия: ";
	cin >> cels;
	fahr = 9.0 / 5.0 * cels + 32.0;
	cout << "Эквивалентная температура в градусах Фаренгейта: " << fahr << endl;
	return 0;
}