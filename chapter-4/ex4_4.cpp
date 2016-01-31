#include <iostream>

using namespace std;

struct employee
{
	int num;
	float allowance;
};

int main()
{
	employee emp1, emp2, emp3;
	cout << "Введите номер сотрудника: ";
	cin >> emp1.num;
	cout << "Введите величину его пособия: $";
	cin >> emp1.allowance;
	cout << "\nВведите номер сотрудника: ";
	cin >> emp2.num;
	cout << "Введите величину его пособия: $";
	cin >> emp2.allowance;
	cout << "\nВведите номер сотрудника: ";
	cin >> emp3.num;
	cout << "Введите величину его пособия: $";
	cin >> emp3.allowance;
	cout << "\nЗарплата сотрудника №" << emp1.num << ": $" << emp1.allowance
		 << "\nЗарплата сотрудника №" << emp2.num << ": $" << emp2.allowance
		 << "\nЗарплата сотрудника №" << emp3.num << ": $" << emp3.allowance << endl;
	return 0;
}