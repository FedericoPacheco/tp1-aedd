#include <iostream>

using namespace std;

int main() {
	
	int n, sum;	//2 operaciones de declaraci�n, porque se declaran dos variables enteras.
	
	cin >> n;	//1 operaci�n de entrada, porque ingresa una variable por teclado.
	
	sum= n * (n+1) / 2;	/*3 operaciones algebraicas, porque primero se incrementa en 1 la variable "n", se divide por 2 y luego se multiplica por "n"; 
	m�s 1 operaci�n de asignaci�n, porque se le asigna ese valor a la variable "sum". 4 operaciones en total.*/
	
	cout << "Sumatoria= " << sum << endl;	/*2 operaciones de salida, porque se muestra un mensaje por pantalla y el valor de la variable "sum"; m�s
	1 operaci�n de salto de l�nea. 3 operaciones en total.*/
	
	return 0;
}
