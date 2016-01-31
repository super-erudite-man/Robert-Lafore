#include <iostream>

using namespace std;

void counter();

int main()
{
	for(int i = 1; i <= 10; i++)
		counter();
	return 0;
}

void counter()
{
	static int c;
	c++;
	cout << "Сколько раз вызывалась эта функция? " << c << endl;
}