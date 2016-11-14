#include <iostream>
#include <cmath>
using namespace std;

void zad6()
{
	const double
		a = 2,
		b = 4,
		h = 0.5;
	double fx;
	double x = a;
	while (x <= b)
	{
		fx = 1 / (1 + pow(cosh(x), 2));
		x += h;
		cout << "x=" << x << "; y=" << fx << endl;
	}
}



/*
#include <iostream>
#include <cmath>
using namespace std;

void zad6()
{
	const double
		a = 2,
		b = 4,
		h = 0.5;
	double fx;
	for (double x = a; x <= b; x += h)
	{
		fx = 1 / (1 + pow(cosh(x), 2));
		cout << "x=" << x << "; y=" << fx << endl;
	}
}
*/

