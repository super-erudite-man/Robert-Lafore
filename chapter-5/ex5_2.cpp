#include <iostream>

using namespace std;

double power(double n, int p = 2);

int main()
{
	cout << "Введите число и значение степени: ";
	double num, k;
	cin >> num >> k;
	double num_k = power(num, k);
	cout << num << " в степени " << k << " равно " << num_k << endl;
	return 0;
}

double power(double n, int p)
{
	double c = n;
	for(int i = 1; i < p; i++)
		c *= n;
	return c;
}