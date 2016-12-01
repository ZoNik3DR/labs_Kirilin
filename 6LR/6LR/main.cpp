#include <iostream>
#include <conio.h>
using namespace std;
void zad1();
void zad2();
void zad_3();
int main()
{
	setlocale(0, "rus");
	int a = 0;
	cout << "10 вариант" << endl;
	cout << "Выберите номер задания: " << endl;
	cout << "1. Задание 1 " << endl;
	cout << "2. Задание 2 " << endl;
	cout << "3. Задание 3 " <<endl;
	cout << "Другие символы для выхода" << endl;
	cin >> a;
	switch (a)
	{
	case 1: zad1();
		break;
	case 2: zad2();
		break;
	case 3: zad_3();
		break;	
	}

	
	return 0;
}