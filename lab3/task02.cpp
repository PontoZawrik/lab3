#include "main.h"

void task02() {
	double a, b, c;

t:	cout << "Скорость (km/h): ";
	cin >> a;
	cout << "Скорость (m/s): ";
	cin >> b;

	if (a < 0 || b < 0) {
		cout << "Отридцательная скорость.\n";
		goto t;
	}

	c = a * 1000 / 3600;

	char d = '=';
	if (c > b) {
		d = '>';
	}
	else if (c < b) {
		d = '<';
	}

	cout << a << " km/h " << d << " " << b << " m/s\n";

	return;
}