#include "main.h"

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int num;
	cout << "�������� ����� �������(1-4): ";
	cin >> num;

	switch (num) {
		case 1: task01(); break;
		case 2: task02(); break;
		case 3: task03(); break;
		case 4: task04(); break;
		default: cout << "�������� �����.\n";
	}

	system("pause");
	return 0;
}