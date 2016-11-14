#include <iostream>
using namespace std;
void zad_19()
{
	{
		long long l = 9, j = 1, tecl = 0, n = 1, k;
		cout << "¬ведите k : " << endl;
		cin >> k;
		while (tecl + j * l < k)
		{
			tecl += j * l;
			j++;
			l *= 10;
			n *= 10;
		}
		if (tecl + j < k) tecl += j;
		while (tecl + j < k)
		{
			n++;
			tecl += j;
		}
		n++;
		long long nom = tecl + j;
		while (nom > k)
		{
			n /= 10;
			nom--;
		}
		cout << "k-€ цифра последовательности = " << n % 10 << endl;
	}

}
