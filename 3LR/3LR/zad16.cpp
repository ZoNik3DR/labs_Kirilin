
#include <iostream>
using namespace std;
void zad16()
{
	setlocale(0, "rus");
	int i, a, b, M, S;
	cout << "Введите число M : " << endl;
	cin >> M;
	S = sqrt(M);
	for (i = 1; i <= S; i++)
	{
		a = M - i * i;
		b = sqrt(a);
		if (i * i + b * b == M)
		{
			cout << "Можно" << endl;
			cout << M << " = " << i << "^2 + " << b << "^2" << endl;
			return;
		}
	}
	cout << "Нельзя" << endl;
	cout << endl;
}
