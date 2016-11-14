
#include <iostream>
using namespace std;
void zad8()
{
	setlocale(0, "rus");
	int b, i, S, N;
	cout << "¬ведите число";
	cin >> N;
	for (i = 100; i < 1000; ++i)
	{
		int tmp = i;
		if ((S = tmp / 100 + tmp / 10 % 10 + tmp % 10) == N)
			cout << i << endl;

	}
}