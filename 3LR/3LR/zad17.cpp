#include <iostream>
using namespace std;
void zad17()
{
	setlocale(0, "rus");
	double pr;
	int a,N;
	cout << "������� ����� ������: " << endl;
	cin >> a;
	cout << "������� ���� ������: " << endl;
	cin >> N;
	cout << "������� ���������� ������: " << endl;
	cin >> pr;
	pr /= 100;
	for (int i=1; i <= N; i++)
		a += a * pr;
	cout << "�������� �����: " << a << endl;
}