#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int isPalindromic(int number)
{
	stringstream stream;
	stream << number;
	string str = stream.str();
 	for (int i = 0; i < str.length() / 2; i++)
	{
		if (str[i] != str[str.length() - 1 - i])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int max = -1;
	for (int i = 100; i <= 999; i++)
	{
		for (int j = i; j <= 999; j++)
		{
			int product = i*j;
			if (isPalindromic(product) && product > max)
			{
				max = product;
			}	
		}
	}
	cout << max << endl;
}
