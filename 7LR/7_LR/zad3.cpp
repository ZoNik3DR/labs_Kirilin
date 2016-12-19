

#include "stdafx.h"
#include <iostream>
#include <string.h>
#include <Windows.h>
using namespace std;


void delprob(char *text, char *ptr, size_t len)
{
	for (size_t i = 0, j = 0; i < len + 1; i++, j++)
	{
		if (text[i] != ' ' || text[i] == '\0')
		{
			ptr[j] = text[i];
		}
		else
		{
			j--;
		}
	}
}
void polindromcheck(char *ptr, size_t newlen, bool *flag)
{
	for (size_t i = 0, j = newlen - 1; i < j; i++, j--)
	{
		if (ptr[i] != ptr[j])
		{
			*flag = 0;
			break;
		}
	}
}


void textcheck(char *text)
{
	size_t len = strlen(text);
	char *ptr = new char[len + 1];
	delprob(text, ptr, len);
	size_t newlen = strlen(ptr);
	bool flag = 1;
	polindromcheck(ptr, newlen, &flag);
	if (flag == 1) {
		cout << "Палиндром";
	}
	else cout << "Не палиндром";
	cout << endl;
}




void zad3()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	size_t x;
	const size_t size = 80;
	cout << "Введите кол-во строк: ";
	cin >> x;
	cin.ignore();
	char **text = new char*[x];
	for (size_t i = 0; i < x; i++)
	{
		text[i] = new char[size];
	}
	cout << "Введите строки которые хотите проверить";
	cout << endl;
	for (size_t i = 0; i < x; i++)
	{
		cout << i + 1 << "-я строка:";
		cin.getline(text[i], size);
		cin.ignore();
		cout << endl;

	}
	for (size_t i = 0; i < x; i++)
	{
		textcheck(*(text+i));
	}
	for (size_t i = 0; i < x; i++)
	{
		delete[] text[i];
	}
	delete[] text;
}
