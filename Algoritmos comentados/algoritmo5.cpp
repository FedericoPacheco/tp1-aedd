#include <iostream>
#include <cmath>

using namespace std;
int main() {

	int alto, ancho, posicionInicial, posicionFinal; //4 operaciones de declaración, porque se declaran cuatro variables enteras.
	
	cout <<"Ingrese el alto deseado: ";	//1 operación de salida, porque se muestra un mensaje por pantalla.
	
	cin >> alto;	//1 operación de entrada, porque ingresa una variable por teclado.
	
	ancho = alto + (alto - 1);	/*2 operaciones algebraicas, porque primero se le resta 1 a la variable "alto", y luego se le suma dicha variable al
	primer resultado; más una operación de asignación, porque se le asigna el resultado final a la variable "ancho". 3 operaciones en total.*/
	
	//A CONTINUACIÓN, SE ABREVIARÁN LAS VARIABLES "posicionInicial" y "posicionFinal" COMO "pI" y "pF" RESPECTIVAMENTE, PARA MAYOR ENTENDIMIENTO.
	
	posicionInicial = (int)floor(((float)ancho) / 2); /*1 operación de conversión, porque primero modifica el tipo de dato de "ancho"; más 1 operación
	algebraica, porque a dicha variable se la divide por 2; luego, 1 operación de casteo, porque se llama a la función "floor"; más 1 operación de 
	conversión, porque modifica el tipo de dato del valor final; y, por último, 1 operación de asignación, porque se le asigna este último valor a la
	variable "pI". 5 operaciones en total.*/
	
	posicionFinal = posicionInicial; //1 operación de asignación, porque se le asigna el valor de "pI" a "pF".
	
	for(int fila = 0; fila < alto; fila++) { /*1 operación de declaración, porque se declara una variable entera; más 1 operación de asignación, porque se le
	asigna un valor a dicha variable. 2 operaciones en total (Se contabilizan una ÚNICA VEZ en todo el programa).
		
		Ejecución del primer ciclo for. 
		1 operación de comparación, porque se compara la variable "fila" con el menor.*/
		
		for (int columna = 0; columna < ancho; columna++) { /*1 operación de declaración, porque se declara una variable entera; más 1 operación de 
		asignación, porque se le asigna un valor a dicha variable. 2 operaciones en total (Se contabilizan una ÚNICA VEZ en todo el programa).
			
			Ejecución del segundo ciclo for. 
			1 operación de comparación, porque se compara la variable "columna" con el menor.*/
			
				if (posicionInicial <= columna && columna <= posicionFinal)
				{
					/*Si pI<columna. 1 operación de comparación, porque se compara la variable "pI" con el menor; más un operación lógica, porque se opera
				con el "&&". Luego,
						Si columna<pF. Más 1 operación de comparación, porque se compara la variable "columna" con el menor. 3 operaciones en total.
						Si columna==pF. Más 2 operaciones de comparación, porque se compara la variable "columna" con el menor y luego con el igual. 4
					operaciones en total.
					
					/*Si pI==columna. 2 operaciones de comparación, porque se compara la variable "pI" con el menor y luego con el igual; más un operación
				lógica, porque se opera con el "&&". Luego,
						Si columna<pF. Más 1 operación de comparación, porque se compara la variable "columna" con el menor. 4 operaciones en total.
						Si columna==pF. Más 2 operaciones de comparación, porque se compara la variable "columna" con el menor y luego con el igual. 
					5 operaciones en total.*/
					
					cout << '*'; //1 operación de salida, porque se muestra un caracter por pantalla.
				}
				else
					{
					/*Si pI>columna. 2 operacionse de comparación, porque se compara la variable "pI" con el menor y luego con el igual; más 1 operación
				lógica, porque se opera el "&&". 3 operaciones en total.
					
					Si pI<columna. 3 operacionse de comparación, porque se compara la variable "pI" con el menor, y luego se compara la variable "pF" con el
				menor y luego con el igual; más 1 operación lógica, porque se opera el "&&". 4 operaciones en total.
					
					Si pI == columna. 4 operaciones de comparación, porque se compara la variable "pI" con el menor y luego con el igual, y también se compara
				la variable "columna" con el menor y luego con el igual; más una operación lógica, porque se opera el "&&". 5 operaciones en total.*/
					
					cout << ' '; //1 operación de salida, porque se muestra un espacio en blanco por pantalla.
				}
				
		/*Luego del segundo ciclo. 
			1 operación algebraica, porque se suma 1 a la variable "columna"; más una operación de asignación, porque se le asigna ese
		resultado a la variable "columna". 2 operaciones en total.*/
			
		}
		
		/*Finalización del segundo ciclo for.
		1 operación de comparación, porque se compara la variable "columna" con el menor y da como resultado falso.*/
		
		cout << endl;	//1 operación de salto de línea.
		
		posicionInicial -= 1; /*1 operación algebraica, porque se le resta 1 a la variable "pI"; más 1 operación de asignación, porque se le asigna
	dicho resultado a la variable antes mencionada. 2 operaciones en total.*/
		
		posicionFinal += 1;	/*1 operación algebraica, porque se le resta 1 a la variable "pF"; más 1 operación de asignación, porque se le asigna
		dicho resultado a la variable antes mencionada. 2 operaciones en total.
		
		Luego del primer ciclo. 
			1 operación algebraica, porque se suma 1 a la variable "fila"; más una operación de asignación, porque se le asigna ese
		resultado a la variable "fila". 2 operaciones en total.*/	
		
	}
	
	/*Finalización del primer ciclo for.
	1 operación de comparación, porque se compara la variable "fila" con el menor y da como resultado falso.*/
	
}
