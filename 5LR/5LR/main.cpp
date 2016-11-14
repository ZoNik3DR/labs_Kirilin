#include <iostream>
#include <conio.h>
using namespace std;
void zad2();
void zad3();
void zad4();
int main()
{
	setlocale(0, "rus");
	cout << "Выберите задание" << endl;
	cout << "1. Задание 1 " << endl;
	cout << "2. Задание 2 " << endl;
	cout << "3. Задание 3" << endl;

	int x;
	cin >> x;
	switch (x)
	{
	case 1: 
		zad2();
		break;
	case 2: 
		zad3();
		break;
	case 3: 
		zad4();
		break;

	}
	_getch();
	return 0;

}