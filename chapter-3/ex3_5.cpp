#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int j = 1;
	for(int i = 1; i <= 20; i++)
	{
		int space = (39 - j) / 2;
		cout << setw(space) << setfill(' ') << "" << setw(j) << setfill('X') << "" << endl;
		j += 2;
	}
	return 0;
}