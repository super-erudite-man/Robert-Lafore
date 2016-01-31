#include <iostream>

using namespace std;

int main()
{
	int guest, chair, c = 1;
	cout << "Число гостей: ";
	cin >> guest;
	cout << "Число стульев: ";
	cin >> chair;
	for(int i = 1; i <= chair; i++)
		c *= guest--;
	cout << "Число возможных размещений: " << c << endl;
	return 0;
}