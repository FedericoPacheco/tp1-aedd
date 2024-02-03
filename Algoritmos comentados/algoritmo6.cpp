#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	
	int numero;	//1 operaci�n de declaraci�n, porque se declara una variable entera.
	
	do {
		
		system("cls");	//1 operaci�n de salida, porque limpia todo el texto anterior al comando.
		
		cout << "\t\t\tIdentificaci�n de Signos y Trilog�as" << endl << /*1 operaci�n de salida, porque se muestra un mensaje por pantalla; m�s 1 operaci�n
			de salto de l�nea. 2 operaciones en total.*/
			
				"\t\t\t-------------------------------------" << endl << endl << /*1 operaci�n de salida, porque se muestra un mensaje por pantalla; m�s 2 
			operaciones de salto de l�nea. 3 operaciones en total.*/
			
				"\t\t\t Ingrese un n�mero del 1 al 12 que identifique un signo del zod�aco " << endl << /*1 operaci�n de salida, porque se muestra un mensaje
			por pantalla; m�s 1 operaci�n de salto de l�nea. 2 operaciones en total.*/
			
				"\t\t\t o 0 para salir de la aplicaci�n" << endl << endl <<	/*1 operaci�n de salida, porque se muestra un mensaje por pantalla; m�s 2 
			operaciones de salto de l�nea. 3 operaciones en total.*/
			
				"\t\t\t Opci�n: ";	//1 operaci�n de salida, porque se muestra un mensaje por pantalla.
	
		cin >> numero;	//1 operaci�n de entrada, porque ingresa una variable por teclado.
		
		cout << endl;	//1 operaci�n de salto de l�nea.
		
		if (numero==0)	//1 operaci�n de comparaci�n, porque compara el valor de la variable entera "numero".
			
			cout << "\t\t\t  *** Gracias por utilizar la aplicaci�n ***" << endl;	/*1 operaci�n de salida, porque se muestra un mensaje por pantalla; 
		m�s 1 operaci�n de salto de l�nea. 2 operaciones en total.*/
		
		else if(numero <1 or numero >12)	/*1 operaci�n de comparaci�n inicial (1.numero==0).
			
			Si numero<1. 1 operaci�n de comparaci�n, porque se compara el valor de la variable "numero"; m�s 1 operaci�n l�gica, porque se opera el "or". 2 operaciones en total.
			
			Si numero>12. 2 operaciones de comparaci�n, porque se compara el valor de la variable "numero" dos veces; m�s 1 operaci�n l�gica, porque se opera el "or". 3 operaciones
		en total.*/
			
		   cout << "\t\t\t ERROR: El n�mero " << numero << //2 operaciones de salida, porque se muestra un mensaje por pantalla y el valor de la variable entera "numero".
			
		   " no est� asociado a ning�n signo. Vuelva a intentarlo." << endl;	/*1 operaci�n de salida, porque se muestra un mensaje por pantalla; m�s 1 operaci�n de salto de
		l�nea. 2 operaciones en total.*/
		
		else if (numero<4) { /*4 operaciones iniciales (1.numero==0), (2.numero<1,or,numero>12); m�s 1 operaci�n de comparaci�n, porque se compara el valor de la variable "numero".
		5 operaciones en total.*/
			
			
			cout << "\t\t\t Signo de la primer trilog�a: "; //1 operaci�n de salida, porque se muestra un mensaje por pantalla.
			
			switch(numero) {	//1 operaci�n de funci�n, porque comienza la funci�n "switch" a comparar el valor de la variable entera "numero".
				
				case 1: cout << "Aries" << endl;	/*1 operaci�n de comparaci�n, porque se compara el valor de la variable "numero"; m�s 1 operaci�n de salida, porque se muestra 
				un mensaje por pantalla; y, por �ltimo, 1 operaci�n de salto de l�nea.  3 operaciones en total.*/
				
					break;	//1 operaci�n de funci�n, porque finaliza el ciclo switch y omite todo lo posterior a �l, dentro del ciclo.
					
				case 2: cout << "Tauro" << endl;	/*1 operaci�n de comparaci�n, porque se compara el valor de la variable "numero"; m�s 1 operaci�n de salida, porque se muestra 
				un mensaje por pantalla; y, por �ltimo, 1 operaci�n de salto de l�nea.  3 operaciones en total.*/
				
					break;	//1 operaci�n de funci�n, porque finaliza el ciclo switch y omite todo lo posterior a �l, dentro del ciclo.
					
				case 3: cout << "G�minis" << endl;	/*1 operaci�n de comparaci�n, porque se compara el valor de la variable "numero"; m�s 1 operaci�n de salida, porque se muestra 
				un mensaje por pantalla; y, por �ltimo, 1 operaci�n de salto de l�nea.  3 operaciones en total.*/
				
					break;	//1 operaci�n de funci�n, porque finaliza el ciclo switch y omite todo lo posterior a �l, dentro del ciclo.
			}
		}
		else if (numero<7) {	/*5 operaciones iniciales (1.numero==0), (2.numero<1,or,numero>12), (3.numero<4); m�s 1 operaci�n de comparaci�n, porque se compara el valor de 
		la variable "numero". 6 operaciones en total.*/
			
			cout << "\t\t\t Signo de la segunda trilog�a: ";	//1 operaci�n de salida, porque se muestra un mensaje por pantalla.
			
			switch(numero) {	//1 operaci�n de funci�n, porque comienza la funci�n "switch" a comparar el valor de la variable entera "numero".
				
				case 4: cout << "C�ncer" << endl;	/*1 operaci�n de comparaci�n, porque se compara el valor de la variable "numero"; m�s 1 operaci�n de salida, porque se muestra 
				un mensaje por pantalla; y, por �ltimo, 1 operaci�n de salto de l�nea.  3 operaciones en total.*/
				
					break;	//1 operaci�n de funci�n, porque finaliza el ciclo switch y omite todo lo posterior a �l, dentro del ciclo.
					
				case 5: cout << "Leo" << endl;	/*1 operaci�n de comparaci�n, porque se compara el valor de la variable "numero"; m�s 1 operaci�n de salida, porque se muestra 
				un mensaje por pantalla; y, por �ltimo, 1 operaci�n de salto de l�nea.  3 operaciones en total.*/
				
					break;	//1 operaci�n de funci�n, porque finaliza el ciclo switch y omite todo lo posterior a �l, dentro del ciclo.
					
				case 6: cout << "Virgo" << endl;	/*1 operaci�n de comparaci�n, porque se compara el valor de la variable "numero"; m�s 1 operaci�n de salida, porque se muestra 
				un mensaje por pantalla; y, por �ltimo, 1 operaci�n de salto de l�nea.  3 operaciones en total.*/
				
					break;	//1 operaci�n de funci�n, porque finaliza el ciclo switch y omite todo lo posterior a �l, dentro del ciclo.
			}
		}
		else if (numero<10) {	/*6 operaciones iniciales (1.numero==0), (2.numero<1,or,numero>12), (3.numero<4), (4.numero<7); m�s 1 operaci�n de comparaci�n, porque se compara
			el valor de la variable "numero". 7 operaciones en total.*/
			
			cout << "\t\t\t Signo de la tercer trilog�a: ";	//1 operaci�n de salida, porque se muestra un mensaje por pantalla.
			
			switch(numero) {	//1 operaci�n de funci�n, porque comienza la funci�n "switch" a comparar el valor de la variable entera "numero".
				
				case 7: cout << "Libra" << endl;	/*1 operaci�n de comparaci�n, porque se compara el valor de la variable "numero"; m�s 1 operaci�n de salida, porque se muestra 
				un mensaje por pantalla; y, por �ltimo, 1 operaci�n de salto de l�nea.  3 operaciones en total.*/
				
					break;	//1 operaci�n de funci�n, porque finaliza el ciclo switch y omite todo lo posterior a �l, dentro del ciclo.
					
				case 8: cout << "Escorpio" << endl;	/*1 operaci�n de comparaci�n, porque se compara el valor de la variable "numero"; m�s 1 operaci�n de salida, porque se muestra 
				un mensaje por pantalla; y, por �ltimo, 1 operaci�n de salto de l�nea.  3 operaciones en total.*/
				
					break;	//1 operaci�n de funci�n, porque finaliza el ciclo switch y omite todo lo posterior a �l, dentro del ciclo.
					
				case 9: cout << "Sagitario" << endl;  /*1 operaci�n de comparaci�n, porque se compara el valor de la variable "numero"; m�s 1 operaci�n de salida, porque se muestra 
				un mensaje por pantalla; y, por �ltimo, 1 operaci�n de salto de l�nea.  3 operaciones en total.*/
				
					break;	//1 operaci�n de funci�n, porque finaliza el ciclo switch y omite todo lo posterior a �l, dentro del ciclo.
			}
		}
		else {	//7 operaciones iniciales (1.numero==0), (2.numero<1,or,numero>12), (3.numero<4), (4.numero<7), (5.numero<10).
			
			cout << "\t\t\t Signo de la cuarta trilog�a: ";	//1 operaci�n de salida, porque se muestra un mensaje por pantalla.
			
			switch(numero) {	//1 operaci�n de funci�n, porque comienza la funci�n "switch" a comparar el valor de la variable entera "numero".
				
				case 10: cout << "Capricornio" << endl;	/*1 operaci�n de comparaci�n, porque se compara el valor de la variable "numero"; m�s 1 operaci�n de salida, porque se muestra 
				un mensaje por pantalla; y, por �ltimo, 1 operaci�n de salto de l�nea.  3 operaciones en total.*/
				
					break;	//1 operaci�n de funci�n, porque finaliza el ciclo switch y omite todo lo posterior a �l, dentro del ciclo.
					
				case 11: cout << "Acuario" << endl;	/*1 operaci�n de comparaci�n, porque se compara el valor de la variable "numero"; m�s 1 operaci�n de salida, porque se muestra 
				un mensaje por pantalla; y, por �ltimo, 1 operaci�n de salto de l�nea.  3 operaciones en total.*/
				
					break;	//1 operaci�n de funci�n, porque finaliza el ciclo switch y omite todo lo posterior a �l, dentro del ciclo.
					
				case 12: cout << "Piscis" << endl;	/*1 operaci�n de comparaci�n, porque se compara el valor de la variable "numero"; m�s 1 operaci�n de salida, porque se muestra 
				un mensaje por pantalla; y, por �ltimo, 1 operaci�n de salto de l�nea.  3 operaciones en total.*/
				
					break;	//1 operaci�n de funci�n, porque finaliza el ciclo switch y omite todo lo posterior a �l, dentro del ciclo.
			}
		}

		cout << endl;	//1 operaci�n de salto de l�nea.
		
		system("pause");	//1 operaci�n de funci�n, porque "pausa" al sistema hasta que el usuario oprima una tecla.
		
	} while(numero!=0);	//1 operaci�n de comparaci�n, porque compara el valor de la variable entera "numero".
	
	return 0;
}

