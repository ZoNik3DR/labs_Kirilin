#include <iostream>
using namespace std;
void zad9()
{
	int a, b, c,i;
	for (i = 100; i < 1000; i++)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		if (a + c == b)
			cout << i << endl;
	}




}