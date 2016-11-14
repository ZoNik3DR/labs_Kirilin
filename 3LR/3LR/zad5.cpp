#include <iostream>
using namespace std;

void zad5()
{
	const double xmin = -1, xmax = 0;
	
	cout << "¬ведите на сколько частей разделить область: ";
	int n;
	cin >> n;
	if (n < 1)
	{
		cout << "„астей не может быть меньше 1!" << endl;
		return;
	}

	double step = (xmax - xmin) / n;

	double x0 = xmin, y0 = fabs(exp(x0)*tan(x0)+sin(pow(x0,2))+0.1);
	double y;
	for (double x = xmin; x < xmax; x += step)
	{
		y = fabs(exp(x)*tan(x) + sin(pow(x, 2)) + 0.1);
		if (y < y0)
		{
			y0 = y;
			x0 = x;
		}
	}

	cout << "x=" << x0 << "; y=" << y0 << endl;
}



