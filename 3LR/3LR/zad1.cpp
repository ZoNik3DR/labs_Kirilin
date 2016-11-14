#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;


void zad1()
{
	setlocale(0, "rus");
	int N = 0, a, b;
	int i = 0;
	while (++i < 31)
	{
		if (i % 2 == 0)
			a = i / 2;
		else
			a = i;
		if (i % 2 == 0)
			b = pow(i,3);
		else
			b = pow(i,2); 
		N += pow(a - b, 2);
		cout << i << " " << a << " " << b << " " << N << endl;
	}
	cout << "Ответ: " << N << endl;
}