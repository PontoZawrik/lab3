#include "main.h"

void task03() {
	double c, d, k, z, x;

	cout << "������� ����� (c, d, k): ";
	cin >> c >> d >> k;
	cout << "������� z: ";
	cin >> z;

	if (z >= 0) {
		x = pow(z, 3);
		cout << "x = z^3: " << x << endl;
	}
	else {
		x = pow(z, 2) - z;
		cout << "x = z^2 - z = " << x << endl;
	}

	cout << "���������: " << pow(sin(c * x + pow(d, 2) + k * pow(x, 2)), 3) << endl;

	return;
}