#include <iostream>
#include <cmath>
using namespace std;

int isPrime(long long int);

int main()
{
	long long int hardass = 600851475143LL;
	long long int checkpoint = sqrt(hardass);
	//cout<<checkpoint<<endl;
	for (long long int i = checkpoint; i >= 2; i--)
	{
		if ( !isPrime(i))
		{
			continue;
		}
		if ( hardass % i == 0 )
		{
			cout<<i<<endl;
			break;
		} 
	}
}

int isPrime(long long int number)
{
	long long int checkpoint = sqrt(number);
	for (long long int i = 2; i <= checkpoint;i++)
	{
		if (number%i==0)
		{
			return 0;
		}
	}
	return 1;
}
