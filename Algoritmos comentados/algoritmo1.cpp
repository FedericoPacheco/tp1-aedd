#include <iostream>

using namespace std;

int main() {
	
	int n, sum;	//2 operaciones de declaración, porque se declaran dos variables enteras.
	
	cin >> n;	//1 operación de entrada, porque ingresa una variable por teclado.
	
	sum= n * (n+1) / 2;	/*3 operaciones algebraicas, porque primero se incrementa en 1 la variable "n", se divide por 2 y luego se multiplica por "n"; 
	más 1 operación de asignación, porque se le asigna ese valor a la variable "sum". 4 operaciones en total.*/
	
	cout << "Sumatoria= " << sum << endl;	/*2 operaciones de salida, porque se muestra un mensaje por pantalla y el valor de la variable "sum"; más
	1 operación de salto de línea. 3 operaciones en total.*/
	
	return 0;
}
