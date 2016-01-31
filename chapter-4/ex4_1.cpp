#include <iostream>

using namespace std;

struct phone
{
	int city, station, sub;
};

int main()
{
	phone ph1 = {212, 767, 8900}, ph2;
	cout << "Введите код города, номер станции и номер абонента:\n";
	cin >> ph2.city >> ph2.station >> ph2.sub;
	cout << "Мой номер: (" << ph1.city << ") " << ph1.station << '-' << ph1.sub << endl
		 << "Ваш номер: (" << ph2.city << ") " << ph2.station << '-' << ph2.sub << endl;
	return 0;
}