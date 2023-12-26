#include<iostream>

using namespace std;

class Demo
{
	int length, width;
public:
	Demo()

	{
		cout << "First constructor called" << endl;
	}
	Demo(int x, int y)
	{
		length = x;
		width = y;
		cout << "Second constructor called" << endl;
	}
	
};
int main()
{
	Demo O1;        // First constructor called
	Demo rect();	// This is not a constructor but rather a function which takes no argument and return a obj with type Demo.
	Demo O2(1, 2);	// Second constructor called.
	
}