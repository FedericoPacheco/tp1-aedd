/* Se ingresa un punto del plano cartesiano y debe identificarse el lugar
donde se encuentra dentro del mismo y además, la distancia hasta el origen
de coordenadas. Si ésta es menor a 50, el punto se considera cercano y
queda definido como se ingresó. Si en cambio es mayor a 50 y menor a 100, 
se considera un punto lejano y se debe realizar un ajuste, quedando definidos 
los elementos del punto como x = |x|-30 e y = |y|-30 respectivamente.
Por último, aquellos puntos cuya distancia al origen sea mayor a 100 se consideran
muy lejanos, debiéndose sólo ajustar los que tengan una distancia menor a 200
dividiendo cada coordenada por 10. Los puntos con una distancia mayor a 200 se
ignoran. */
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]) {
	int x, y; 
	float distanciaOrigen;
	
	cout << "Ingrese un punto del plano cartesiano P(x,y):" << endl;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	
	// ¿Dónde está el punto?
	if (x>0 && y>0){
		cout << "El punto ingresado se encuentra en el primer cuadrante" << endl;
	}
	else if (x<0 && y>0){
		cout << "El punto ingresado se encuentra en el segundo cuadrante" << endl;
	}
	else if (x<0 && y<0){
		cout << "El punto ingresado se encuentra en el tercer cuadrante" << endl;
	}
	else if (x>0 && y<0){
		cout << "El punto ingresado se encuentra en el cuarto cuadrante" << endl;
	}
	else if (x==0 && y!=0){
		cout << "El punto ingresado está sobre el eje y" << endl;
	}
	else if (x!=0 && y==0){
		cout << "El punto ingresado está sobre el eje x" << endl;
	}
	else{
		cout << "El punto inresado está en el origen" << endl;
	}
	
	
	// ¿A qué distancia del origen se encuentra?
	distanciaOrigen = sqrt(x*x + y*y);
	
	if(distanciaOrigen<=50){
		cout << "El punto es cercano, no hay que hacerle ajustes." << endl;
	}
	else if (distanciaOrigen > 50 && distanciaOrigen < 100){
		cout << "El punto es lejano, se realiza un ajuste" << endl;
		x = abs(x) - 30;
		y = abs(y) - 30;
		cout << "Nuevo punto: P(" << x << "," << y << ")." << endl;
	}
	else{
		cout << "El punto es muy lejano" << endl;
		if(distanciaOrigen < 200){
			cout << "Se realiza un ajuste" << endl;
			x /= 10;
			y /= 10;
			cout << "Nuevo punto: P(" << x << "," << y << ")." << endl;
		}
		else{
			cout << "No pueden realizarse ajustes" << endl;
		}
	}
	
	
	return 0;
}
