#include <iostream>
#include <Windows.h>

using namespace std;

// 4. ��������� ����� �� �������� ������������, �������� ��������� �����.

 int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a, b, P, S;

	cout << "������ �������� ����� �������" << " : ";
	cin >> a;

	cout << "������ �������� ����� �������" << " : ";
	cin >> b;

	if (a && b == 0) {

		cout << "\n������� �� ���� ���������� ����" << endl;

		return 0;
	}
	if (a == b) {

		cout << "\n������� �� ������ ���� ����������" << endl;

		return 0;
	}

	S = a * b;
	P = 2 * (a + b);

	cout << "\n�������� ������������ : " << P << "\n����� ������������ : " << S << endl;
}