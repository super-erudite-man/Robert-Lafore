#include <iostream>

using namespace std;

class matrix
{
	private:
		static const int LIMIT = 10;
		int a[LIMIT][LIMIT];
	public:
		void putel(int index1, int index2, int value);
		int getel(int index1, int index2);
};

int main()
{
	matrix m;
	char ch;
	do
	{
		cout << "Введите \"p\" для ввода элемента массива и \"g\" для вывода: ";
		char sym;
		cin >> sym;
		switch(sym)
		{
			case 'p':
				int i1, i2, v;
				cout << "Введите индекс и значение: ";
				cin >> i1 >> i2 >> v;
				m.putel(i1, i2, v);
				break;
			case 'g':
				int j1, j2, temp;
				cout << "Введите индекс массива: ";
				cin >> j1 >> j2;
				temp = m.getel(j1, j2);
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

void matrix::putel(int index1, int index2, int value)
{
	if(0 <= index1 && index1 <= LIMIT - 1 && 0 <= index2 && index2 <= LIMIT - 1)
		a[index1][index2] = value;
	else
		cout << "Индекс лежит вне пределов массива!\n";
}

int matrix::getel(int index1, int index2)
{
	int temp;
	if(0 <= index1 && index1 <= LIMIT - 1 && 0 <= index2 && index2 <= LIMIT - 1)
	{
		temp = a[index1][index2];
		cout << "[" << index1 << ", " << index2 << "] = " << temp << endl;
	}
	else
		cout << "Индекс лежит вне пределов массива!\n";
	return temp;
}