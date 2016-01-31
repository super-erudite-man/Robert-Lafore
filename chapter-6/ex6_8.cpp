#include <iostream>

using namespace std;

class simple
{
	private:
		int num;
		static int count;
	public:
		simple(void) { count++; num = count; }
		void output(void) const;
};

int simple::count = 0;

int main()
{
	simple s1, s2, s3;
	s1.output();
	s2.output();
	s3.output();
	return 0;
}

void simple::output(void) const
{
	cout << "Мой порядковый номер: " << num << endl;
}