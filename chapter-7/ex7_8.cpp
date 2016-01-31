// Need -std=c++11 flag

#include <iostream>

using namespace std;

class safearay
{
	private:
		static const int LIMIT = 100;
		int a[LIMIT];
	public:
		void putel(int index, int value);
		int getel(int index);
};

int main()
{
	safearay m;
	char ch;
	do
	{
		cout << "Введите \"p\" для ввода элемента массива и \"g\" для вывода: ";
		char sym;
		cin >> sym;
		switch(sym)
		{
			case 'p':
				int i, v;
				cout << "Введите индекс и значение: ";
				cin >> i >> v;
				m.putel(i, v);
				break;
			case 'g':
				int j, temp;
				cout << "Введите индекс массива: ";
				cin >> j;
				temp = m.getel(j);
				break;
			default:
				cout << "Ошибка ввода!\n";
		}
		cout << "Продолжить? (y/n): ";
		cin >> ch;
		cout << endl;
	} while(ch != 'n');
	return 0;
}

void safearay::putel(int index, int value)
{
	if(0 <= index && index <= LIMIT - 1)
		a[index] = value;
	else
		cout << "Индекс лежит вне пределов массива!\n";
}

int safearay::getel(int index)
{
	int temp;
	if(0 <= index && index <= LIMIT - 1)
	{
		temp = a[index];
		cout << "Элемент №" << index << " равен " << temp << endl;
	}
	else
		cout << "Индекс лежит вне пределов массива!\n";
	return temp;
}