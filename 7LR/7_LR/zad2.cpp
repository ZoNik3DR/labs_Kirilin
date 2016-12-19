#include "stdafx.h"
#include <iostream>
#include <string.h>
#include <utility>
using namespace std;


size_t getlen(char* p)
{
	size_t len = 0;
	while (p[0] != ' ' && p[0] != '\0')
	{
		++len;
		++p;
	}
	return len;
}

pair<size_t, size_t> getMinMax(char* p)
{
	size_t min = getlen(p);
	size_t max = min;

	p += min;

	while (p[0] != '\0')
	{
		++p;
		const size_t len = getlen(p);
		if (len < min)
			min = len;
		if (len > max)
			max = len;
		p += len;
	}

	return make_pair(min, max);
}

void printMinMax(char* p, const pair<size_t, size_t> minmax)
{
	while (p[0] != '\0')
	{
		const size_t len = getlen(p);
		if (len == minmax.first || len == minmax.second)
		{
			char *word = new char[len + 1];
			for (size_t i = 0; i < len; ++i)
				word[i] = p[i];
			word[len] = '\0';
			cout << word << ' ';
			delete[] word;
		}

		p += len;
		if (p[0] != '\0')
			++p;
	}
}

void zad2()
{
	const size_t maxlen = 250;

	char *str = new char[maxlen];
	cout << "Введите строку: ";
	cin.ignore();
	cin.getline(str, maxlen);

	char *p = str;
	pair<size_t, size_t> minmax = getMinMax(p);
	printMinMax(p, minmax);

	delete[] str;
}