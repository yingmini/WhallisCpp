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
		cout << abc << "是負數。" << endl;
	}
	else if(abc < 50 && abc > 0)
	{
		cout << abc << "是小於50的整數。" << endl;
	}
	else if(abc >= 50)
	{
		cout << abc << "是大於等於50的整數。" << endl;
	}
	return 0;
}