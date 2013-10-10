#include <iostream>
#include <string>

using namespace std;

int getInt(char c)
{
	return c - '0';
}

int main()
{
	string input;
	cin >> input;
	int result = -1;
	for (int i = 0; i < input.length() - 4; i++)
	{
		int product = getInt(input.at(i)) * getInt(input.at(i+1)) * getInt(input.at(i+2)) * getInt(input.at(i+3)) * getInt(input.at(i+4));
		if (product > result)
		{
			result = product;
		}
	}
	cout << "Result: " << result << endl;
	return 0; 
}


