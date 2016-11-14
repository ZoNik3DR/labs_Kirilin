
#include <iostream>
#include <ctime>
using namespace std;
void zad4()
{
	// ќп¤ть же не совсем пон¤л условие, брать матрицу NxM или NxN. —делал 2 варианта. ѕервый оставлю NxM и внизу ввиде закомментированного 
	// кода оставлю дл¤ NxN

	cout << "¬ведите матрицу размером N :  ";
	int n = 0;
		cin >> n;
	int **a = new int*[n];
	for (int i = 0; i < n; i++)
	a[i] = new int[n];
	srand(time(NULL));
	int min = 150;
	int globalmin = 0;
	int globalmax = 0;
	int max = 0;

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
	for (int i = 0; i < n; i++)
	{
		if ((i + 1) % 2 != 0)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] < min)
					min = a[i][j];
			}
			globalmin += min;
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] > max)
					max = a[i][j];
			}
			globalmax += max;
		}
		min = 150;
		max = 0;
	}
	for (int i = 0; i < n; i++)
		delete[] a[i];
	cout << "—умма наименьших элементов нечетных строк матрицы= " << globalmin << endl;
	cout << "—умма максимальных элементов четных строк матрицы = " << globalmax << endl;


}
/*
void zad4()
{
	cout << "¬ведите кол-во строк матрицы: ";
	int n, m = 0;
	cin >> n;
	cout << "¬ведите кол-во столбцов матрицы: ";
	cin >> m;
	int **a = new int*[n];
	for (int i = 0; i < n; i++)
		a[i] = new int[m];
	srand(time(NULL));
	int min = 150;
	int globalmin = 0;
	int globalmax = 0;
	int max = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			a[i][j] = 1 + rand() % 100;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		if ((i + 1) % 2 != 0)
		{
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] < min)
					min = a[i][j];
			}
			globalmin += min;
		}
		else
		{
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] > max)
					max = a[i][j];
			}
			globalmax += max;
		}
		min = 150;
		max = 0;
	}
	for (int i = 0; i < n; i++)
		delete[] a[i];
	cout << "—умма наименьших элементов нечетных строк матрицы= " << globalmin << endl;
	cout << "—умма максимальных элементов четных строк матрицы = " << globalmax << endl;


}
*/
