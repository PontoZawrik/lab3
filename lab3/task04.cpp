#include "main.h"

void task04() {
	float x, y;

	cout << "������� x: ";
	cin >> x;
	cout << "������� y: ";
	cin >> y;

	cout << "t = " << max(min(x, 5), max(y, 0)) / 5.0 << endl;

	return;
}