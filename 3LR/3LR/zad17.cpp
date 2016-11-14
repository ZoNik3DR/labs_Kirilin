#include <iostream>
using namespace std;
void zad17()
{
	setlocale(0, "rus");
	double pr;
	int a,N;
	cout << "Введите сумму вклада: " << endl;
	cin >> a;
	cout << "Введите срок вклада: " << endl;
	cin >> N;
	cout << "Введите процентную ставку: " << endl;
	cin >> pr;
	pr /= 100;
	for (int i=1; i <= N; i++)
		a += a * pr;
	cout << "Конечная сумма: " << a << endl;
}