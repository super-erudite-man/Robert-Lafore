// IDE: wxDev-C++

#include <iostream>
#include <conio.h>

using namespace std;

class tollBooth
{
	private:
		unsigned int count;
		double pay;
	public:
		tollBooth(void) : count(0), pay(0) { }
		void payingCar(void);
		void nopayCar(void);
		void display(void) const;
};

int main()
{
	char button;
	tollBooth toll;
	setlocale(LC_ALL, "Russian");
	cout << "Введите \'y\' для проезда с платой, \'n\' - для проеда без платы, \'Esc\' - для завершения:\n";
	do
	{
		button = getche();
		switch(button)
		{
			case 'y': 
				toll.payingCar(); break;
			case 'n':
				toll.nopayCar(); break;
		}
	} while(button != 27);
	toll.display();
	cin.get();
	return 0;
}

void tollBooth::payingCar(void)
{
	count++;
	pay += 0.5;
}

void tollBooth::nopayCar(void)
{
	count++;
}

void tollBooth::display(void) const
{
	cout << "\nМашин: " << count << "\nВыручка: $" << pay << endl;
}
