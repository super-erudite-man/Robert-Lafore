#include <iostream>

using namespace std;

float circlearea(float radius);

int main()
{
	float rad, s;
	cout << "Введите значение радиуса: ";
	cin >> rad;
	s = circlearea(rad);
	cout << "Площадь равна " << s << endl;
	return 0;
}

float circlearea(float radius)
{
	return 3.1415926F * radius * radius;
}