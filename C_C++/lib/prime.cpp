#include "prime.h"

#define BITSET_LENGTH (1024*1024*8)

vector<long long> primes_below(long long ceiling, bool is_display)
{
	bitset<BITSET_LENGTH> bits;
	
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

	//cout << endl;
	
	return result;
}
