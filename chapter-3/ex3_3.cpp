// IDE: wxDev-C++

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int sym, num = 0;
    setlocale(LC_ALL, "Russian");
    cout << "������� �����: ";
    while((sym = getche()) != 13)
    {
        num = num * 10 + (sym - 48);
    }
    cout << "\n�� ����� �����: " << num;
    cin.get();
    return 0;
}
