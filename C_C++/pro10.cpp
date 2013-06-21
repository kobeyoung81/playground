#include <iostream>
#include <cmath>
using namespace std;

#define LIST_LENGTH 2000000

int main()
{
	bool * list = new bool[LIST_LENGTH];
	for (int i = 2; i < LIST_LENGTH; i++) 
	{
		list[i] = true;
	}
	int threshold = sqrt(LIST_LENGTH);
	int index = 2;
	while (index <= threshold)
	{
		if (list[index])
		{
			for (int j = 2; index * j < LIST_LENGTH; j++)
			{
				list[index * j] = false;
			}
		}	
		index++;	
	}
	long long int sum = 0LL;
	for (int i = 2; i < LIST_LENGTH; i++)
	{
		if (list[i])
		{
			//cout<<i<<endl;
			sum += i;
		}
	}
	cout << "Result: " << sum << endl;
}
