#include <iostream>

using namespace std;

void zeroSmaller(int &a, int &b);

int main()
{
	cout << "Введите два числа через пробел: ";
	int x, y;
	cin >> x >> y;
	zeroSmaller(x, y);
	cout << "x = " << x << "\ny = " << y << endl;
	return 0;
}

void zeroSmaller(int &a, int &b)
{
	if(a < b)
		a = 0;
	else if(b > a)
		b = 0;
}