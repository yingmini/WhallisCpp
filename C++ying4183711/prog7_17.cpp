//prog7_17
#include <iostream>
#include <cstdlib>
using namespace std;
#include "C:\area.h"

int main(void)
{
	float base,height;
	
	cout << "Input the base of triangle:";
	cin >> base;
	cout << "Input the height of triangle:";
	cin >> height;
	cout << "The area of triangle is " << TRIANGLE(base, height) << endl;
	//system("pause");
	return 0;
}