#include <iostream>
#include <conio.h>
using namespace std;
void zad1();
void zad2();

int main(int argc, char* arv[])
{
	setlocale(0, "rus");
	cout << "1. Задание 1 " << endl;
	cout << "2. Задание 2 " << endl;
	int x = 0;
	cin >> x;
	switch (x)
	{
	case 1:
		zad1();
		break;
	case 2:
		zad2();
		break;
	}


	_getch();
	return 0;
}