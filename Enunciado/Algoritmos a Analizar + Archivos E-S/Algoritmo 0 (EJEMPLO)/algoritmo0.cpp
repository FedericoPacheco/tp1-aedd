#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b;
	cout << "Ingrese dos enteros: ";
	cin >> a >> b;
	if (a >= b) {
		cout << "El m�ximo es: " << a << endl;
	}
	else {
		if (b > a) cout << "El m�ximo es: " << b << endl;
	}
	return 0;
}

