#include<iostream>

using namespace std;

int main()
{
	int x[2][2] = { {1,0},{0,1} };
	int y[2][2] = { {1,2},{20,-5} };
	int z[2][2] = { {0,0},{0,0} };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				
				z[i][j] += x[i][k] * y[k][j];
			}
			
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << z[i][j] << "        ";
		}
		cout << endl;
	}

}