#include <iostream>
using namespace std;
void zad2()
{

	const size_t k = 10;
	
	int a[k] = { 1,2,3,4,5,5,4,3,2,1 }; 
	// из условия не совсем понятно,
	//должен ли пользователь вводить элементы массива самостоятельно или нет. 
	//Если должен - убрать закомментированную часть кода.
	// Если же нет - то для примера я взял симметричный массив.

	/*
	cout << k << endl;
	cout << "Введите k элементов массива, который вы хотите проверить на симметричность" <<endl;
	for (int i=0; i<k; i++)
		cin >>a[i];
	*/
	bool s = true;
	for (int i = 0; i < k / 2; i++)
	{
		if (a[i] != a[k - 1 - i])
		{
			s = false;
			break;
		}
	}
	for (int i = 0; i < k; i++) 
	{
		cout << a[i] << " ";
	}
	cout << endl;
	if (s) 
		cout << "Массив симметричен" << endl;
	else 
		cout << "Массив не симметричен" << endl;
}