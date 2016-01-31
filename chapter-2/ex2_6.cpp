#include <iostream>

using namespace std;

int main()
{
	double pound, frank, marka, yena, dollar;

	double const DOLLAR_IN_POUND = 1.487;
	double const DOLLAR_IN_FRANK = 0.172;
	double const DOLLAR_IN_MARKA = 0.584;
	double const DOLLAR_IN_YENA = 0.00955;	

	cout << "Введите сумму в долларах: ";
	cin >> dollar;
	pound = dollar / DOLLAR_IN_POUND;
	frank = dollar / DOLLAR_IN_FRANK;
	marka = dollar / DOLLAR_IN_MARKA;
	yena = dollar / DOLLAR_IN_YENA;
	cout << "Эквивалентная сумма в" << endl
		 << "\tфунтах стерлингов: " << pound << endl
		 << "\tфранках: " << frank <<endl
		 << "\tнемецких марках: " << marka << endl
		 << "\tяпонских йенах: " << yena << endl;
	return 0;
}