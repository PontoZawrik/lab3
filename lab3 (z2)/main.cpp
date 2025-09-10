#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double a, b;

t:	cout << "Скорость (km/h): ";
	cin >> a;
	cout << "Скорость (m/s): ";
	cin >> b;

	if (a < 0 || b < 0) {
		cout << "Отридцательная скорость.";
		goto t;
	}

	system("pause");
	return 0;
}