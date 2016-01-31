#include <iostream>

using namespace std;

int main()
{
	double gallon, foot;
	const double GALLON_IN_FOOT = 7.481;
	cout << "Введите число галлонов: ";
	cin >> gallon;
	foot = gallon / GALLON_IN_FOOT;
	cout << gallon << " gal равно " << foot << " фут3" << endl;
	return 0;
}