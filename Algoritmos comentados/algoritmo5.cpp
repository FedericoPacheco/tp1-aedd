#include <iostream>
#include <cmath>

using namespace std;
int main() {

	int alto, ancho, posicionInicial, posicionFinal; //4 operaciones de declaraci�n, porque se declaran cuatro variables enteras.
	
	cout <<"Ingrese el alto deseado: ";	//1 operaci�n de salida, porque se muestra un mensaje por pantalla.
	
	cin >> alto;	//1 operaci�n de entrada, porque ingresa una variable por teclado.
	
	ancho = alto + (alto - 1);	/*2 operaciones algebraicas, porque primero se le resta 1 a la variable "alto", y luego se le suma dicha variable al
	primer resultado; m�s una operaci�n de asignaci�n, porque se le asigna el resultado final a la variable "ancho". 3 operaciones en total.*/
	
	//A CONTINUACI�N, SE ABREVIAR�N LAS VARIABLES "posicionInicial" y "posicionFinal" COMO "pI" y "pF" RESPECTIVAMENTE, PARA MAYOR ENTENDIMIENTO.
	
	posicionInicial = (int)floor(((float)ancho) / 2); /*1 operaci�n de conversi�n, porque primero modifica el tipo de dato de "ancho"; m�s 1 operaci�n
	algebraica, porque a dicha variable se la divide por 2; luego, 1 operaci�n de casteo, porque se llama a la funci�n "floor"; m�s 1 operaci�n de 
	conversi�n, porque modifica el tipo de dato del valor final; y, por �ltimo, 1 operaci�n de asignaci�n, porque se le asigna este �ltimo valor a la
	variable "pI". 5 operaciones en total.*/
	
	posicionFinal = posicionInicial; //1 operaci�n de asignaci�n, porque se le asigna el valor de "pI" a "pF".
	
	for(int fila = 0; fila < alto; fila++) { /*1 operaci�n de declaraci�n, porque se declara una variable entera; m�s 1 operaci�n de asignaci�n, porque se le
	asigna un valor a dicha variable. 2 operaciones en total (Se contabilizan una �NICA VEZ en todo el programa).
		
		Ejecuci�n del primer ciclo for. 
		1 operaci�n de comparaci�n, porque se compara la variable "fila" con el menor.*/
		
		for (int columna = 0; columna < ancho; columna++) { /*1 operaci�n de declaraci�n, porque se declara una variable entera; m�s 1 operaci�n de 
		asignaci�n, porque se le asigna un valor a dicha variable. 2 operaciones en total (Se contabilizan una �NICA VEZ en todo el programa).
			
			Ejecuci�n del segundo ciclo for. 
			1 operaci�n de comparaci�n, porque se compara la variable "columna" con el menor.*/
			
				if (posicionInicial <= columna && columna <= posicionFinal)
				{
					/*Si pI<columna. 1 operaci�n de comparaci�n, porque se compara la variable "pI" con el menor; m�s un operaci�n l�gica, porque se opera
				con el "&&". Luego,
						Si columna<pF. M�s 1 operaci�n de comparaci�n, porque se compara la variable "columna" con el menor. 3 operaciones en total.
						Si columna==pF. M�s 2 operaciones de comparaci�n, porque se compara la variable "columna" con el menor y luego con el igual. 4
					operaciones en total.
					
					/*Si pI==columna. 2 operaciones de comparaci�n, porque se compara la variable "pI" con el menor y luego con el igual; m�s un operaci�n
				l�gica, porque se opera con el "&&". Luego,
						Si columna<pF. M�s 1 operaci�n de comparaci�n, porque se compara la variable "columna" con el menor. 4 operaciones en total.
						Si columna==pF. M�s 2 operaciones de comparaci�n, porque se compara la variable "columna" con el menor y luego con el igual. 
					5 operaciones en total.*/
					
					cout << '*'; //1 operaci�n de salida, porque se muestra un caracter por pantalla.
				}
				else
					{
					/*Si pI>columna. 2 operacionse de comparaci�n, porque se compara la variable "pI" con el menor y luego con el igual; m�s 1 operaci�n
				l�gica, porque se opera el "&&". 3 operaciones en total.
					
					Si pI<columna. 3 operacionse de comparaci�n, porque se compara la variable "pI" con el menor, y luego se compara la variable "pF" con el
				menor y luego con el igual; m�s 1 operaci�n l�gica, porque se opera el "&&". 4 operaciones en total.
					
					Si pI == columna. 4 operaciones de comparaci�n, porque se compara la variable "pI" con el menor y luego con el igual, y tambi�n se compara
				la variable "columna" con el menor y luego con el igual; m�s una operaci�n l�gica, porque se opera el "&&". 5 operaciones en total.*/
					
					cout << ' '; //1 operaci�n de salida, porque se muestra un espacio en blanco por pantalla.
				}
				
		/*Luego del segundo ciclo. 
			1 operaci�n algebraica, porque se suma 1 a la variable "columna"; m�s una operaci�n de asignaci�n, porque se le asigna ese
		resultado a la variable "columna". 2 operaciones en total.*/
			
		}
		
		/*Finalizaci�n del segundo ciclo for.
		1 operaci�n de comparaci�n, porque se compara la variable "columna" con el menor y da como resultado falso.*/
		
		cout << endl;	//1 operaci�n de salto de l�nea.
		
		posicionInicial -= 1; /*1 operaci�n algebraica, porque se le resta 1 a la variable "pI"; m�s 1 operaci�n de asignaci�n, porque se le asigna
	dicho resultado a la variable antes mencionada. 2 operaciones en total.*/
		
		posicionFinal += 1;	/*1 operaci�n algebraica, porque se le resta 1 a la variable "pF"; m�s 1 operaci�n de asignaci�n, porque se le asigna
		dicho resultado a la variable antes mencionada. 2 operaciones en total.
		
		Luego del primer ciclo. 
			1 operaci�n algebraica, porque se suma 1 a la variable "fila"; m�s una operaci�n de asignaci�n, porque se le asigna ese
		resultado a la variable "fila". 2 operaciones en total.*/	
		
	}
	
	/*Finalizaci�n del primer ciclo for.
	1 operaci�n de comparaci�n, porque se compara la variable "fila" con el menor y da como resultado falso.*/
	
}
