#include <iostream>
using namespace std;
void zad18()
{
	setlocale(0, "rus");
	int a, i;
	cout << "������� �����: ";
	cin >> a;
	int a0 = 0;
	for (i = 1; i < a; i++)
	{
		if (a%i == 0) 
			a0 += i;
	}
	if (a0 == a)
		cout << "��������: " << a0 << endl;
	else
		cout << "�� ��������" << endl;
}