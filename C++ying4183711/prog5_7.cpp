//prog5_7, �_��for�j��D9*9���k��
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
	int i, j;
	
	for(i = 1; i <= 7000000; i++)     // �~�h�j��
	{
		for(j = 1; j <= 7000000; j++)  // ���h�j��
		{
			cout << i << "*" << j << "=" << (i*j) << "\t";
		}
		cout << endl;
	}
	
	//system("pause");
	return 0;
} 