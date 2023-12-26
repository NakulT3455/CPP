#include <iostream>
#include<string>

using namespace std;

class Demo
{
	int num;
	char* charArray;
public:
	Demo(int inputNum, string inputString)
	{
		num = inputNum;
		int len = 0;
		int i = 0;
		while (inputString[i] != '\0')
		{
			len++;
			i++;
		}
		charArray = new char[len];
		for (int element = 0; element < len; element++)
		{
			charArray[element] = inputString[element];
		}
	}
	void Print()
	{
		cout << charArray << endl;
	}
};
int main()
{
	string ipString;
	cout << "Enter a string" << endl;
	getline(cin,ipString);
	Demo obj(5, ipString);
	obj.Print();
}