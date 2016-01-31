#include <iostream>

using namespace std;

struct Distance
{
	int feet;
	float inches;
};

Distance max(Distance d1, Distance d2);

int main()
{
	Distance s1, s2, s;
	cout << "Введите число футов: ";
	cin >> s1.feet;
	cout << "Введите число дюймов: ";
	cin >> s1.inches;
	cout << "\nВведите число футов: ";
	cin >> s2.feet;
	cout << "Введите число дюймов: ";
	cin >> s2.inches;
	s = max(s1, s2);
	cout << "Максимальное значение равно " << s.feet << "\'-" << s.inches << "\"\n";
	return 0;
}

Distance max(Distance d1, Distance d2)
{
	double dd1, dd2;
	dd1 = d1.feet * 12.0 + d1.inches;
	dd2 = d2.feet * 12.0 + d2.inches;
	if(dd1 > dd2)
		return d1;
	else if(dd2 > dd1)
		return d2;
}