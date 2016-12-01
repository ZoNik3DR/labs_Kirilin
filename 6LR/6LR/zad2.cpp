
#include <iostream>
#include <cmath>
using namespace std;

void arrayinput(int *arr, size_t size)
{
	cout << "¬ведите элементы массива: ";
	for (size_t i = 0; i < size; i++)
		cin >> arr[i];
}

int count(int *arr, size_t start, size_t end) 
{
	if (end - start < 3) 
	{
		int sum = 0;
		for (size_t i = start; i < end; ++i)
			sum += ((cos(pow(arr[i], 2.0)) > 0) && (arr[i] < 0));
		return sum;
	}

	size_t div = start + ((end - start) / 3);
	int a = count(arr, start, div); 
	int b = count(arr, div, end); 
	return a + b;
}

void zad2()
{
	cout << "¬ведите размерность массива" << endl;
	size_t N = 0;
	cin >> N;
	int *B = new int[N];
	arrayinput(B, N);
	int c = count(B, 0, N);
	cout << "Otvet: " << c << endl;


}

