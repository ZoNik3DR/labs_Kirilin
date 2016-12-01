#include "StaticLibrary.h"
#include <cmath>
#include <iostream>
void arrayinput(int a, double * m)
{
	for (int i = 0; i < a; i++)
	{
		m[i] = (exp(-1 / 2 * i - 2) - tan(i + 0.1));
	}
}
void arrayoutput(int a, double * m)
{
	for (int i = 0; i <a; i++)
	{
		std::cout << m[i] << " ";
	}
}
void convertarray(int a, double * m)
{
	for (int i = 0; i < a; i++)
	{
		if (m[i] < 0)
			m[i] += 0.5;
		else
			m[i] = 0.1;
	}
}