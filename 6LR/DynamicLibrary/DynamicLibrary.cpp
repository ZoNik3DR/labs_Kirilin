#include "DynamicLibrary.h"
#include <iostream>
using namespace std;

double integral_1(int n)
{
	double a = 0.8, b = 2.4;
	double h = (b - a) / n;
	double I = 0, sum = 0, x, fx;
	for (int i = 0; i < n - 1; i++)
	{
		x = a + i*h;
		fx = (sqrt(0.4*pow(x, 2) + 1.5)) / (2.5 + sqrt(2 * x + 0.8));
		sum += fx;
	}
	I = h * sum;
	return I;
}
double integral_2(int n)
{
	double a = 0.4, b = 1.2;
	double h = (b - a) / n;
	double I = 0, sum = 0, x, fx;
	for (int i = 1; i < n; i++)
	{
		x = a + i*h;
		fx = (cos(pow(x, 2) + 0.8)) / (1.5 + sin(0.6*x + 0.5));
		sum += fx;
	}
	I = h * sum;
	return I;
}
double integral_3(int n)
{
	double a = 0.6, b = 1.5;
	double h = (b - a) / n;
	double I = 0, sum = 0, x, fx;
	for (int i = 0; i < n - 1; i++)
	{
		x = a + i*h + h / 2;
		fx = 1 / (sqrt(1 + 2 * pow(x, 2)));
		sum += fx;
	}
	I = h * sum;
	return I;
}
double integral_4(int n)
{
	double a = 0.4, b = 0.8;
	double h = (b - a) / n;
	double I = 0, sum = 0, x, fx, fx0, fxn;
	x = a;
	fx0 = (tan(pow(x, 2) + 0.5)) / (1 + 2 * pow(x, 2));
	x = a + n*h;
	fxn = (tan(pow(x, 2) + 0.5)) / (1 + 2 * pow(x, 2));
	for (int i = 1; i < n - 1; i++)
	{
		x = a + i*h + h / 2;
		fx = (tan(pow(x, 2) + 0.5)) / (1 + 2 * pow(x, 2));
		sum += fx;
	}
	I = h * (((fx0 + fxn) / 2) + sum);
	return I;
}