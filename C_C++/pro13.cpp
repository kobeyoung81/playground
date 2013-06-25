#include "lib/high_precision.h"

int main()
{
	//string test1("91942213363574161572522430563301811072406154908250"), test2("46376937677490009712648124896970078050417018260538");
	//cout << add(test1, test2) << endl;	
	string* augend, *addend;
	augend = new string("0");
	addend = new string();
	while (!cin.eof())
	{
		//cin >> *addend;
		getline(cin, *addend);
		cout << "INPUT :" << *addend << endl;
		*augend = add(*augend, *addend);
		cout << "OUTPUT:" <<*augend << endl;
	}
	
	//cout << augend << endl;
}
