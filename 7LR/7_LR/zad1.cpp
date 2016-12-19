#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;



size_t outputNumber(char* p)
{
	size_t len = 0;
	long num = 0;
	bool positive = true;

	while (p[0] != ' ' && p[0] != '\0')
	{
		switch (p[0])
		{
		case '-':
			positive = false;
			break;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			num *= 10;
			num += p[0] - '0';
			break;
		}

		++p;
		++len;
	}

	if (num != 0 && num % 2 == 0)
	{
		if (!positive)
			num = -num;

		cout << num << " ";
	}

	if (p[0] != '\0')
		++len;
	return len;
}

void zad1() {
	const size_t maxlen = 80;

	cout << "Введите строку символов состоящую из цифр, разделенных пробелами";
	cout << endl;
	char *str = new char[maxlen];
	cin.ignore();
	cin.getline(str, maxlen);

	char *p = str; 
	while (p[0] != '\0')
		p += outputNumber(p);
	cout << endl;

	delete[] str;
	
}



