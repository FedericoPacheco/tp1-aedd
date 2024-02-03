#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	
	int numero;	//1 operación de declaración, porque se declara una variable entera.
	
	do {
		
		system("cls");	//1 operación de salida, porque limpia todo el texto anterior al comando.
		
		cout << "\t\t\tIdentificación de Signos y Trilogías" << endl << /*1 operación de salida, porque se muestra un mensaje por pantalla; más 1 operación
			de salto de línea. 2 operaciones en total.*/
			
				"\t\t\t-------------------------------------" << endl << endl << /*1 operación de salida, porque se muestra un mensaje por pantalla; más 2 
			operaciones de salto de línea. 3 operaciones en total.*/
			
				"\t\t\t Ingrese un número del 1 al 12 que identifique un signo del zodíaco " << endl << /*1 operación de salida, porque se muestra un mensaje
			por pantalla; más 1 operación de salto de línea. 2 operaciones en total.*/
			
				"\t\t\t o 0 para salir de la aplicación" << endl << endl <<	/*1 operación de salida, porque se muestra un mensaje por pantalla; más 2 
			operaciones de salto de línea. 3 operaciones en total.*/
			
				"\t\t\t Opción: ";	//1 operación de salida, porque se muestra un mensaje por pantalla.
	
		cin >> numero;	//1 operación de entrada, porque ingresa una variable por teclado.
		
		cout << endl;	//1 operación de salto de línea.
		
		if (numero==0)	//1 operación de comparación, porque compara el valor de la variable entera "numero".
			
			cout << "\t\t\t  *** Gracias por utilizar la aplicación ***" << endl;	/*1 operación de salida, porque se muestra un mensaje por pantalla; 
		más 1 operación de salto de línea. 2 operaciones en total.*/
		
		else if(numero <1 or numero >12)	/*1 operación de comparación inicial (1.numero==0).
			
			Si numero<1. 1 operación de comparación, porque se compara el valor de la variable "numero"; más 1 operación lógica, porque se opera el "or". 2 operaciones en total.
			
			Si numero>12. 2 operaciones de comparación, porque se compara el valor de la variable "numero" dos veces; más 1 operación lógica, porque se opera el "or". 3 operaciones
		en total.*/
			
		   cout << "\t\t\t ERROR: El número " << numero << //2 operaciones de salida, porque se muestra un mensaje por pantalla y el valor de la variable entera "numero".
			
		   " no está asociado a ningún signo. Vuelva a intentarlo." << endl;	/*1 operación de salida, porque se muestra un mensaje por pantalla; más 1 operación de salto de
		línea. 2 operaciones en total.*/
		
		else if (numero<4) { /*4 operaciones iniciales (1.numero==0), (2.numero<1,or,numero>12); más 1 operación de comparación, porque se compara el valor de la variable "numero".
		5 operaciones en total.*/
			
			
			cout << "\t\t\t Signo de la primer trilogía: "; //1 operación de salida, porque se muestra un mensaje por pantalla.
			
			switch(numero) {	//1 operación de función, porque comienza la función "switch" a comparar el valor de la variable entera "numero".
				
				case 1: cout << "Aries" << endl;	/*1 operación de comparación, porque se compara el valor de la variable "numero"; más 1 operación de salida, porque se muestra 
				un mensaje por pantalla; y, por último, 1 operación de salto de línea.  3 operaciones en total.*/
				
					break;	//1 operación de función, porque finaliza el ciclo switch y omite todo lo posterior a él, dentro del ciclo.
					
				case 2: cout << "Tauro" << endl;	/*1 operación de comparación, porque se compara el valor de la variable "numero"; más 1 operación de salida, porque se muestra 
				un mensaje por pantalla; y, por último, 1 operación de salto de línea.  3 operaciones en total.*/
				
					break;	//1 operación de función, porque finaliza el ciclo switch y omite todo lo posterior a él, dentro del ciclo.
					
				case 3: cout << "Géminis" << endl;	/*1 operación de comparación, porque se compara el valor de la variable "numero"; más 1 operación de salida, porque se muestra 
				un mensaje por pantalla; y, por último, 1 operación de salto de línea.  3 operaciones en total.*/
				
					break;	//1 operación de función, porque finaliza el ciclo switch y omite todo lo posterior a él, dentro del ciclo.
			}
		}
		else if (numero<7) {	/*5 operaciones iniciales (1.numero==0), (2.numero<1,or,numero>12), (3.numero<4); más 1 operación de comparación, porque se compara el valor de 
		la variable "numero". 6 operaciones en total.*/
			
			cout << "\t\t\t Signo de la segunda trilogía: ";	//1 operación de salida, porque se muestra un mensaje por pantalla.
			
			switch(numero) {	//1 operación de función, porque comienza la función "switch" a comparar el valor de la variable entera "numero".
				
				case 4: cout << "Cáncer" << endl;	/*1 operación de comparación, porque se compara el valor de la variable "numero"; más 1 operación de salida, porque se muestra 
				un mensaje por pantalla; y, por último, 1 operación de salto de línea.  3 operaciones en total.*/
				
					break;	//1 operación de función, porque finaliza el ciclo switch y omite todo lo posterior a él, dentro del ciclo.
					
				case 5: cout << "Leo" << endl;	/*1 operación de comparación, porque se compara el valor de la variable "numero"; más 1 operación de salida, porque se muestra 
				un mensaje por pantalla; y, por último, 1 operación de salto de línea.  3 operaciones en total.*/
				
					break;	//1 operación de función, porque finaliza el ciclo switch y omite todo lo posterior a él, dentro del ciclo.
					
				case 6: cout << "Virgo" << endl;	/*1 operación de comparación, porque se compara el valor de la variable "numero"; más 1 operación de salida, porque se muestra 
				un mensaje por pantalla; y, por último, 1 operación de salto de línea.  3 operaciones en total.*/
				
					break;	//1 operación de función, porque finaliza el ciclo switch y omite todo lo posterior a él, dentro del ciclo.
			}
		}
		else if (numero<10) {	/*6 operaciones iniciales (1.numero==0), (2.numero<1,or,numero>12), (3.numero<4), (4.numero<7); más 1 operación de comparación, porque se compara
			el valor de la variable "numero". 7 operaciones en total.*/
			
			cout << "\t\t\t Signo de la tercer trilogía: ";	//1 operación de salida, porque se muestra un mensaje por pantalla.
			
			switch(numero) {	//1 operación de función, porque comienza la función "switch" a comparar el valor de la variable entera "numero".
				
				case 7: cout << "Libra" << endl;	/*1 operación de comparación, porque se compara el valor de la variable "numero"; más 1 operación de salida, porque se muestra 
				un mensaje por pantalla; y, por último, 1 operación de salto de línea.  3 operaciones en total.*/
				
					break;	//1 operación de función, porque finaliza el ciclo switch y omite todo lo posterior a él, dentro del ciclo.
					
				case 8: cout << "Escorpio" << endl;	/*1 operación de comparación, porque se compara el valor de la variable "numero"; más 1 operación de salida, porque se muestra 
				un mensaje por pantalla; y, por último, 1 operación de salto de línea.  3 operaciones en total.*/
				
					break;	//1 operación de función, porque finaliza el ciclo switch y omite todo lo posterior a él, dentro del ciclo.
					
				case 9: cout << "Sagitario" << endl;  /*1 operación de comparación, porque se compara el valor de la variable "numero"; más 1 operación de salida, porque se muestra 
				un mensaje por pantalla; y, por último, 1 operación de salto de línea.  3 operaciones en total.*/
				
					break;	//1 operación de función, porque finaliza el ciclo switch y omite todo lo posterior a él, dentro del ciclo.
			}
		}
		else {	//7 operaciones iniciales (1.numero==0), (2.numero<1,or,numero>12), (3.numero<4), (4.numero<7), (5.numero<10).
			
			cout << "\t\t\t Signo de la cuarta trilogía: ";	//1 operación de salida, porque se muestra un mensaje por pantalla.
			
			switch(numero) {	//1 operación de función, porque comienza la función "switch" a comparar el valor de la variable entera "numero".
				
				case 10: cout << "Capricornio" << endl;	/*1 operación de comparación, porque se compara el valor de la variable "numero"; más 1 operación de salida, porque se muestra 
				un mensaje por pantalla; y, por último, 1 operación de salto de línea.  3 operaciones en total.*/
				
					break;	//1 operación de función, porque finaliza el ciclo switch y omite todo lo posterior a él, dentro del ciclo.
					
				case 11: cout << "Acuario" << endl;	/*1 operación de comparación, porque se compara el valor de la variable "numero"; más 1 operación de salida, porque se muestra 
				un mensaje por pantalla; y, por último, 1 operación de salto de línea.  3 operaciones en total.*/
				
					break;	//1 operación de función, porque finaliza el ciclo switch y omite todo lo posterior a él, dentro del ciclo.
					
				case 12: cout << "Piscis" << endl;	/*1 operación de comparación, porque se compara el valor de la variable "numero"; más 1 operación de salida, porque se muestra 
				un mensaje por pantalla; y, por último, 1 operación de salto de línea.  3 operaciones en total.*/
				
					break;	//1 operación de función, porque finaliza el ciclo switch y omite todo lo posterior a él, dentro del ciclo.
			}
		}

		cout << endl;	//1 operación de salto de línea.
		
		system("pause");	//1 operación de función, porque "pausa" al sistema hasta que el usuario oprima una tecla.
		
	} while(numero!=0);	//1 operación de comparación, porque compara el valor de la variable entera "numero".
	
	return 0;
}

