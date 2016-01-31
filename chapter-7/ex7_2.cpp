#include <iostream>
#include <string>

using namespace std;

class employee
{
	private:
		string name;
		long number;
	public:
		void getdata();
		void putdata();
};

int main()
{
	const int MAX = 100;
	employee emp[MAX];
	char ch;
	int n = 0;
	do
	{
		emp[n++].getdata();
		cout << "Продолжить? (y/n): ";
		cin >> ch;
		cout << endl;
	} while(ch != 'n');
	for(int i = 0; i < n; i++)
		emp[i].putdata();
	return 0;
}

void employee::getdata()
{
	cout << "Введите имя работника: ";
	cin >> name;
	cout << "Введите номер работника: ";
	cin >> number;
}

void employee::putdata()
{
	cout << "№" << number << ": " << name << endl;
}
