/*
#include <iostream>
using namespace std;

void zad4()
{
	
		int n, nval;
		double x;
		cout << "���-�� ������ ���� ";
		cin >> n;
		cout << " �� �������� ����� ��������� �������: ";
		cin >> nval;
		for (int g = 0; g < nval; g++) {
			double x;
			do {
				cout << " ������� x: ";
				cin >> x;
			} while (x < 0.1 || x>1);
			double row = 0.0;
			double funct = 0.25*((x + 1) / pow(x, 0.5)*sinh(pow(x, 0.5)) - cosh(pow(x, 0.5)));
			for (int i = 1; i <= n; i++) 
			{
				row += pow(i, 2) / cos(2 * i + 1)*pow(x, i);
			}
			cout << " �������� ����������� � ������ ����: " << row << endl;
			cout << " �������� ����������� � ������ �������: " << funct << endl << endl;

		}
	

}

*/

#include <iostream>
#include <cmath>

using namespace std;


void zad4()
{
	int q, n;
	setlocale(0, "rus");
	cout << "������� ���������� ������ ����" << endl;
	cin >> n;
	cout << "������� ���������� ����� �� ������� ������� �������" << endl;
	cin >> q;
	for (int j = 0; j < q; j++)
	{
		double x;
		do
		{
			cout << " ������� x: ";
			cin >> x;
		} while (x < 0.1 || x > 1);
		double range = 0.0;
		double fx = atan(x);
		for (int i = 1; i <= n; i++)
		{
			range = pow(-1, n)*pow(x, (2 * n + 1)) / (2 * n + 1);
		}
		cout << "�������� � ������� ���� - " << range << endl;
		cout << "�������� � ������� ������� - " << fx << endl;

	}


}

