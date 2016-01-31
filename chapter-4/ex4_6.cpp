#include <iostream>

using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};

int main()
{
	etype office;
	char letter;
	cout << "Введите первую букву должности\n(laborer, secretary, manager, accountant,\nexecutive, researcher): ";
	cin >> letter;
	switch(letter)
	{
		case 'l': office = laborer; break;
		case 's': office = secretary; break;
		case 'm': office = manager; break;
		case 'a': office = accountant; break;
		case 'e': office = executive; break;
		case 'r': office = researcher; break;
		default: cout << "Ошибка ввода!\n";
	};
	switch(office)
	{
		case 0: cout << "Полное название должности: laborer\n"; break;
		case 1: cout << "Полное название должности: secretary\n"; break;
		case 2: cout << "Полное название должности: manager\n"; break;
		case 3: cout << "Полное название должности: accountant\n"; break;
		case 4: cout << "Полное название должности: executive\n"; break;
		case 5: cout << "Полное название должности: researcher\n"; break;
	};
	return 0;
}