/*
#include <iostream>
using namespace std;

void zad4()
{
	
		int n, nval;
		double x;
		cout << "Кол-во членов ряда ";
		cin >> n;
		cout << " От скольких чисел посчитать функцию: ";
		cin >> nval;
		for (int g = 0; g < nval; g++) {
			double x;
			do {
				cout << " Введите x: ";
				cin >> x;
			} while (x < 0.1 || x>1);
			double row = 0.0;
			double funct = 0.25*((x + 1) / pow(x, 0.5)*sinh(pow(x, 0.5)) - cosh(pow(x, 0.5)));
			for (int i = 1; i <= n; i++) 
			{
				row += pow(i, 2) / cos(2 * i + 1)*pow(x, i);
			}
			cout << " Значение посчитанное с помощю ряда: " << row << endl;
			cout << " Значение посчитанное с помощю функции: " << funct << endl << endl;

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
	cout << "Введите количество членов ряда" << endl;
	cin >> n;
	cout << "Введите количество чисел от которых считать функцию" << endl;
	cin >> q;
	for (int j = 0; j < q; j++)
	{
		double x;
		do
		{
			cout << " Введите x: ";
			cin >> x;
		} while (x < 0.1 || x > 1);
		double range = 0.0;
		double fx = atan(x);
		for (int i = 1; i <= n; i++)
		{
			range = pow(-1, n)*pow(x, (2 * n + 1)) / (2 * n + 1);
		}
		cout << "Значение с помощью ряда - " << range << endl;
		cout << "Значение с помощью функции - " << fx << endl;

	}


}

