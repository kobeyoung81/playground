#include "factorial.h"

long long factorial(long long n)
{
	long long result = 1;
	for (long long i = 2; i <= n; i++)
	{
		result *= i;
	} 	

	return result;
}
