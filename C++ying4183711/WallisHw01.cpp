#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
	int abc;
	
	cout << ":";
	cin >> abc;
	
	if(abc < 0)
	{
		cout << abc << "琌璽计" << endl;
	}
	else if(abc < 50 && abc > 0)
	{
		cout << abc << "琌50俱计" << endl;
	}
	else if(abc >= 50)
	{
		cout << abc << "琌单50俱计" << endl;
	}
	return 0;
}