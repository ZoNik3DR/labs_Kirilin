#include <iostream>
#include <cmath>
using namespace std;
void zad14()
{
	int a, b;
	for (int i = 10; i < 100; i++)
	{
		a = i / 10;
		b = i % 10;
		if (i == (3*a*b))
		{
			cout << i << endl;
			break;
		}
	}
}