#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << setw(5) << left << "1990" << setw(5) << right << "135" << endl
		 << setw(5) << left << "1991" << setw(5) << right << "7290" << endl
		 << setw(5) << left << "1992" << setw(5) << right << "11300" << endl
		 << setw(5) << left << "1993" << setw(5) << right << "16200" << endl;
	return 0;
}