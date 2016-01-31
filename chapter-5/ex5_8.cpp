#include <iostream>

using namespace std;

void swap(int &a, int &b);

int main()
{
	int a, b;
	cout << "Введите значение a и b: ";
	cin >> a >> b;
	swap(a, b);
	cout << "a = " << a << ", b = " << b << endl;
	return 0;
}

void swap(int &a, int &b)
{
	int buffer;
	buffer = a;
	a = b;
	b = buffer;
}