//prog7_3, 傳參照到函數
#include <iostream>
#include <cstdlib>
using namespace std;

void add10(int &, int &);

int main(void)
{
	int a = 20, b = 50;
	cout << "befre calling add10(): ";
	cout << "a =" << a << ", b=" << b << endl; //印出a、b的值
	
	add10(a, b);
	
	cout << "after called add10(): ";
	cout << "a=" << a << ", b=" << b << endl; //印出a、b的值
	//system("pause");
	return 0;
}

void add10(int &i, int &j)
{
	i = i + 10;
	j = j + 10;
	return;
}