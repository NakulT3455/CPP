#include<iostream>

using namespace std;

class Demo
{
public:
	int x;
	int y;
	int* p;
	Demo()
	{
		p = new int();
	}
	Demo(Demo& d)
	{
		x = d.x;
		y = d.y;
		p = new int();
		*p = *d.p;
	}
	// Copy constructor expilcitely need to write to perform deep copy operation as compiler-sythesized copy constructor is always shallow.
};
int main()
{
	int z = 30;
	Demo d1;
	d1.x = 5;
	d1.y = 10;
	d1.p = &z;
	Demo d2 = d1;
	cout << d2.x << endl;
	cout << d2.y << endl;
	cout << *d2.p << endl;
	d1.x = 10;
	d1.y = 20;
	z = 60;
	cout << d2.x << endl;
	cout << d2.y << endl;
	cout << *d2.p << endl;
}