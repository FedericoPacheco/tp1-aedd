#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int mes,cantidad=0;	/*2 operaciones de declaraci�n, porque se declaran dos variables enteras; m�s 1 operaci�n de asignaci�n, porque se le asigna a la 
	variable "cantidad" el valor 0. 3 operaciones en total.*/
	
	cout<<"Ingrese un mes: "; //1 operaci�n de salida, porque se muestra un mensaje por pantalla.
	
	cin>>mes;	//1 operaci�n de entrada, porque ingresa una variable por teclado.
	
	switch(mes) {	/*1 operaci�n de funci�n, porque comienza la funci�n "switch" a comparar el valor de la variable entera "mes". Luego "mes" operaciones
	m�s, debido a que se va a comparar la variable entera "mes" con cada uno de los cases del switch; de lo que terminar� comparand�la "mes" veces. 
	(mes + 1) operaciones en total.*/
		
	case 1: cantidad += 31; /*2 operaciones algebraicas, porque primero se le suma 31 a la variable "cantidad" y se le asigna a �sta variable este �ltimo 
	valor.*/
	case 2: cantidad += 28; /*2 operaciones algebraicas, porque primero se le suma 28 a la variable "cantidad" y se le asigna a �sta variable este �ltimo 
	valor.*/
	case 3: cantidad += 31 /*2 operaciones algebraicas, porque primero se le suma 31 a la variable "cantidad" y se le asigna a �sta variable este �ltimo 
	valor.*/
	case 4: cantidad += 30; /*2 operaciones algebraicas, porque primero se le suma 30 a la variable "cantidad" y se le asigna a �sta variable este �ltimo 
	valor.*/
	case 5: cantidad += 31; /*2 operaciones algebraicas, porque primero se le suma 31 a la variable "cantidad" y se le asigna a �sta variable este �ltimo 
	valor.*/
	case 6: cantidad += 30; /*2 operaciones algebraicas, porque primero se le suma 30 a la variable "cantidad" y se le asigna a �sta variable este �ltimo 
	valor.*/
	case 7: cantidad += 31; /*2 operaciones algebraicas, porque primero se le suma 31 a la variable "cantidad" y se le asigna a �sta variable este �ltimo 
	valor.*/
	case 8: cantidad += 31; /*2 operaciones algebraicas, porque primero se le suma 31 a la variable "cantidad" y se le asigna a �sta variable este �ltimo 
	valor.*/
	case 9: cantidad += 30; /*2 operaciones algebraicas, porque primero se le suma 30 a la variable "cantidad" y se le asigna a �sta variable este �ltimo 
	valor.*/
	case 10: cantidad += 31; /*2 operaciones algebraicas, porque primero se le suma 31 a la variable "cantidad" y se le asigna a �sta variable este �ltimo 
	valor.*/
	case 11: cantidad += 30; /*2 operaciones algebraicas, porque primero se le suma 30 a la variable "cantidad" y se le asigna a �sta variable este �ltimo 
	valor.*/
	case 12: cantidad += 31; /*2 operaciones algebraicas, porque primero se le suma 31 a la variable "cantidad" y se le asigna a �sta variable este �ltimo 
	valor.*/
	
	}	
	/*Si el n�mero ingresado est� entre 1 y 12, se har�n 2 operaciones algebraicas (comentadas anteriormente); como m�nimo se har�n 2 operaciones,
	porque el mayor n�mero de mes en este caso ser�a 12; y como m�ximo se har�n 24, porque el m�nimo n�mero que se le puede asignar a mes en este caso
	es el 1. De lo que, con un poco de �lgebra, obtenemos la relaci�n de que ser�n 26 operaciones - 2*"mes", es decir, se contabilizar�n
	(26-2*mes) operaciones. Esto se debe dado a que como el n�mero m�ximo que puede recibir mes, en este caso, es 12; la relaci�n anterior mencionada da
	como resultado 2 (el n�mero deseado). Y en caso de que mes tome el valor 1, la relaci�n anterior dar� como resultado 24 (es decir, las 24 operaciones
	algebraicas comentadas anteriormente).
	
		Si el n�mero ingresado es menor que 1 o mayor a 12, no se har� ninguna operaci�n algebraica debido a que no entrar� dentro de ninguno de los 
	cases del switch. Por lo tanto, s�lo se contabilizar�an las operaciones de comparaci�n (que ya fueron mencionadas al principio del ciclo switch).*/
	
	cout<<"La cantidad de dias que faltan para finalizar el anio es de: " << cantidad<<endl; /*2 operaciones de salida, porque se muestra un mensaje por 
	pantalla y el valor de la variable "sum"; m�s 1 operaci�n de salto de l�nea. 3 operaciones en total.*/
	
	return 0;
}

