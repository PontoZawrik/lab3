#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double c, d, k, z, x;

	cout << "¬ведите числа (c, d, k): ";
	cin >> c >> d >> k;
	cout << "¬ведите z: ";
	cin >> z;

	if (z >= 0) {
		x = pow(z, 3);
		cout << "x = z^3: " << x << endl;
	}
	else {
		x = pow(z, 2) - z;
		cout << "x = z^2 - z = " << x << endl;
	}

	cout << "–езультат: " << pow(sin(c * x + pow(d, 2) + k * pow(x, 2)), 3) << endl;

	system("pause");
	return 0;
}