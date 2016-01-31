#include <iostream>

using namespace std;

class angle
{
	private:
		int deg;
		float min;
		char dir;
	public:
		void output(void) const;
		angle(void) : deg(0), min(0), dir(' ') { }
		angle(int _deg, float _min, char _dir) : deg(_deg), min(_min), dir(_dir) { }
		void input(void);
};

int main()
{
	angle a1(90 ,8.7 , 'S');
	a1.output();
	char ch;
	do
	{
		angle a2;
		a2.input();
		a2.output();
		cout << "Продолжить (y/n)? ";
		cin >> ch;
	} while(ch != 'n');
	return 0;
}

void angle::output(void) const
{
	cout << deg << '*' << min << '\'' << ' ' << dir << endl;
}

void angle::input(void)
{
	cout << "Введите координату: ";
	char sym;
	cin >> deg >> sym >> min >> sym >> dir;
}