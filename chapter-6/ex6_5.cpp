#include <iostream>

using namespace std;

class date
{
	private:
		int day, month, year;
	public:
		void getdate(void);
		void showdate(void) const;
};

int main()
{
	date d;
	d.getdate();
	d.showdate();
}

void date::getdate(void)
{
	char ch;
	cout << "Введите дату в формате ДД/ММ/ГГГГ: ";
	cin >> day >> ch >> month >> ch >> year;
}

void date::showdate(void) const
{
	cout << "Вы ввели: " << day << '/' << month << '/' << year << endl;
}