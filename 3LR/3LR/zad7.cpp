#include <iostream>
using namespace std;

void zad7()
{
	int itmp, isum, ixj, jtmp, jsum; 
	bool ok; 
	for (int i = 10; i < 100; ++i)
	{
		itmp = i; isum = 0;
		while (itmp > 0)
		{
			isum += itmp % 10; 
			itmp /= 10; 
		}

		ok = true;
		for (int j = 2; j < 10; ++j)
		{
			ixj = i*j;

			jtmp = ixj; jsum = 0;
			while (jtmp > 0)
			{
				jsum += jtmp % 10;
				jtmp /= 10;
			}

			if (isum != jsum)
			{
				ok = false;
				break;
			}
		}

		if (ok)
		{
			cout << i << endl;
		}
	}
}

