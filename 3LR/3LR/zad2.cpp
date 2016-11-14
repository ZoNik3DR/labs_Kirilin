#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void zad2()
{
	setlocale(0, "rus");
	double d, e = 0.001, sum = 0;
	int n = 0;
	do
	{   
		d = 1 / pow(2, n) + 1 / pow(3, n);
		sum += d;
		cout << n << " " << d << " " << sum << endl;
		++n;
	}
	while (d > e);
	cout << "Ответ: " << sum << endl;
} 

