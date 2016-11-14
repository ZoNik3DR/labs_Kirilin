#include <iostream>
using namespace std;

int gcd(int u, int v)
{
	if (u == v)
		return u;
	if (u == 0)
		return v;
	if (v == 0)
		return u;
	if (~u & 1) 
	{
		if (v & 1) 
			return gcd(u >> 1, v);
		else 
			return gcd(u >> 1, v >> 1) << 1;
	}

	if (~v & 1) 
		return gcd(u, v >> 1);

	if (u > v)
		return gcd((u - v) >> 1, v);

	return gcd((v - u) >> 1, u);
}
void zad2() {
	cout << "Введите число: ";
	int tmp;
	cin >> tmp;

	if (gcd(tmp, 3) == 1)
		cout << " Не делится на 3" << endl;
	else
		cout << " Делится на 3" << endl;
	if (gcd(tmp, 47) == 1)
		cout << " Не делится на 47" << endl;
	else
		cout << " Делится на 47" << endl;

	if (gcd(tmp, 197) == 1)
		cout << " Не делится на 197" << endl;
	else
		cout << " Делится на 197" << endl;

}
