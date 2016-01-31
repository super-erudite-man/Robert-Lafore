#include <iostream>

using namespace std;

struct sterling
{
	int pounds, shillings, pence;
};

int main()
{
	double p, _p;
	sterling sterl;
	cout << "Введите сумму в десятичных фунтах: ";
	cin >> p;
	sterl.pounds = static_cast<int>(p);
	_p = p - sterl.pounds;
	sterl.shillings = _p * 20;
	sterl.pence = static_cast<int>(_p * 240) % 12;
	cout << "Старые фунты: " << sterl.pounds << '.' << sterl.shillings << '.' << sterl.pence << endl;
	return 0;
}