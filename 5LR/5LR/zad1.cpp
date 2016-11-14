#include <iostream>
#include <conio.h>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;
void zad1()
{
	setlocale(0, "rus");
	string hex;
	cout << "Введите число в 16ричной системе: ";
	cin >> hex;
	string hexback = hex;
	transform(hexback.begin(), hexback.end(), hexback.begin(), toupper);
	reverse(hexback.begin(), hexback.end());
	const char *hexx = hexback.c_str(); 
	long long dec = 0;
	for (int i = 0; i < hexback.length(); i++)
	{
		int num;
		if (hexx[i] >= 'a')
			num = 10 + hexx[i] - 'a'; 
		else
			num = hexx[i] - '0';
		
		dec += num * pow(16, i);
	}
	cout << dec;


}


//Задание 3 без динамического выделения памяти
/*
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
void zad4()
{
	const size_t n = 5;
	int a[n][n];
	srand(time(0));
	int min = 150;
	int globalmin = 0;
	int globalmax = 0;
	int max = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = 1 + rand() % 100;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		if ((i + 1) % 2 != 0)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] < min)
					min = a[i][j];
			}
			globalmin += min;
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] > max)
					max = a[i][j];
			}
			globalmax += max;
		}
		min = 150;
		max = 0;
	}
	cout << "Минимальное значение = " << globalmin << endl;
	cout << "Максимальное значение = " << globalmax << endl;


}
*/