/* Se ingresa un punto del plano cartesiano y debe identificarse el lugar
donde se encuentra dentro del mismo y adem�s, la distancia hasta el origen
de coordenadas. Si �sta es menor a 50, el punto se considera cercano y
queda definido como se ingres�. Si en cambio es mayor a 50 y menor a 100, 
se considera un punto lejano y se debe realizar un ajuste, quedando definidos 
los elementos del punto como x = |x|-30 e y = |y|-30 respectivamente.
Por �ltimo, aquellos puntos cuya distancia al origen sea mayor a 100 se consideran
muy lejanos, debi�ndose s�lo ajustar los que tengan una distancia menor a 200
dividiendo cada coordenada por 10. Los puntos con una distancia mayor a 200 se
ignoran. */
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]) {
	
	int x, y; 	//2 operaciones de declaraci�n, porque se declaran dos variables enteras.
	
	float distanciaOrigen;	//1 operaci�n de declaraci�n, porque se declara una variable flotante.
	
	cout << "Ingrese un punto del plano cartesiano P(x,y):" << endl; /*1 operaci�n de salida, porque se muestra un mensaje por pantalla; m�s 1 operaci�n
	de salto de l�nea. 2 operaciones en total.*/
	
	cout << "x: ";	//1 operaci�n de salida, porque se muestra un mensaje por pantalla.
	
	cin >> x;	//1 operaci�n de entrada, porque ingresa una variable por teclado.
	
	cout << "y: ";	//1 operaci�n de salida, porque se muestra un mensaje por pantalla.
	
	cin >> y;	//1 operaci�n de entrada, porque ingresa una variable por teclado.
	
	// �D�nde est� el punto?
	if (x>0 && y>0){ 
		/*Si x>0. 1 operaci�n de comparaci�n, porque se compara el valor de la variable "x"; m�s 1 operaci�n l�gica, porque se opera el "&&";
	y, por �ltimo, 1 operaci�n de comparaci�n porque se compara el valor de la variable "y". 3 operaciones en total.
		
		Si x<0. 1 operaci�n de comparaci�n, porque se compara el valor de "x"; m�s 1 operaci�n l�gica, porque se opera el "&&". 2 operaciones en total.*/
		
		cout << "El punto ingresado se encuentra en el primer cuadrante" << endl; /*1 operaci�n de salida, porque se muestra un mensaje por pantalla;
		m�s 1 operaci�n de salto de l�nea. 2 operaciones en total.*/
	}
	else if (x<0 && y>0){ 
		/*Si x>0. Se contabilizan 3 operaciones anteriores (1.x>0,&&,y>0). Luego, 1 operaci�n de comparaci�n, porque se compara el 
	valor de "x"; y una operaci�n l�gica, porque se opera el "&&". 5 operaciones en total.
		
		Si x<0. Se contabilizan 2 operaciones anteriores (1.x>0,&&). Luego, 1 operaci�n de comparaci�n, porque se compara el valor de la variable "x"; 
	m�s 1 operaci�n l�gica, porque se opera el "&&"; y, por �ltimo, 1 operaci�n de comparaci�n, porque se compara el valor de la variable "y". 5 operaciones
	en total. */
		
		cout << "El punto ingresado se encuentra en el segundo cuadrante" << endl; /*1 operaci�n de salida, porque se muestra un mensaje por pantalla; 
		m�s 1 operaci�n de salto de l�nea. 2 operaciones en total.*/
	}
	else if (x<0 && y<0){ 
		/*Si x>0. Se contabilizan 5 operaciones anteriores (1.x>0,&&,y>0), (2.x<0,&&). Luego, 1 operaci�n de comparaci�n, 
	porque se compara el valor de "x"; y una operaci�n l�gica, porque se opera el "&&". 7 operaciones en total.
		
		Si x<0. Se contabilizan 5 operaciones anteriores (1.x>0,&&), (2.x<0,&&,y>0). Luego, 1 operaci�n de comparaci�n, porque se compara el valor de la
	variable "x"; m�s 1 operaci�n l�gica, porque se opera el "&&"; y, por �ltimo, 1 operaci�n de comparaci�n, porque se compara el valor de la variable "y". 
	8 operaciones en total. */
		
		cout << "El punto ingresado se encuentra en el tercer cuadrante" << endl; /*1 operaci�n de salida, porque se muestra un mensaje por pantalla;
		m�s 1 operaci�n de salto de l�nea. 2 operaciones en total.*/
	}
	else if (x>0 && y<0){ 
		/*Si x>0. Se contabilizan 7 operaciones anteriores (1.x>0,&&,y>0), (2.x<0,&&), (3.x<0,&&). Luego, 1 operaci�n de 
	comparaci�n, porque se compara el valor de la variable "x"; m�s 1 operaci�n l�gica, porque se opera el "&&"; y por �ltimo, 1 operaci�n de comparaci�n,
	porque se compara el valor de la variable "y". 10 operaciones en total.
		
		Si x<0. Se contabilizan 8 operaciones anteriores (1.x<0,&&), (2.x<0,&&,y>0), (3.x<0,&&,y<0). Luego, 1 operaci�n de comparaci�n, porque se compara
	el valor de la variable "x"; m�s 1 operaci�n l�gica, porque se opera el "&&". 10 operaciones en total. */
		
		cout << "El punto ingresado se encuentra en el cuarto cuadrante" << endl; /*1 operaci�n de salida, porque se muestra un mensaje por pantalla;
		m�s 1 operaci�n de salto de l�nea. 2 operaciones en total.*/
	}
	else if (x==0 && y!=0){ 
		/*Si x!=0. Se contabilizan 10 operaciones anteriores (no es necesario colocar el orden de las operaciones
	dado a que cualquier disposici�n conduce a que sean 10 operaciones). Luego, 1 operaci�n de comparaci�n, porque se compara el valor de la variable 
	"x"; m�s 1 operaci�n l�gica, porque se opera el "&&". 12 operaciones en total.
		
		Si x==0. Se contabilizan 8 operaciones anteriores (1.x>0,&&), (2.x<0,&&), (3.x<0,&&), (4.x>0,&&). Luego, 1 operaci�n de comparaci�n, porque se
	compara el valor de la variable "x"; m�s 1 operaci�n l�gica, porque se opera el "&&"; y por �ltimo, 1 operaci�n de comparaci�n, porque se compara el
	valor de la variable "y". 11 operaciones en total.*/
		
		cout << "El punto ingresado est� sobre el eje y" << endl; /*1 operaci�n de salida, porque se muestra un mensaje por pantalla; m�s 1 operaci�n de 
		salto de l�nea. 2 operaciones en total.*/
	}
	else if (x!=0 && y==0){ 
		/*Si x!=0. Se contabilizan 10 operaciones anteriores (no es necesario colocar el orden de las operaciones dado a que cualquier 
	disposici�n conduce a que sean 10 operaciones), y tambi�n se contabilizan 2 operaciones anteriores m�s (5.x==0,&&). Luego, 1 operaci�n de comparaci�n, 
	porque se compara el valor de la variable "x"; m�s 1 operaci�n l�gica, porque se opera el "&&"; y por �ltimo, 1 operaci�n de comparaci�n, porque se 
	compara el valor de la variable "y". 15 operaciones en total.
		
		Si x==0. Se contabilizan 10 operaciones anteriores (no es necesario colocar el orden de las operaciones dado a que cualquier disposici�n conduce 
	a que sean 10 operaciones), y tambi�n se contabilizan 3 operaciones anteriores m�s (5.x==0,&&,y!=0). Luego, 1 operaci�n de comparaci�n, porque se 
	compara el valor de la variable "x"; m�s 1 operaci�n l�gica, porque se opera el "&&". 15 operaciones en total.*/
		
		cout << "El punto ingresado est� sobre el eje x" << endl; /*1 operaci�n de salida, porque se muestra un mensaje por pantalla; m�s 1 operaci�n de 
		salto de l�nea. 2 operaciones en total.*/
	}
	else{ /*13 operaciones algebraicas (1.x>0,&&), (2.x<0,&&), (3.x<0,&&), (4.x>0,&&), (5.x==0,&&,y!=0), (6.x!=0,&&).*/
		
		cout << "El punto inresado est� en el origen" << endl; /*1 operaci�n de salida, porque se muestra un mensaje por pantalla; m�s 1 operaci�n de 
		salto de l�nea. 2 operaciones en total.*/
	}
	
	//A CONTINUACI�N, SE ABREVIAR� LA VARIABLE "distanciaOrigen" COMO "dO" PARA MAYOR ENTENDIMIENTO.
	
	// �A qu� distancia del origen se encuentra?
	distanciaOrigen = sqrt(x*x + y*y); /*4 operaciones algebraicas, primero se multiplican "x" e "y" consigo mismas, a continuaci�n se suman esos
	resultados, luego se le aplica la funci�n "sqrt" al resultado final; m�s 1 operaci�n de asignaci�n, porque ese resultado es alamacenado en la
	variable "dO". 5 operaciones en total.*/
	
	if(distanciaOrigen<=50){ 
		/*Si dO<50. 1 operaci�n de comparaci�n, porque se compara el valor de "dO".
		
		Si dO>50. 2 operaciones de comparaci�n, porque primero se compara si la variable "dO" es menor a 50 y luego se compara si es igual.*/
		
		cout << "El punto es cercano, no hay que hacerle ajustes." << endl; /*1 operaci�n de salida, porque se muestra un mensaje por pantalla; m�s 1 
		operaci�n de salto de l�nea. 2 operaciones en total.*/
	}
	else if (distanciaOrigen > 50 && distanciaOrigen < 100){ /*Se contabilizan 2 operaciones anteriores (dO<50,dO==50). Luego, 2 operaciones de comparaci�n,
		porque se compara el valor de "dO" dos veces; m�s una operaci�n l�gica, porque se opera el "&&". 5 operaciones en total.*/
		
		cout << "El punto es lejano, se realiza un ajuste" << endl;/*1 operaci�n de salida, porque se muestra un mensaje por pantalla; m�s 1 operaci�n 
		de salto de l�nea. 2 operaciones en total.*/
		
		x = abs(x) - 30; /*2 operaciones algebraicas, porque primero se opera con la funci�n "abs" a la variable "x" y luego se le resta 30; m�s 1 operaci�n
		de asignaci�n, porque se le asigna el resultado anterior a la variable "x". 3 operaciones en total.*/
		
		y = abs(y) - 30;/*2 operaciones algebraicas, porque primero se opera con la funci�n "abs" a la variable "y" y luego se le resta 30; m�s 1 operaci�n
		de asignaci�n, porque se le asigna el resultado anterior a la variable "y". 3 operaciones en total.*/
		
		cout << "Nuevo punto: P(" << x << "," << y << ")." << endl; /*5 operaciones de salida, porque se muestran tres mensajes por pantalla y dos valores 
		de variables, "x" e "y"; m�s 1 operaci�n de salto de l�nea. 6 operaciones en total.*/
	}
	else{
		cout << "El punto es muy lejano" << endl;/*1 operaci�n de salida, porque se muestra un mensaje por pantalla; m�s 1 operaci�n de salto de l�nea.
		2 operaciones en total.*/
		
		if(distanciaOrigen < 200){ /*Se contabilizan 5 operaciones anteriores (dO<50,dO==50), (dO>50,&&,dO<100). Luego, 1 operaci�n de comparaci�n,
			porque se compara el valor de "dO". 6 operaciones en total.*/
			cout << "Se realiza un ajuste" << endl;/*1 operaci�n de salida, porque se muestra un mensaje por pantalla; m�s 1 operaci�n de salto de l�nea.
			2 operaciones en total.*/
			
			x /= 10; /*1 operaci�n algebraica, porque se divide a la variable "x" por 10; m�s 1 operaci�n de asignaci�n, porque se le asigna el resultado
			a la misma variable "x". 2 operaciones en total.*/
			
			y /= 10; /*1 operaci�n algebraica, porque se divide a la variable "y" por 10; m�s 1 operaci�n de asignaci�n, porque se le asigna el resultado
			a la misma variable "y". 2 operaciones en total.*/
			
			cout << "Nuevo punto: P(" << x << "," << y << ")." << endl; /*5 operaciones de salida, porque se muestran tres mensajes por pantalla y dos valores 
			de variables, "x" e "y"; m�s 1 operaci�n de salto de l�nea. 6 operaciones en total.*/
		}
		else{ //Se contabiliza 1 operaci�n anterior (dO<200).
			cout << "No pueden realizarse ajustes" << endl;/*1 operaci�n de salida, porque se muestra un mensaje por pantalla; m�s 1 operaci�n de salto
			de l�nea. 2 operaciones en total.*/
		}
	}
	
	
	return 0;
}
