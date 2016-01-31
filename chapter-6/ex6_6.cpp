#include <iostream>

using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};

class employee
{
	private:
		int num;
		float allowance;
		int day, month, year;
		etype office;
	public:
		void getemploy(void);
		void putemploy(void) const;
};

int main()
{
	employee emp1, emp2, emp3;
	emp1.getemploy();
	emp2.getemploy();
	emp3.getemploy();
	emp1.putemploy();
	emp2.putemploy();
	emp3.putemploy();
}

void employee::getemploy(void)
{
	cout << "Введите номер сотрудника: ";
	cin >> num;
	cout << "Введите величину его пособия: $";
	cin >> allowance;
	cout << "Введите первую букву должности\n(laborer, secretary, manager, accountant,\nexecutive, researcher): ";
	char letter;
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
	cout << "\tВведите дату приёма сотрудника на работу: ";
	char ch;
	cin >> day >> ch >> month >> ch >> year;
	cout << endl;
}

void employee::putemploy(void) const
{
	cout << "Сотрудник №" << num << "\n\tЗарплата: " << allowance << "\n\t";
	switch(office)
	{
		case 0: cout << "Должность: laborer\n"; break;
		case 1: cout << "Должность: secretary\n"; break;
		case 2: cout << "Должность: manager\n"; break;
		case 3: cout << "Должность: accountant\n"; break;
		case 4: cout << "Должность: executive\n"; break;
		case 5: cout << "Должность: researcher\n"; break;
	};
	cout << "Дата приёма на работу: " << day << '/' << month << '/' << year << endl;
}