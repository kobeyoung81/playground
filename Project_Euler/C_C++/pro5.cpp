#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int list[21];
	int prim[8] = {2, 3, 5, 7, 11, 13, 17, 19};
	long result = 1;
	for (int i = 1; i <= 20; i++)
	{
		list[i] = i;
	}
	for (int i = 0; i < 8; i++)
	{
		while(1)
		{
			bool flag = false;
			for (int j = 1; j <= 20; j++)
			{
				if ((list[j] % prim[i]) == 0)
				{
					list[j] /= prim[i];
					flag = true;
				}
			}	
			if (!flag)
			{
				break;
			}
			else
			{
				result *= prim[i];
			}
		}
	}
	cout << "Result: " << result << endl;
}
