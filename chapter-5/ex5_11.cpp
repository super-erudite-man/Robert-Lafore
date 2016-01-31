#include <iostream>

using namespace std;

struct sterling
{
	int pounds, shillings, pence;
};

sterling get(void);
sterling sum(sterling s1, sterling s2);
void put(sterling s);

int main()
{
	sterling st1, st2, st;
	st1 = get();
	st2 = get();
	st = sum(st1, st2);
	put(st);
}

sterling get(void)
{
	sterling st;
	cout << "Введите денежную сумму в формате ФУНТЫ.ШИЛЛИНГИ.ПЕНСЫ: ";
	char ch;
	cin >> st.pounds >> ch >> st.shillings >> ch >> st.pence;
	return st;
}

sterling sum(sterling s1, sterling s2)
{
	sterling s;

	s.pence = (s1.pence + s2.pence) % 12;
	s.shillings = (s1.shillings + s2.shillings + (s1.pence + s2.pence) / 12) % 20;
	s.pounds = s1.pounds + s2.pounds + (s1.shillings + s2.shillings + (s1.pence + s2.pence) / 12) / 20;
	
	return s;
}

void put(sterling s)
{
	cout << "Сумма равна " << s.pounds << '.' << s.shillings << '.' << s.pence << endl;
}