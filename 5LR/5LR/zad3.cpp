#include <iostream>
#include <ctime>
using namespace std;
void zad3()
{
	const size_t n = 5;
	int a[n][n]{};
	srand(time(NULL)); 
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = 1 + rand() % 100;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	int minelement=150; // можно и другое число, главное чтобы оно было больше чем максимальное из сгенерированных
	for (int i=0; i<n; i++)
		for (int j = 0; j < i; j++)
	  {
			if (a[i][j] < minelement)
				minelement = a[i][j];
	  }
	cout << "Минимальный элемент среди элементов лежащих ниже главной диагонали: " << minelement << endl;

}