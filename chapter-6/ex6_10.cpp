#include <iostream>

using namespace std;

struct angle
{
	int deg;
	float min;
	char dir;
};

class ship
{
	private:
		int num;
		angle x, y;
	public:
		void input(void);
		void output(void) const;
};

int main()
{
	ship s1, s2, s3;
	s1.input();
	s2.input();
	s3.input();
	s1.output();
	s2.output();
	s3.output();
	return 0;
}

void ship::input(void)
{
	cout << "Номер корабля: ";
	cin >> num;
	char ch;
	cout << "Координата корабля: ";
	cin >> x.deg >> ch >> x.min >> ch >> x.dir >> y.deg >> ch >> y.min >> ch >> y.dir;
}

void ship::output(void) const
{
	cout << "Корабль №" << num << ": " << x.deg << '*' << x.min << "\' " << x.dir << ' ' << y.deg << '*' << y.min << "\' " << y.dir << endl;
}