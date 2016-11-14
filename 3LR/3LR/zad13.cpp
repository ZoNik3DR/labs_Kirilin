#include <iostream>
using namespace std;
void zad13()
{
	int a, b;
	for (int i = 10; i < 100; i++)
	{
		a = i / 10;
		b = i % 10;
		if (pow((a + b), 3) == pow(i, 2))
		{
			cout << i << endl;
			break;
		}
	}
}