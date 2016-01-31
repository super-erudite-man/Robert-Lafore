// Need -std=c++11 flag

#include <iostream>

using namespace std;

class queue
{
	private:
		static const int MAX = 100;
		int a[MAX];
		int head, tail;
	public:
		queue() {head = 0; tail = 0;}
		void put(int value);
		int get(void);
};

int main()
{
	queue q;
	q.put(11);
	q.put(22);
	cout << "1: " << q.get() << endl;
	cout << "2: " << q.get() << endl;
	q.put(33);
	q.put(44);
	q.put(55);
	q.put(66);
	cout << "3: " << q.get() << endl;
	cout << "4: " << q.get() << endl;
	cout << "5: " << q.get() << endl;
	cout << "6: " << q.get() << endl;
	return 0;
}

void queue::put(int value)
{
	a[tail++ % 100] = value;
}

int queue::get(void)
{
	return a[(100 - head--) % 100];
}