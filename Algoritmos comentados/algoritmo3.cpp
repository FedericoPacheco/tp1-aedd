#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int mes,cantidad=0;	/*2 operaciones de declaración, porque se declaran dos variables enteras; más 1 operación de asignación, porque se le asigna a la 
	variable "cantidad" el valor 0. 3 operaciones en total.*/
	
	cout<<"Ingrese un mes: "; //1 operación de salida, porque se muestra un mensaje por pantalla.
	
	cin>>mes;	//1 operación de entrada, porque ingresa una variable por teclado.
	
	switch(mes) {	/*1 operación de función, porque comienza la función "switch" a comparar el valor de la variable entera "mes". Luego "mes" operaciones
	más, debido a que se va a comparar la variable entera "mes" con cada uno de los cases del switch; de lo que terminará comparandóla "mes" veces. 
	(mes + 1) operaciones en total.*/
		
	case 1: cantidad += 31; /*2 operaciones algebraicas, porque primero se le suma 31 a la variable "cantidad" y se le asigna a ésta variable este último 
	valor.*/
	case 2: cantidad += 28; /*2 operaciones algebraicas, porque primero se le suma 28 a la variable "cantidad" y se le asigna a ésta variable este último 
	valor.*/
	case 3: cantidad += 31 /*2 operaciones algebraicas, porque primero se le suma 31 a la variable "cantidad" y se le asigna a ésta variable este último 
	valor.*/
	case 4: cantidad += 30; /*2 operaciones algebraicas, porque primero se le suma 30 a la variable "cantidad" y se le asigna a ésta variable este último 
	valor.*/
	case 5: cantidad += 31; /*2 operaciones algebraicas, porque primero se le suma 31 a la variable "cantidad" y se le asigna a ésta variable este último 
	valor.*/
	case 6: cantidad += 30; /*2 operaciones algebraicas, porque primero se le suma 30 a la variable "cantidad" y se le asigna a ésta variable este último 
	valor.*/
	case 7: cantidad += 31; /*2 operaciones algebraicas, porque primero se le suma 31 a la variable "cantidad" y se le asigna a ésta variable este último 
	valor.*/
	case 8: cantidad += 31; /*2 operaciones algebraicas, porque primero se le suma 31 a la variable "cantidad" y se le asigna a ésta variable este último 
	valor.*/
	case 9: cantidad += 30; /*2 operaciones algebraicas, porque primero se le suma 30 a la variable "cantidad" y se le asigna a ésta variable este último 
	valor.*/
	case 10: cantidad += 31; /*2 operaciones algebraicas, porque primero se le suma 31 a la variable "cantidad" y se le asigna a ésta variable este último 
	valor.*/
	case 11: cantidad += 30; /*2 operaciones algebraicas, porque primero se le suma 30 a la variable "cantidad" y se le asigna a ésta variable este último 
	valor.*/
	case 12: cantidad += 31; /*2 operaciones algebraicas, porque primero se le suma 31 a la variable "cantidad" y se le asigna a ésta variable este último 
	valor.*/
	
	}	
	/*Si el número ingresado está entre 1 y 12, se harán 2 operaciones algebraicas (comentadas anteriormente); como mínimo se harán 2 operaciones,
	porque el mayor número de mes en este caso sería 12; y como máximo se harán 24, porque el mínimo número que se le puede asignar a mes en este caso
	es el 1. De lo que, con un poco de álgebra, obtenemos la relación de que serán 26 operaciones - 2*"mes", es decir, se contabilizarán
	(26-2*mes) operaciones. Esto se debe dado a que como el número máximo que puede recibir mes, en este caso, es 12; la relación anterior mencionada da
	como resultado 2 (el número deseado). Y en caso de que mes tome el valor 1, la relación anterior dará como resultado 24 (es decir, las 24 operaciones
	algebraicas comentadas anteriormente).
	
		Si el número ingresado es menor que 1 o mayor a 12, no se hará ninguna operación algebraica debido a que no entrará dentro de ninguno de los 
	cases del switch. Por lo tanto, sólo se contabilizarían las operaciones de comparación (que ya fueron mencionadas al principio del ciclo switch).*/
	
	cout<<"La cantidad de dias que faltan para finalizar el anio es de: " << cantidad<<endl; /*2 operaciones de salida, porque se muestra un mensaje por 
	pantalla y el valor de la variable "sum"; más 1 operación de salto de línea. 3 operaciones en total.*/
	
	return 0;
}

