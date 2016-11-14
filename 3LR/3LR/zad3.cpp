#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

void zad3()
{
	const double
		pi = 3.1415,
		M = 20,
		A = 0,
		B = pi / 2,
		H = (B - A) / M;

	double X, y;
	for (int i = 0; A + i*H < B; ++i)
	{
		X = A + i*H;
		y = sin(X) - cos(X);
		cout << "i=" << i << "; x=" << X << "; y=" << y << endl;
	}
}

