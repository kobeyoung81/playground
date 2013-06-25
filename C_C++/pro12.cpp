#include "lib/prime.h"

#define PRIME 1000000

long long get_multiple(long long* big, long long small)
{
	long long counter = 0;
	while ( *big % small == 0)
	{
		counter++;
		*big = *big / small;
	}

	return counter;
}

int main()
{
	vector<long long> primes = primes_below(PRIME, false);
	
	int counter = 0;

	long long triangle = 1, adder = 2;

	while ( counter <= 500 )
	{
		triangle += adder;

		long long temp = triangle;
		
		long long answer = 1;

		for (long long index = 0; index < primes.size(); index++)
		{
			if (primes[index] <= temp)
			{
				long long mul = get_multiple(&temp, primes[index]);
				if (mul > 0)
				{
					answer *= mul + 1;
				}
			} 
			else 
			{
				break;
			}
			
		}	

		counter = answer;

		adder++;	
	}

	cout << "Answer is: " << triangle << endl;
}
