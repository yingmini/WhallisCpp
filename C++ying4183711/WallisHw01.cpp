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
		cout << abc << "�O�t�ơC" << endl;
	}
	else if(abc < 50 && abc > 0)
	{
		cout << abc << "�O�p��50����ơC" << endl;
	}
	else if(abc >= 50)
	{
		cout << abc << "�O�j�󵥩�50����ơC" << endl;
	}
	return 0;
}