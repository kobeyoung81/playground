#include <iostream>

using namespace std;

int main()
{
	int sum_of_squre = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum_of_squre += i*i;
	}
	cout << 5050*5050 - sum_of_squre << endl;
}
