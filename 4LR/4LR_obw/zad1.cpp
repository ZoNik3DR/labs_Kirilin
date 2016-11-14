
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string>
#include <algorithm>
using namespace std;

void zad1()
{
	setlocale(0, "rus");
	cout << "Введите число в девятичной системе счисления";
	int num;
	cin >> num;
	int y = num;
	int size = 0, sum = 0;
	while (y > 0)
	{
		sum = (y % 10);
		++size;
		y /= 10;
	}
	int dec = 0;
	for (int i = 0; i < size; i++)
	{
		dec += ((num % 10) * pow(9, i));
		num /= 10;
	}
	cout << "Число в десятичной: " << dec << endl;
	cout << "Переводим в семнадцатеричную" << endl;
	int temp = 0;
	string hexplus;
	for (int j = 0; dec > 0; j++)
	{
		temp = dec % 17;
		char b;
		if (temp > 9)
		{
			b = 'A' + temp - 10;
		}
		else
		{
			b = '0' + temp;
		}
		hexplus += b;
		dec /= 17;
	}
	string hexback = hexplus;
	reverse(hexback.begin(), hexback.end());


	cout << "Число в семнадцатеричной системе: " << hexback << endl;
}
