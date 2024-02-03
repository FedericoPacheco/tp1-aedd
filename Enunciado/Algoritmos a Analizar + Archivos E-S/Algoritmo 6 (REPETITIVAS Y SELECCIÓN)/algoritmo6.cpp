#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	
	do {
		system("cls");
		cout << "\t\t\tIdentificaci�n de Signos y Trilog�as" << endl << 
				"\t\t\t-------------------------------------" << endl << endl << 
				"\t\t\t Ingrese un n�mero del 1 al 12 que identifique un signo del zod�aco " << endl << 
				"\t\t\t o 0 para salir de la aplicaci�n" << endl << endl <<
				"\t\t\t Opci�n: ";
	
		cin >> numero;
		cout << endl;
		
		if (numero==0)
			cout << "\t\t\t  *** Gracias por utilizar la aplicaci�n ***" << endl;
		else if(numero <1 or numero >12)
		   cout << "\t\t\t ERROR: El n�mero " << numero << 
		   " no est� asociado a ning�n signo. Vuelva a intentarlo." << endl;
		else if (numero<4) {
			cout << "\t\t\t Signo de la primer trilog�a: ";
			switch(numero) {
				case 1: cout << "Aries" << endl;
					break;
				case 2: cout << "Tauro" << endl;
					break;
				case 3: cout << "G�minis" << endl;
					break;
			}
		}
		else if (numero<7) {
			cout << "\t\t\t Signo de la segunda trilog�a: ";
			switch(numero) {
				case 4: cout << "C�ncer" << endl;
					break;
				case 5: cout << "Leo" << endl;
					break;
				case 6: cout << "Virgo" << endl;
					break;
			}
		}
		else if (numero<10) {
			cout << "\t\t\t Signo de la tercer trilog�a: ";
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
			cout << "\t\t\t Signo de la cuarta trilog�a: ";
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

