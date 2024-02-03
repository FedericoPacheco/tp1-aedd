#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

	int n; //1 operaci�n de declaraci�n, porque se declara una variable entera.
	
	cout<<"Ingrese un numero decimal a convertir que este en el rango (0, 65535]: "; //1 operaci�n de salida, porque se muestra un mensaje por pantalla.
	cin>>n; //1 operaci�n de entrada, porque ingresa una variable por teclado.
	
	if(n > 0 && n <= 65535) { 
		/*Si n<=0. 1 operaci�n de comparaci�n, porque compara el valor de la variable "n"; m�s 1 operaci�n l�gica, porque se opera el "&&". 2 operaciones en
	total.
		
		  Si n>0. 2 operaciones totales (justificadas anteriormente).
			Si n<65635. 1 operaci�n de comparaci�n, porque vuelve a comparar el valor de la variable "n". 3 operaciones en total.
		
			Si n==65535. 2 operaciones de comparaci�n, porque compara el valor de la variable "n" con el menor y luego con el igual. 4 operaciones en total.*/
		
		char base; //1 operaci�n de declaraci�n, porque se declara un caracter.
		cout<<"Ingrese 'b' para convertir a binario o 'o' para convertir a octal: "; //1 operaci�n de salida, porque se muestra un mensaje por pantalla.
		cin>>base; //1 operaci�n de entrada, porque ingresa un caracter por teclado.
		
		if( base == 'o' || base == 'O') {
			/*Si base == 'o'. 1 operaci�n de comparaci�n, porque se compara el valor del caracter "base"; m�s un operador l�gico, porque se opera con el
		"||". 2 operaciones en total.
			
			Si base == 'O'. 2 operaciones de comparaci�n, porque se compara el valor del caracter "base" dos veces; m�s un operador l�gico, porque se
		opera con el "||". 3 operaciones en total. */
			
			int temp = n, i = 1, octal = 0; /*3 operaciones de declaraci�n, porque se declaran 3 variables enteras; m�s 3 operaciones de asignaci�n, porque
		se le asignan valores a las variables antes mencionadas. 6 operaciones en total.*/
			
			while(temp > 0) {	//1 operaci�n de comparaci�n, porque se compara el valor de la variable "temp" dentro del ciclo while.
				
				octal += (temp % 8) * i; /*3 operaciones algebraicas, porque primero se calcula el resto de dividir a la variable "temp" por 8, luego se 
			multiplica dicho resultado por "i", y, por �ltimo, se le suma a este �ltimo resultado la variable "octal"; m�s una operaci�n de asignaci�n, 
			porque se le asigna el resultado final a la variable "octal". 4 operaciones en total.*/
				
				i *= 10; /*1 operaci�n algebraica, porque se multiplica a la variable "i" por 10; m�s una operaci�n de asignaci�n, porque se le asigna 
			el resultado final a la variable "i". 2 operaciones en total.*/
				
				temp /= 8; /*1 operaci�n algebraica, porque se divide a la variable "temp" por 8; m�s una operaci�n de asignaci�n, porque se le asigna 
				el resultado final a la variable "temp". 2 operaciones en total.*/
				
			}
			
			//1 operaci�n de comparaci�n, porque se compara el valor de la variable "temp" dentro del ciclo while y da como resultado falso.
			
			cout << "El numero en base 8 es " << octal << endl;	/*2 operaciones de salida, porque se muestra un mensaje por pantalla y el valor de la variable
			"octal"; m�s 1 operaci�n de salto de l�nea. 3 operaciones en total.*/
			
		} else if (base == 'b' || base == 'B') { //3 operaciones iniciales (1.base=='o'), (2.||), (3.base=='O').
			/*Si base == 'b'. 1 operaci�n de comparaci�n, porque se compara el valor del caracter "base"; m�s un operador l�gico, porque se opera con el
			"||". 2 operaciones en total.
			
			Si base == 'B'. 2 operaciones de comparaci�n, porque se compara el valor del caracter "base" dos veces; m�s un operador l�gico, porque se
			opera con el "||". 3 operaciones en total. */
			
			int i = 65536;	/*1 operaci�n de declaraci�n, porque se declara 1 variable entera; m�s 1 operaci�n de asignaci�n, porque se le asigna un valor
			a la variable "i". 2 operaciones en total.*/
			
			//A CONTINUACI�N, SE ABREVIAR� LA VARIABLE "yaMostroUnUno" COMO "yMUU" PARA MAYOR ENTENDIMIENTO.
			
			bool yaMostroUnUno = false;	/*1 operaci�n de declaraci�n, porque se declara 1 variable booleana; m�s 1 operaci�n de asignaci�n, porque se le 
			asigna un valor falso a la variable "yMUU". 2 operaciones en total.*/
			
			cout << "El numero en binario es ";	//1 operaci�n de salida, porque se muestra un mensaje por pantalla.
			
			while(i > 0) {	//1 operaci�n de comparaci�n, porque se compara el valor de la variable "i" dentro del ciclo while.
				
				if(yaMostroUnUno || n & i) {
					/*Si yMUU==verdadera. 2 operaciones l�gicas, primero comprobar el valor de la variable "yMUU" y luego un operador l�gico "||".
					
					  Si yMUU==falsa. 2 operaciones inciales (primera comprobaci�n y, luego, el operador l�gico "||"); m�s 1 operaci�n l�gica, dado a que
				comprueba si (n & i) es verdadero o no. 3 operaciones en total.*/
					
					cout << ((n & i) != 0); /*1 operaci�n de salida, porque se muestra un valor por pantalla; m�s 1 operaci�n l�gica, dado a que se comprueba
				si ((n & i) != 0) es verdadero o no. 2 operaciones en total.*/	
					
					yaMostroUnUno = true; //1 operaci�n de asignaci�n, porque se le asigna el valor verdadero a la variable "yMUU".
				}
				
				i/=2; /*1 operaci�n algebraica, porque se divide a la variable "i" por 2; m�s una operaci�n de asignaci�n, porque se le asigna 
				el resultado final a la variable "i". 2 operaciones en total.*/
				
			}
			
			//1 operaci�n de comparaci�n, porque se compara el valor de la variable "i" dentro del ciclo while y da como resultado falso.
			
			cout << endl;	//1 operaci�n de salto de l�nea.
			
		} else { //6 operaciones totales (1.base=='o'), (2.||), (3.base=='O'), (4.base=='b'), (5.||), (6.base=='B').
			
			cout << "Error - Base incorrecta. Saliendo..." << endl;	  /*1 operaci�n de salida, porque se muestra un mensaje por pantalla; m�s 1 operaci�n
		de salto de l�nea. 2 operaciones en total.*/
		}
		
	} else {  //3 operaciones de comparaci�n (1.n>0), (2.n<65535), (3.n==65535); m�s una operaci�n l�gica, porque se opera el "&&". 4 operaciones en total.
		
		cout << "Error - Numero fuera de rango. Saliendo..." << endl;	/*1 operaci�n de salida, porque se muestra un mensaje por pantalla; m�s 1 operaci�n 
	de salto de l�nea. 2 operaciones en total.*/
		
	}
	
	return 0;
}

