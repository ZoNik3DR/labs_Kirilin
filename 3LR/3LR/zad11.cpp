#include <iostream>
#include <cmath>
using namespace std;
void zad11()
{
	int a, b;
	for (int i = 10; i < 100; i++)
	{
		a = i / 10;
		b = i % 10;
		if (static_cast<int>(pow(a, 2) + pow(b, 2)) % 17 == 0 )
			cout << i << endl;
	}
}
