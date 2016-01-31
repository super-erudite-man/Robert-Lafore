#include <iostream>

using namespace std;

class employee
{
	private:
		int num;
		float allowance;
	public:
		void input(void);
		void output(void) const;
};

int main()
{
	employee emp1, emp2, emp3;
	emp1.input();
	emp2.input();
	emp3.input();
	emp1.output();
	emp2.output();
	emp3.output();
}

void employee::input(void)
{
	cout << "Введите номер сотрудника: ";
	cin >> num;
	cout << "Введите величину его пособия: $";
	cin >> allowance;
	cout << endl;
}

void employee::output(void) const
{
	cout << "Зарплата сотрудника №" << num << ": $" << allowance << endl;
}