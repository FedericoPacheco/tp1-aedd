#include <iostream>

using namespace std;

int main(){   
	int n, sum=0; 	//2 operaciones de declaraci�n, porque se declaran dos variables enteras.
	cin >> n; 	//1 operaci�n de entrada, porque ingresa una variable por teclado.
	for ( int i= 1; i<=n; i++)	/*1 operaci�n de declaraci�n, porque se declara una variable entera; m�s 1 operaci�n de asignaci�n, porque se le asigna
	un valor a dicha variable. 2 operaciones en total.
		
		Ejecuci�n del ciclo for. 
		Si i==n. 2 operaciones de comparaci�n, porque se compara la variable "i" con el menor o igual y repite el ciclo una �ltima vez.
		
		Si i!=n. 1 operaci�n de comparaci�n, porque se compara la variable "i" con el menor.*/
		
		sum= sum+i; /*1 operaci�n algebraica, porque se le suma 1 a la variable "sum"; m�s 1 operaci�n de asignaci�n, porque se le asigna ese resultado 
	a esa misma variable. 2 operaciones en total.
	
		Luego de un ciclo. 
		 1 operaci�n algebraica, porque se suma 1 a la variable "i"; m�s una operaci�n de asignaci�n, porque se le asigna ese
	resultado a la variable "i". 2 operaciones en total.
	
		Finaliza el ciclo for
		2 operaciones de comparaci�n, porque se compara la variable "i" con el menor y luego con el igual y da como resultado falso.*/
	
	cout << "Sumatoria= " << sum << endl;	/*2 operaciones de salida, porque se muestra un mensaje por pantalla y el valor de la variable "sum"; m�s
	1 operaci�n de salto de l�nea. 3 operaciones en total.*/
	return 0;
}
