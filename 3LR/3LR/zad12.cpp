#include <iostream>
#include <cmath>
#include "fact.h"
using namespace std;
int a, b, c,s;
void zad12()
{
	int a, b,c,i;			
	for (i = 100; i <=1000; i++)
	{
		a = i / 100;
		b = (i / 10) % 10;
	    c = i % 10;
		if ((fact(a) + fact(b) + fact(c)) == i)
			cout << i << endl;
	}
}