#include <iostream>
#include <cmath>
using namespace std;
void zad10()
{
	int a, b, i;
	for (i = 100; i < 1000; i++)
	{
		a = i / 10;
		b = i % 10;
		if (pow(a, 2) - pow(b, 2) == i)
			cout << i << endl;
	}

}