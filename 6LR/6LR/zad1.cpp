#include <StaticLibrary.h>
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

void zad1()
{

	cout << "¬ведите размерность одномерного массива";
	int n = 0;
	cin >> n;
	double *x = new double[n];
	arrayinput(n, x);
	arrayoutput(n, x);
	convertarray(n, x);
	cout << endl;
	arrayoutput(n, x);
	cout << endl;


}

