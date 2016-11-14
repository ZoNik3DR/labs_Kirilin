#include <iostream>
#include <cmath>
using namespace std;
void zad15()
{
	int a, b;
	for (int i = 10; i < 100; i++)
	{
		a = i / 10;
		b = i % 10;
		if (2*(a+b) == (a*b))
			cout << i << endl;
	}
}