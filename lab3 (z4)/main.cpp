#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	float x, y;

	cout << "¬ведите x: ";
	cin >> x;
	cout << "¬ведите y: ";
	cin >> y;

	cout << "t = " << max(min(x, 5), max(y, 0)) / 5.0 << endl;

	system("pause");
	return 0;
}