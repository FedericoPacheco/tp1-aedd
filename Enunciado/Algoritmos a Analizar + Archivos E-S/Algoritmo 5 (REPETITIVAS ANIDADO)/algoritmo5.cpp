#include <iostream>
#include <cmath>

using namespace std;
int main() {

	int alto, ancho, posicionInicial, posicionFinal;
	
	cout <<"Ingrese el alto deseado: ";
	cin >> alto;
	
	ancho = alto + (alto - 1);	
	posicionInicial = (int)floor(((float)ancho) / 2);
	posicionFinal = posicionInicial;
	
	for(int fila = 0; fila < alto; fila++) {
		for (int columna = 0; columna < ancho; columna++) {
				if (posicionInicial <= columna && columna <= posicionFinal)
				{
					cout << '*';
				}
				else
					{
					cout << ' ';
				}
		}	
		cout << endl;
		posicionInicial -= 1;
		posicionFinal += 1;
	}

}
