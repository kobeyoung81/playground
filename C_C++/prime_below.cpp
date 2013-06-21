#include <vector>
#include <bitset>
#include <cmath>
#include <iostream>

using namespace std;

vector<long long> prime_below(long long ceiling, bool is_display)
{
	bitset<1024000> bits;
	
	bits.set();
	bits.set(0, 0);
	bits.set(1, 0);
	bits.set(2, 1);

	for (long long i = 2; i <= sqrt(ceiling) ; i++)
	{
		long long multiplier = 2;
		long long multiple = 1;
		while ((multiple = multiplier * i) <= ceiling)
		{
			bits.set(multiple, 0);
			multiplier++;
		}
	}

	vector<long long> result;
	
	for (long long i = 2; i <= ceiling; i++)
	{
		if (bits[i]) 
		{
			result.push_back(i);
			if (is_display)
			{
				cout << i << " ";
			}
		}
	}

	cout << endl;
	
	return result;
}
