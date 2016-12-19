// 7_LR.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
void zad1();
void zad2();
void zad3();
int main()
{
	setlocale(0, "rus");
	cout << "Выберите номер задание:" << endl;
	cout << "1. Задание 1" << endl;
	cout << "2. Задание 2" << endl;
	cout << "3. Задание 3" << endl;
	int x;
	cin >> x;
	switch (x)
	{
	case 1: zad1();
		break;
	case 2: zad2();
		break;
	case 3: zad3();
		break;
	}


	_getch();
	return 0;
}