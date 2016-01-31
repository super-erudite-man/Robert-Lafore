#include <iostream>

using namespace std;

int c;

void counter();

int main()
{
	for(int i = 1; i <= 10; i++)
		counter();
	return 0;
}

void counter()
{
	c++;
	cout << "Сколько раз вызывалась эта функция? " << c << endl;
}