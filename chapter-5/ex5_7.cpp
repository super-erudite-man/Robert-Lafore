#include <iostream>

using namespace std;

double power(double n, int p = 2);
double power(char n, int p = 2);
double power(int n, int p = 2);
double power(long n, int p = 2);
double power(float n, int p = 2);

int main()
{
	double v1;
	char v2;
	int v3, t;
	long v4;
	float v5;
	cout << "Введите переменную типа double и значение степени: ";
	cin >> v1 >> t;
	cout << v1 << " в степени " << t << " равно " << power(v1, t) << endl;
	cout << "Введите переменную типа char и значение степени: ";
	cin >> v2 >> t;
	cout << v2 << " в степени " << t << " равно " << power(v2, t) << endl;
	cout << "Введите переменную типа int и значение степени: ";
	cin >> v3 >> t;
	cout << v3 << " в степени " << t << " равно " << power(v3, t) << endl;
	cout << "Введите переменную типа long и значение степени: ";
	cin >> v4 >> t;
	cout << v4 << " в степени " << t << " равно " << power(v4, t) << endl;
	cout << "Введите переменную типа float и значение степени: ";
	cin >> v5 >> t;
	cout << v5 << " в степени " << t << " равно " << power(v5, t) << endl;
}

double power(double n, int p)
{
	double c = n;
	for(int i = 1; i < p; i++)
		c *= n;
	return c;
}

double power(char n, int p)
{
	char c = n;
	for(int i = 1; i < p; i++)
		c *= n;
	return static_cast<double>(c);
}

double power(int n, int p)
{
	int c = n;
	for(int i = 1; i < p; i++)
		c *= n;
	return c;
}

double power(long n, int p)
{
	long c = n;
	for(int i = 1; i < p; i++)
		c *= n;
	return c;
}

double power(float n, int p)
{
	float c = n;
	for(int i = 1; i < p; i++)
		c *= n;
	return c;
}