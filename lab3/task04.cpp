#include "main.h"

void task04() {
	float x, y;

	cout << "¬ведите x: ";
	cin >> x;
	cout << "¬ведите y: ";
	cin >> y;

	cout << "t = " << max(min(x, 5), max(y, 0)) / 5.0 << endl;

	return;
}