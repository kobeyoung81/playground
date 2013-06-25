#include "high_precision.h"

string add(string augend, string addend)
{
	if (!isInteger(addend))
	{
		return augend;
	}
	
	string result;
	int carry = 0, i = 0;
	augend = revert(augend);
	addend = revert(addend);
	int max = augend.length() > addend.length() ? augend.length() : addend.length();
	
	while (carry != 0 || i < max)
	{
		if (i < addend.length())
		{
			carry += addend[i] - '0';
		}

		if (i < augend.length())
		{
			carry += augend[i] - '0';
		}

		result.push_back((carry % 10) + '0');
		carry /= 10;
		
		i++;
	} 
	return revert(result);
}

string revert(string str)
{
	string new_str(str);
	
	for (int i = 0; i < str.length(); i++)
	{
		new_str[i] = str[str.length() - i - 1];
	}

	return new_str;
}

bool isInteger(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return false;
		}
	}
	
	return true;
}
