#include <iostream>

using namespace std;

class _time
{
	private:
		int h, m, s;
	public:
		_time(void) : h(0), m(0), s(0) { }
		_time(int hh, int mm, int ss) : h(hh), m(mm), s(ss) { }
		void show(void) const;
		void sum(_time t1, _time t2);
};

int main()
{
	_time tt1(55, 8, 51), tt2(89, 4, 8), tt3;
	tt3.sum(tt1, tt2);
	tt3.show();
	return 0;
}

void _time::show(void) const
{
	if(h < 12)
		cout << h;
	else
		cout << h % 12;
	cout << ':' << m << ':' << s << endl;
}

void _time::sum(_time t1, _time t2)
{
	s = t1.s + t2.s;
	m = t1.m + t2.m + s / 60;
	s %= 60;
	h = t1.h + t2.h + m / 60;
	m %= 60;
}