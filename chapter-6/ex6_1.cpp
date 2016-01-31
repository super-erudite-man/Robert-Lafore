#include <iostream>

using namespace std;

class Int
{
	private:
		int i;
	public:
		Int(void) : i(0) { }
		Int(int ii) : i(ii) { }
		void show(void) const;
		void sum(Int x, Int y);
};

int main()
{
	Int a1, a2(70), a3(66);
	a1.sum(a2, a3);
	cout << "a1 = "; a1.show();
	return 0;
}

void Int::show(void) const
{
	cout << i << endl;
}

void Int::sum(Int x, Int y)
{
	i = x.i + y.i;
}