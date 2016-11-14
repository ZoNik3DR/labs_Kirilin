#include <iostream>
#include <conio.h>
using namespace std;
void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();
void zad8();
void zad9();
void zad10();
void zad11();
void zad12();
void zad13();
void zad14();
void zad15();
void zad16();
void zad17();
void zad18();
void zad_19();
int main(int argc, char *argv[])
{
	setlocale(0, "rus");
	int c = 0;
	cout << "1. Задание 1 общее" << endl;
	cout << "2. Задание 2 общее" << endl;
	cout << "3. Задание 3 общее" << endl;
	cout << "4. Задание 1 индивидуальное" << endl;
	cout << "5. Задание 2 индивидуальное" << endl;
	cout << "6. Задание 3 индвидуальное" << endl;
	cout << "7. Задание 1 дополнительное " << endl;
	cout << "8. Задание 2 дополнительное" << endl;
    cout << "9. Задание 3 дополнительное" << endl;
	cout << "10. Задание 4 дополнительное" << endl;
	cout << "11. Задание 5 дополнительное" << endl;
	cout << "12. Задание 6 дополнительное" << endl;
	cout << "13. Задание 7 дополнительное" << endl;
	cout << "14. Задание 8 дополнительное" << endl;
	cout << "15. Задание 9 дополнительное" << endl;
	cout << "16. Задание 10 дополнительное" << endl;
	cout << "17. Задание 11 дополнительное" << endl;
	cout << "18. Задание 1 дополнительное*" << endl;
	cout << "19. Задание 2 дополнительное*" << endl;
	cout << "Выберите задание: ";

	cin >> c;

	switch (c)
	{
		case 1:
			zad1();
			break;
		case 2:
			zad2();
			break;
		case 3:
			zad3();
			break;
		case 4:
			zad4();
			break;
		case 5:
			zad5();
			break;
		case 6:
			zad6();
			break;
		case 7:
			zad7();
			break;
		case 8:
			zad8();
			break;
		case 9:
			zad9();
			break;
		case 10: 
			zad10();
			break;
		case 11: 
			zad11();
			break;
		case 12: 
			zad12();
			break;
		case 13:
			zad13();
			break;
		case 14:
			zad14();
			break;
		case 15:
			zad15();
			break;
		case 16:
			zad16();
			break;
		case 17:
			zad17();
			break;
		case 18:
			zad18();
			break;
		case 19: 
		zad_19();
			break;

		

	}
	return 0;
}
