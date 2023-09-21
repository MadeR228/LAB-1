#include <iostream>
#include <Windows.h>

using namespace std;

// 4. Визначити площу та периметр прямокутника, заданого довжинами сторін.

 int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a, b, P, S;

	cout << "Введіть значення першої сторони" << " : ";
	cin >> a;

	cout << "Введіть значення другої сторони" << " : ";
	cin >> b;

	if (a && b == 0) {

		cout << "\nСторона не може дорівнювати нулю" << endl;

		return 0;
	}
	if (a == b) {

		cout << "\nСторони не можуть бути однаковими" << endl;

		return 0;
	}

	S = a * b;
	P = 2 * (a + b);

	cout << "\nПериметр прямокутника : " << P << "\nПлоща прямокутника : " << S << endl;
}