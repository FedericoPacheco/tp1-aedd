#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int mes,cantidad=0;
	cout<<"Ingrese un mes: ";
	cin>>mes;
	switch(mes) {
	case 1: cantidad += 31;
	case 2: cantidad += 28;
	case 3: cantidad += 31;
	case 4: cantidad += 30;
	case 5: cantidad += 31;
	case 6: cantidad += 30;
	case 7: cantidad += 31;
	case 8: cantidad += 31;
	case 9: cantidad += 30;
	case 10: cantidad += 31;
	case 11: cantidad += 30;
	case 12: cantidad += 31;
	}
	cout<<"La cantidad de dias que faltan para finalizar el anio es de: " << cantidad<<endl;
	return 0;
}

