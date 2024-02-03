#include <iostream>

using namespace std;

int main(){   
	int n, sum=0; 	//2 operaciones de declaración, porque se declaran dos variables enteras.
	cin >> n; 	//1 operación de entrada, porque ingresa una variable por teclado.
	for ( int i= 1; i<=n; i++)	/*1 operación de declaración, porque se declara una variable entera; más 1 operación de asignación, porque se le asigna
	un valor a dicha variable. 2 operaciones en total.
		
		Ejecución del ciclo for. 
		Si i==n. 2 operaciones de comparación, porque se compara la variable "i" con el menor o igual y repite el ciclo una última vez.
		
		Si i!=n. 1 operación de comparación, porque se compara la variable "i" con el menor.*/
		
		sum= sum+i; /*1 operación algebraica, porque se le suma 1 a la variable "sum"; más 1 operación de asignación, porque se le asigna ese resultado 
	a esa misma variable. 2 operaciones en total.
	
		Luego de un ciclo. 
		 1 operación algebraica, porque se suma 1 a la variable "i"; más una operación de asignación, porque se le asigna ese
	resultado a la variable "i". 2 operaciones en total.
	
		Finaliza el ciclo for
		2 operaciones de comparación, porque se compara la variable "i" con el menor y luego con el igual y da como resultado falso.*/
	
	cout << "Sumatoria= " << sum << endl;	/*2 operaciones de salida, porque se muestra un mensaje por pantalla y el valor de la variable "sum"; más
	1 operación de salto de línea. 3 operaciones en total.*/
	return 0;
}
