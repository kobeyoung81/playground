#include <iostream>

using namespace std;

int main()
{
	long a = 1, b = 2, c = 3;
	long long sum = 2;
	while (1)
	{
		if (c>=4000000) {
			break;
		}
		if(c%2==0)
		{
			sum+=c;
		}
		a=b;
		b=c;
		c=a+b;
	}
	cout<<sum;
	return 0;
}
