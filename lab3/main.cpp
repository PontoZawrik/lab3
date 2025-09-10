#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double x, y;
	short int num;

	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Меню:\n1-расчитать sh(x)\n2-расчитать x^2\n3-расчитать экспоненту exp(x)\nВыберите пункт меню: ";
	cin >> num;

	double func;
	switch (num) {
		case 1: {
			func = sinh(x);
		} break;

		case 2: {
			func = pow(x, 2);
		} break;

		case 3: {
			func = exp(x);
		} break;

		default: {
			cout << "Такого варианта нет.\n";
			system("pause");
			return 0;
		}
	}

	cout << "f(x) = " << func << endl;
	double result;

	if (x > y) {
		result = pow(abs(func - y), 1.0 / 3.0) + tan(func);
	}
	else if (y > x) {
		result = pow(y - func, 3) + cos(func);
	}
	else {
		result = pow(func + y, 2) + pow(x, 3);
	}

	cout << "Результат: " << result << endl;
}