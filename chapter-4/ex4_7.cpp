#include <iostream>

using namespace std;

struct date
{
	int day, month, year;
};

enum etype {laborer, secretary, manager, accountant, executive, researcher};

struct employee
{
	int num;
	float allowance;
	etype office;
	date adopt;
};

int main()
{
	employee emp1, emp2, emp3;
	char ch, letter;

	cout << "Введите номер сотрудника: ";
	cin >> emp1.num;
	cout << "Введите величину его зарплаты: $";
	cin >> emp1.allowance;
	cout << "Введите первую букву его должности: ";
	cin >> letter;
	switch(letter)
	{
		case 'l': emp1.office = laborer; break;
		case 's': emp1.office = secretary; break;
		case 'm': emp1.office = manager; break;
		case 'a': emp1.office = accountant; break;
		case 'e': emp1.office = executive; break;
		case 'r': emp1.office = researcher; break;
	};
	cout << "Введите дату принятия этого сотрудника на работу: ";
	cin >> emp1.adopt.day >> ch >> emp1.adopt.month >> ch >> emp1.adopt.year;

	cout << "\nВведите номер сотрудника: ";
	cin >> emp2.num;
	cout << "Введите величину его зарплаты: $";
	cin >> emp2.allowance;
	cout << "Введите первую букву его должности: ";
	cin >> letter;
	switch(letter)
	{
		case 'l': emp2.office = laborer; break;
		case 's': emp2.office = secretary; break;
		case 'm': emp2.office = manager; break;
		case 'a': emp2.office = accountant; break;
		case 'e': emp2.office = executive; break;
		case 'r': emp2.office = researcher; break;
	};
	cout << "Введите дату принятия этого сотрудника на работу: ";
	cin >> emp2.adopt.day >> ch >> emp2.adopt.month >> ch >> emp2.adopt.year;

	cout << "\nВведите номер сотрудника: ";
	cin >> emp3.num;
	cout << "Введите величину его зарплаты: $";
	cin >> emp3.allowance;
	cout << "Введите первую букву его должности: ";
	cin >> letter;
	switch(letter)
	{
		case 'l': emp3.office = laborer; break;
		case 's': emp3.office = secretary; break;
		case 'm': emp3.office = manager; break;
		case 'a': emp3.office = accountant; break;
		case 'e': emp3.office = executive; break;
		case 'r': emp3.office = researcher; break;
	};
	cout << "Введите дату принятия этого сотрудника на работу: ";
	cin >> emp3.adopt.day >> ch >> emp3.adopt.month >> ch >> emp3.adopt.year;

	cout << "\nСотрудник №" << emp1.num << ":\n"
		 << "\tВеличина зарплаты: $" << emp1.allowance
		 << "\n\tДолжность: ";
	switch(emp1.office)
	{
		case 0: cout << "laborer\n"; break;
		case 1: cout << "secretary\n"; break;
		case 2: cout << "manager\n"; break;
		case 3: cout << "accountant\n"; break;
		case 4: cout << "executive\n"; break;
		case 5: cout << "researcher\n"; break;
	};
	cout << "\tДата принятия на работу: " << emp1.adopt.day << '/' << emp1.adopt.month << '/' << emp1.adopt.year << endl;

	cout << "Сотрудник №" << emp2.num << ":\n"
		 << "\tВеличина зарплаты: $" << emp2.allowance
		 << "\n\tДолжность: ";
	switch(emp2.office)
	{
		case 0: cout << "laborer\n"; break;
		case 1: cout << "secretary\n"; break;
		case 2: cout << "manager\n"; break;
		case 3: cout << "accountant\n"; break;
		case 4: cout << "executive\n"; break;
		case 5: cout << "researcher\n"; break;
	};
	cout << "\tДата принятия на работу: " << emp2.adopt.day << '/' << emp2.adopt.month << '/' << emp2.adopt.year << endl;

	cout << "Сотрудник №" << emp3.num << ":\n"
		 << "\tВеличина зарплаты: $" << emp3.allowance
		 << "\n\tДолжность: ";
	switch(emp3.office)
	{
		case 0: cout << "laborer\n"; break;
		case 1: cout << "secretary\n"; break;
		case 2: cout << "manager\n"; break;
		case 3: cout << "accountant\n"; break;
		case 4: cout << "executive\n"; break;
		case 5: cout << "researcher\n"; break;
	};
	cout << "\tДата принятия на работу: " << emp3.adopt.day << '/' << emp3.adopt.month << '/' << emp3.adopt.year << endl;

	return 0;
}