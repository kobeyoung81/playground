#include <iostream>
using namespace std;

#define LIST_LENGTH 200000

int main()
{
	bool * list = new bool[LIST_LENGTH];
	for (int i = 2; i < LIST_LENGTH; i++) 
	{
		list[i] = true;
	}
	int counter = 0, index = 2;
	while (true)
	{
		if (list[index])
		{
			counter++;
			if (counter == 10001)
			{
				break;
			}
			for (int j = 2; index * j < LIST_LENGTH; j++)
			{
				list[index * j] = false;
			}
		}	
		index++;	
	}
	delete list;
	cout << index << endl;
}
