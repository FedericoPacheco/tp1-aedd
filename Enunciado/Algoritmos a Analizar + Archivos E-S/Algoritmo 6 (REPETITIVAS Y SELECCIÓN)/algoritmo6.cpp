#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	
	do {
		system("cls");
		cout << "\t\t\tIdentificación de Signos y Trilogías" << endl << 
				"\t\t\t-------------------------------------" << endl << endl << 
				"\t\t\t Ingrese un número del 1 al 12 que identifique un signo del zodíaco " << endl << 
				"\t\t\t o 0 para salir de la aplicación" << endl << endl <<
				"\t\t\t Opción: ";
	
		cin >> numero;
		cout << endl;
		
		if (numero==0)
			cout << "\t\t\t  *** Gracias por utilizar la aplicación ***" << endl;
		else if(numero <1 or numero >12)
		   cout << "\t\t\t ERROR: El número " << numero << 
		   " no está asociado a ningún signo. Vuelva a intentarlo." << endl;
		else if (numero<4) {
			cout << "\t\t\t Signo de la primer trilogía: ";
			switch(numero) {
				case 1: cout << "Aries" << endl;
					break;
				case 2: cout << "Tauro" << endl;
					break;
				case 3: cout << "Géminis" << endl;
					break;
			}
		}
		else if (numero<7) {
			cout << "\t\t\t Signo de la segunda trilogía: ";
			switch(numero) {
				case 4: cout << "Cáncer" << endl;
					break;
				case 5: cout << "Leo" << endl;
					break;
				case 6: cout << "Virgo" << endl;
					break;
			}
		}
		else if (numero<10) {
			cout << "\t\t\t Signo de la tercer trilogía: ";
			switch(numero) {
				case 7: cout << "Libra" << endl;
					break;
				case 8: cout << "Escorpio" << endl;
					break;
				case 9: cout << "Sagitario" << endl;
					break;
			}
		}
		else {
			cout << "\t\t\t Signo de la cuarta trilogía: ";
			switch(numero) {
				case 10: cout << "Capricornio" << endl;
					break;
				case 11: cout << "Acuario" << endl;
					break;
				case 12: cout << "Piscis" << endl;
					break;
			}
		}

		cout << endl;
		system("pause");
		
	} while(numero!=0);		
	
	return 0;
}

