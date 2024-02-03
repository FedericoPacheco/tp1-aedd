#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

	int n; 
	
	cout<<"Ingrese un numero decimal a convertir que este en el rango (0, 65535]: "; 
	cin>>n; 
	
	if(n > 0 && n <= 65535) { 
		char base; 
		cout<<"Ingrese 'b' para convertir a binario o 'o' para convertir a octal: "; 
		cin>>base; 
		
		if( base == 'o' || base == 'O') {
			int temp = n, i = 1, octal = 0;
			
			while(temp > 0) {
				octal += (temp % 8) * i;
				i *= 10;
				temp /= 8;
			}
			
			cout << "El numero en base8 es " << octal << endl;
		} else if (base == 'b' || base == 'B') {
			int i = 65536;
			bool yaMostroUnUno = false;
			
			cout << "El numero en binario es ";
			while(i > 0) {
				if(yaMostroUnUno || n & i) {
					cout << ((n & i) != 0);
					yaMostroUnUno = true;
				}
				i/=2;
			}
			cout << endl;
		} else {
			cout << "Error - Base incorrecta. Saliendo..." << endl;
		}
	} else {
		cout << "Error - Numero fuera de rango. Saliendo..." << endl;
	}
	
	return 0;
}

