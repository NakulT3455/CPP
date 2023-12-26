#include <iostream>
using namespace std;

class Calculate
{
public:
	int (*ptr)(int, int);
	static int add(int x, int y)
	{
		return x + y;
	}
	static int substract(int x, int y)
	{
		return x - y;
	}
	int Operator(int a, int b)
	{
		if (ptr != nullptr)
		{
			return ptr(a, b);
		}
	}
};
int main()
{
	Calculate obj;
	obj.ptr = &Calculate::add;
	int res = obj.Operator(10, 5);
	cout << res << endl;

	obj.ptr = &Calculate::substract;
	res = obj.Operator(10, 5);
	cout << res << endl;
}