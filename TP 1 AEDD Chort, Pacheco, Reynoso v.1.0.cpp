#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <windows.h>
#include <stdlib.h>
using namespace std;

//Prototipos de funciones 

//MENÚES
void menu_principal();
void menu_analizar_algoritmos();
void menu_visualizar_algoritmos();
void cerrar_programa();
void menu_ayuda();
void configuracion();

//LOGO Y PANTALLA DE CARGA
void logo_inicial();
void pantalla_de_carga();
void logo_UTN();

//ANÁLISIS ALGORITMOS
void analizar_algoritmo_1();
void analizar_algoritmo_2();
void analizar_algoritmo_3();
void analizar_algoritmo_4();
void analizar_algoritmo_5();
void analizar_algoritmo_6();
void analizar_algoritmo_7();

//VISUALIZACIÓN ALGORITMOS
void visualizar_algoritmo_n(int);

//FUNCIONES AUXILIARES
void resetear_txts();
void error_analizar();
void cabecera_visualizar(int);

int main()
{
	pantalla_de_carga();
	logo_inicial();
	resetear_txts();

	menu_principal();

	return 0;
}

//FUNCIÓN PRINCIPAL (MENÚ)
void menu_principal()
{
	char menu_pal = 'z';

	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)

	while (menu_pal != 'a' && menu_pal != 'A' && menu_pal != 'b' && menu_pal != 'B' && menu_pal != 's' && menu_pal != 'S' && menu_pal != 'c' && menu_pal != 'C' && menu_pal != 'd' && menu_pal != 'D')
	{
		system("CLS");

		cout << char(201); for (int i = 0; i < 118; i++) cout << char(205); cout << char(187) << "\n";

		cout << char(186);
		for (int i = 0; i < 52; i++) cout << " ";
		cout << "MEN" << char(233) << " PRINCIPAL";
		for (int i = 0; i < 52; i++) cout << " ";
		cout << char(186) << "\n";

		cout << char(200); for (int i = 0; i < 118; i++) cout << char(205); cout << char(188) << "\n\n";


		for (int i = 0; i < 47; i++) cout << " ";
		cout << "A.- Analizar Algoritmos\n\n\n";

		for (int i = 0; i < 46; i++) cout << " ";
		cout << "B.- Visualizar Resultados\n\n\n";

		for (int i = 0; i < 46; i++) cout << " ";
		cout << "S.- Cerrar la aplicaci" << char(162) << "n\n\n";

		for (int i = 0; i < 45; i++)cout << " ";
		cout << "___________________________\n\n";
		for (int i = 0; i < 55; i++) cout << " ";
		cout << "C.- Ayuda\n\n\n";

		for (int i = 0; i < 51; i++) cout << " ";
		cout << "D.- Configuraci" << char(162) << "n\n\n\n\n\n";

		for (int i = 0; i < 40; i++) cout << " ";
		cout << "Ingrese la opci" << char(162) << "n que desee realizar: ";


		cin >> menu_pal;

		if (menu_pal != 'a' && menu_pal != 'A' && menu_pal != 'b' && menu_pal != 'B' && menu_pal != 's' && menu_pal != 'S' && menu_pal != 'c' && menu_pal != 'C' && menu_pal != 'd' && menu_pal != 'D')
		{
			cout << "\n\n\n"; for (int i = 0; i < 38; i++) cout << " ";  cout << char(173) << "Error! El caracter ingresado es inv" << char(160) << "lido.";
			Beep(100, 350);
			Sleep(1000);
		}
	}

	Beep(700, 350);

	switch (menu_pal)
	{
	case 'a':
	case 'A':
		menu_analizar_algoritmos(); //Apertura del menú ANALIZAR por medio del menú principal
		break;
	case 'b':
	case 'B':
		menu_visualizar_algoritmos(); //Apertura del menú VISUALIZAR por medio del menú principal
		break;
	case 's':
	case 'S':
		cerrar_programa(); //Apertura del CIERRE DEL PROGRAMA por medio del menú principal, comprobar si el usuario quiere finalizar el programa o no
		break;
	case 'c':
	case 'C':
		menu_ayuda();
		break;
	case 'd':
	case 'D':
		configuracion();
		break;
	}
}
void menu_ayuda()
{
	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)
	system("cls");

	cout
		<< "\n"
		<< " " << char(157) << " - Presione las teclas indicadas en la interfaz gr" << char(160) << "fica para navegar a trav" << char(130) << "s de los men" << char(163) << "es (" << char(173) << "no se preocupe si se\n"
		<< " equivoca!). \n\n"
		<< " " << char(157) << " - Aseg" << char(163) << "rese de disponer en una misma carpeta el presente programa junto a los archivos .txt (con la cantidad de\n"
		<< " casos de prueba m" << char(160) << "s el ingreso de los datos) de los algoritmos que desea analizar. El nombre de dichos archivos debe\n"
		<< " ser " << char(174) << " pruebaAlgoritmoN.txt " << char(175) << ", con 1 <= N <= 7, seg" << char(163) << "n sea el caso.\n\n"
		<< " " << char(157) << " - Luego de analizar un algoritmo, en la carpeta donde originalmente tiene contenido el programa se genenar" << char(160) << "n .txt\n"
		<< " con el nombre " << char(174) << " ejecucionAlgoritmoN.txt " << char(175) << " con los resultados pertinentes del an" << char(160) << "lisis. Tan pronto como vuelva a\n"
		<< " ejecutar el programa, se resetear" << char(160) << "n dichos archivos (" << char(173) << "ap" << char(160) << "rtelos de la carpeta si desea conservar los resultados!).\n\n\n\n ";

	system("pause");
	Beep(700, 350);

	menu_principal();
}
void configuracion() // Cambia el color de la fuente y fondo de la consola
{
	char color = 'z';

	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)

	while (color != 'a' && color != 'A' && color != 'b' && color != 'B' && color != 's' && color != 'S' && color != 'c' && color != 'C' && color != 'd' && color != 'D')
	{
		system("CLS");

		cout << char(201); for (int i = 0; i < 118; i++) cout << char(205); cout << char(187) << "\n";

		cout << char(186);
		for (int i = 0; i < 48; i++) cout << " ";
		cout << "Color de fondo / fuente";
		for (int i = 0; i < 47; i++) cout << " ";
		cout << char(186) << "\n";

		cout << char(200); for (int i = 0; i < 118; i++) cout << char(205); cout << char(188) << "\n\n";


		for (int i = 0; i < 51; i++) cout << " ";
		cout << "A.- Blanco / Negro\n\n\n";

		for (int i = 0; i < 52; i++) cout << " ";
		cout << "B.- Gris / Azul\n\n\n";

		for (int i = 0; i < 50; i++) cout << " ";
		cout << "C.- Negro / Violeta\n\n\n";

		for (int i = 0; i < 55; i++) cout << " ";
		cout << "D.- " << char(173) << "BSOD!\n\n\n";

		for (int i = 0; i < 46; i++) cout << " ";
		cout << "S.- Volver al Men" << char(163) << " Anterior\n\n\n\n";

		for (int i = 0; i < 40; i++) cout << " ";
		cout << "Ingrese la opci" << char(162) << "n que desee realizar: ";


		cin >> color;

		if (color != 'a' && color != 'A' && color != 'b' && color != 'B' && color != 's' && color != 'S' && color != 'c' && color != 'C' && color != 'd' && color != 'D')
		{
			cout << "\n\n\n"; for (int i = 0; i < 38; i++) cout << " ";  cout << char(173) << "Error! El caracter ingresado es inv" << char(160) << "lido.";
			Beep(100, 350);
			Sleep(1000);
		}
	}

	Beep(700, 350);

	switch (color)
	{
	case 'a':
	case 'A':
		system("color F0");
		configuracion();
		break;
	case 'b':
	case 'B':
		system("color 79");
		configuracion();
		break;
	case 'c':
	case 'C':
		system("color 0D");
		configuracion();
		break;
	case 'd':
	case 'D':
		system("color 1f");
		cout << "\a";
		configuracion();
		break;
	case 's':
	case 'S':
		menu_principal();
		break;
	}
}

//Algoritmos que se ANALIZAN
void menu_analizar_algoritmos()
{
	char analisis_pal = 'z';
	static bool verif_analisis[7] = { 1,1,1,1,1,1,1 }; // las variables y sus valores no "mueren" al finalizar la función


	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)

	while
		(
			analisis_pal != 'a' && analisis_pal != 'A' && analisis_pal != 'b' && analisis_pal != 'B' &&
			analisis_pal != 'c' && analisis_pal != 'C' && analisis_pal != 'd' && analisis_pal != 'D' &&
			analisis_pal != 'e' && analisis_pal != 'E' && analisis_pal != 'f' && analisis_pal != 'F' &&
			analisis_pal != 'g' && analisis_pal != 'G' && analisis_pal != 's' && analisis_pal != 'S'
			)
	{
		system("CLS");

		//Opciones del menú ANALIZAR por pantalla
		cout << char(201); for (int i = 0; i < 118; i++) cout << char(205); cout << char(187) << "\n";

		cout << char(186);
		for (int i = 0; i < 48; i++) cout << " ";
		cout << "Analizar Algoritmos C++";
		for (int i = 0; i < 47; i++) cout << " ";
		cout << char(186) << "\n";

		cout << char(200); for (int i = 0; i < 118; i++) cout << char(205); cout << char(188) << "\n\n";


		for (int i = 0; i < 28; i++) cout << " ";
		cout << "A.- Algoritmo #1 SECUENCIAL (Soluci" << char(162) << "n a problema de sumatoria)\n\n\n";

		for (int i = 0; i < 24; i++) cout << " ";
		cout << "B.- Algoritmo #2 IF/ELSE (Soluci" << char(162) << "n a problema de selecci" << char(162) << "n completa)\n\n\n";

		for (int i = 0; i < 25; i++) cout << " ";
		cout << "C.- Algoritmo #3 SWITCH (Soluci" << char(162) << "n a problema de selecci" << char(162) << "n m" << char(163) << "ltiple)\n\n\n";

		for (int i = 0; i < 31; i++) cout << " ";
		cout << "D.- Algoritmo #4 FOR (Soluci" << char(162) << "n a problema de sumatoria)\n\n\n";

		for (int i = 0; i < 28; i++) cout << " ";
		cout << "E.- Algoritmo #5 FOR (Soluci" << char(162) << "n a problema repetitivo-anidado)\n\n\n";

		for (int i = 0; i < 25; i++) cout << " ";
		cout << "F.- Algoritmo #6 DO-WHILE / IF / SWITCH (Soluci" << char(162) << "n problema zod" << char(161) << "aco)\n\n\n";

		for (int i = 0; i < 27; i++) cout << " ";
		cout << "G.- Algoritmo #7 WHILE (Soluci" << char(162) << "n problema decimal-binario-octal)\n\n\n";

		for (int i = 0; i < 44; i++) cout << " ";
		cout << "S.- Volver al Men" << char(163) << " Anterior\n\n\n\n";

		for (int i = 0; i < 40; i++) cout << " ";
		cout << "Ingrese la opci" << char(162) << "n que desee realizar: ";


		cin >> analisis_pal;

		if
			(
				analisis_pal != 'a' && analisis_pal != 'A' && analisis_pal != 'b' && analisis_pal != 'B' &&
				analisis_pal != 'c' && analisis_pal != 'C' && analisis_pal != 'd' && analisis_pal != 'D' &&
				analisis_pal != 'e' && analisis_pal != 'E' && analisis_pal != 'f' && analisis_pal != 'F' &&
				analisis_pal != 'g' && analisis_pal != 'G' && analisis_pal != 's' && analisis_pal != 'S'
				)
		{
			cout << "\n\n\n"; for (int i = 0; i < 38; i++) cout << " ";  cout << char(173) << "Error! El caracter ingresado es inv" << char(160) << "lido.";
			Beep(100, 350);
			Sleep(1000);
		}
	}

	Beep(700, 350);

	//Analizar el algoritmo "n" según el caracter ingresado

	switch (analisis_pal)
	{
	case 'a':
	case 'A':
		if (verif_analisis[0] == true)
		{
			verif_analisis[0] = false;
			analizar_algoritmo_1();
		}
		else error_analizar();
		break;
	case 'b':
	case 'B':
		if (verif_analisis[1] == true)
		{
			verif_analisis[1] = false;
			analizar_algoritmo_2();
		}
		else error_analizar();
		break;
	case 'c':
	case 'C':
		if (verif_analisis[2] == true)
		{
			verif_analisis[2] = false;
			analizar_algoritmo_3();
		}
		else error_analizar();
		break;
	case 'd':
	case 'D':
		if (verif_analisis[3] == true)
		{
			verif_analisis[3] = false;
			analizar_algoritmo_4();
		}
		else error_analizar();
		break;
	case 'e':
	case 'E':
		if (verif_analisis[4] == true)
		{
			verif_analisis[4] = false;
			analizar_algoritmo_5();
		}
		else error_analizar();
		break;
	case 'f':
	case 'F':
		if (verif_analisis[5] == true)
		{
			verif_analisis[5] = false;
			analizar_algoritmo_6();
		}
		else error_analizar();
		break;
	case 'g':
	case 'G':
		if (verif_analisis[6] == true)
		{
			verif_analisis[6] = false;
			analizar_algoritmo_7();
		}
		else error_analizar();
		break;
	case 's':
	case 'S':
		menu_principal();
		break;
	}
}
void error_analizar()
{
	system("cls");
	cout << "\n"; for (int i = 0; i < 39; i++) cout << " ";
	cout << char(173) << "Error! El algoritmo ya ha sido analizado.\n\n\n ";
	for (int i = 0; i < 40; i++) cout << " ";
	system("pause");
	Beep(700, 350);
	menu_analizar_algoritmos();
}

void analizar_algoritmo_1()
{
	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)
	system("CLS");

	ifstream pruebalgoritmo1;
	ofstream ejecalgoritmo1;
	pruebalgoritmo1.open("pruebaAlgoritmo1.txt");
	ejecalgoritmo1.open("ejecucionAlgoritmo1.txt");

	int casos_prueba;

	pruebalgoritmo1 >> casos_prueba;

	for (int i = 0; i < casos_prueba; i++)
	{
		int oper, var, tamvar;
		oper = var = tamvar = 0;

		//------------

		int n, sum;
		oper += 2; // 2 operaciones de declaración
		var += 2; // creación de 2 variables
		tamvar += sizeof(int) * 2; // 4 + 4 bytes

		pruebalgoritmo1 >> n; // 1 operación de entrada 
		oper += 1;

		sum = n * (n + 1) / 2;
		oper += 4; // 3 operaciones aritméticas + 1 operación de asignación

		for (int i = 0; i < 120; i++) cout << char(205);
		cout << "\n Salida de A.- Algoritmo #1 SECUENCIAL (para el n" << char(163) << "mero: " << n << ")\n";
		for (int i = 0; i < 120; i++) cout << char(205);
		cout << "\n";

		cout << " Sumatoria = " << sum << endl << endl << endl;
		oper += 3; // 3 operaciones de salida

		ejecalgoritmo1 << oper << " " << var << " " << tamvar << "\n";

		cout << " "; system("pause"); system("cls");
	}

	pruebalgoritmo1.close();
	ejecalgoritmo1.close();

	Beep(700, 350);

	menu_analizar_algoritmos();
}
void analizar_algoritmo_2()
{
	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)
	system("CLS");

	ifstream pruebalgoritmo2;
	ofstream ejecalgoritmo2;

	pruebalgoritmo2.open("pruebaAlgoritmo2.txt");
	ejecalgoritmo2.open("ejecucionAlgoritmo2.txt");

	int casos_prueba, operaciones, variablesUsadas, tamanio;

	pruebalgoritmo2 >> casos_prueba;

	for (int j = 0; j < casos_prueba; j++)
	{
		operaciones = 0;
		variablesUsadas = 0;
		tamanio = 0;

		int x, y;
		operaciones += 2; variablesUsadas += 2; tamanio += 8; //dos operaciones de declaracion,dos variables, tamanio 8 bytes(4 c/variable)

		float distanciaOrigen;
		operaciones++; variablesUsadas += 1; tamanio += 4; //una operacion de declaracion, una variable declarada, tamanio 4 bytes

		//cout << "Ingrese un punto del plano cartesiano P(x,y):" << endl;
		operaciones += 2; //una operacion de salida, una operacion de salto de linea

		//cout << "x: ";
		operaciones++; //una operacion de salida

		pruebalgoritmo2 >> x;
		operaciones++; //una operacion de entrada

		//cout << "y: ";
		operaciones++; //una operacion de salida

		pruebalgoritmo2 >> y;
		operaciones++; //una operacion de entrada

		for (int i = 0; i < 120; i++) cout << char(205);
		cout << "\n Salida de B.- Algoritmo #2 IF/ELSE (para los n" << char(163) << "meros: " << x << "," << y << ")\n";
		for (int i = 0; i < 120; i++) cout << char(205);
		cout << "\n";

		// ¿Dónde está el punto?
		/*1)*/if (x > 0 && y > 0) {
			cout << " El punto ingresado se encuentra en el primer cuadrante" << endl;
			operaciones += 2; //dos operaciones, una de salida y una de salto de linea
			operaciones += 3; //1)x>0,&&,y>0 ==> 2 operaciones de comparacion, 1 operador lógico
		}
		/*2)*/else if (x < 0 && y>0) {
			cout << " El punto ingresado se encuentra en el segundo cuadrante" << endl;
			operaciones += 2; //dos operaciones, una de salida y una de salto de linea
			operaciones += 5; //1)x>0,&&. 2)x<0,&&,y>0 ==> 3 operaciones de comparacion,2 operadores lógicos
		}
		/*3)*/else if (x < 0 && y < 0) {
			cout << " El punto ingresado se encuentra en el tercer cuadrante" << endl;
			operaciones += 2; //dos operaciones, una de salida y una de salto de linea
			operaciones += 8; //1)x>0,&&. 2)x<0,&&,y>0. 3)x<0,&&,y<0 ==> 5 operaciones de comparacion, 3 operadores lógicos
		}
		/*4)*/else if (x > 0 && y < 0) {
			cout << " El punto ingresado se encuentra en el cuarto cuadrante" << endl;
			operaciones += 2; //dos operaciones, una de salida y una de salto de linea
			operaciones += 10; //1)x>0,&&,y>0. 2)x<0,&&. 3)x<0,&&. 4)x>0,&&,y<0 ==> 6 operaciones de comparacion, 4 operadores lógicos
		}
		/*5)*/else if (x == 0 && y != 0) {
			cout << " El punto ingresado est" << char(160) << " sobre el eje y" << endl;
			operaciones += 2; //dos operaciones, una de salida y una de salto de linea
			operaciones += 11; //1)x>0,&&. 2)x<0,&&. 3)x<0,&&. 4)x>0,&&. 5)x==0,&&,y!=0 ==> 6 operaciones de comparacion, 5 operadores lógicos
		}
		/*6)*/else if (x != 0 && y == 0) {
			cout << " El punto ingresado est" << char(160) << " sobre el eje x" << endl;
			operaciones += 2; //dos operaciones, una de salida y una de salto de linea

			if (x > 0) {

				operaciones += 15; //1)x>0,&&,y>0. 2)x<0,&&. 3)x<0,&&. 4)x>0,&&,y<0. 5)x==0,&&. 6)x!=0,&&,y==0 ==> 9 operadores de comparacion, 6 operadores lógicos			
			}
			else {

				operaciones += 15; //1)x>0,&&. 2)x<0,&&,y>0. 3)x<0,&&,y<0. 4)x>0,&&. 5)x==0,&&. 6)x!=0,&&,y==0 ==> 9 operadores de comparacion, 6 operadores lógicos	
			}
			//La cantidad de operaciones es igual a 12 para x>0 Y para x<0
		}
		/*7)*/else {
			cout << " El punto ingresado est" << char(160) << " en el origen" << endl;
			operaciones += 2; //dos operaciones, una de salida y una de salto de linea
			operaciones += 13; //1)x>0,&&. 2)x<0,&&. 3)x<0,&&. 4)x>0,&&. 5)x==0,&&,y!=0. 6)x!=0,&&. ==> 7 operadores de comparacion, 6 operadores lógicos
		}


		// ¿A qué distancia del origen se encuentra?
		distanciaOrigen = sqrt(x * x + y * y);
		operaciones += 5; //4 operaciones algebraicas, una operacion de asignacion

		/*1*/if (distanciaOrigen <= 50) {
			cout << " El punto es cercano, no hay que hacerle ajustes." << endl;
			operaciones += 2; //Una operación de salida. Una operación de salto de línea

			if (distanciaOrigen < 50) {
				operaciones++; //Una operación de comparación
			}
			else {
				operaciones += 2; //Dos operaciones de comparación
			}
		}
		/*2*/else if (distanciaOrigen > 50 && distanciaOrigen < 100) {
			cout << " El punto es lejano, se realiza un ajuste" << endl;
			operaciones += 2; //Una operacion de salida. Una operacion de salto de linea
			operaciones += 5; //1)distanciaOrigen<=50. 2)distanciaOrigen>50,&&,distanciaOrigen<100  ==> Cuatro operaciones de comparación, un operador lógico

			x = abs(x) - 30;
			operaciones += 3; //2 operaciones algebraicas, una operación de asignación

			y = abs(y) - 30;
			operaciones += 3; //2 operaciones algebraicas, una operación de asignación

			cout << " Nuevo punto: P(" << x << "," << y << ")." << endl;
			operaciones += 6; //5 operaciones de salida. Una operaciñon de salto de línea
		}
		/*3*/else {
			cout << " El punto es muy lejano" << endl;
			operaciones += 2; //Una operacion de salida. Una operacion de salto de linea

			operaciones += 5; //1)distanciaOrigen<=50. 2)distanciaOrigen>50,&&,distanciaOrigen<100  ==> Cuatro operaciones de comparación, un operador lógico
			if (distanciaOrigen < 200) {
				operaciones++; //Una operación de comparación (distanciaOrigen < 200)

				cout << " Se realiza un ajuste" << endl;
				operaciones += 2; //Una operacion de salida. Una operacion de salto de linea

				x /= 10;
				operaciones += 2; //Una operación algebraica. Una operación de asignación

				y /= 10;
				operaciones += 2; //Una operación algebraica. Una operación de asignación

				cout << " Nuevo punto: P(" << x << "," << y << ")." << endl;
				operaciones += 6; //5 operaciones de salida. Una operación de salto de línea
			}
			else {
				operaciones++; //Una operación de comparacion (distanciaOrigen < 200)

				cout << " No pueden realizarse ajustes" << endl;
				operaciones += 2; //Una operacion de salida. Una operacion de salto de linea
			}
		}

		ejecalgoritmo2 << operaciones << " " << variablesUsadas << " " << tamanio << "\n";

		cout << "\n\n "; system("pause"); system("cls");
	}

	pruebalgoritmo2.close();
	ejecalgoritmo2.close();

	Beep(700, 350);

	menu_analizar_algoritmos();
}
void analizar_algoritmo_3()
{
	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)
	system("CLS");

	ifstream pruebalgoritmo3;
	ofstream ejecalgoritmo3;

	pruebalgoritmo3.open("pruebaAlgoritmo3.txt");
	ejecalgoritmo3.open("ejecucionAlgoritmo3.txt");

	int casos_prueba, oper, var, tamvar;

	pruebalgoritmo3 >> casos_prueba;

	for (int i = 0; i < casos_prueba; i++)
	{
		var = 0;
		tamvar = 0;
		oper = 0;

		int mes, cantidad = 0;

		var += 1; 			//1 variable en uso
		tamvar += 8;		//2 variables enteras
		oper += 3;	//2 declaraciones y una asignación de valor 

		//cout<<"Ingrese un mes: ";			//Comentado porque no es necesario a el problema

		oper += 1;	//1 salida 

		pruebalgoritmo3 >> mes;

		oper += 1;	//1 entrada 
		oper += 1; //1 operacion (switch)
		if (mes > 0 and mes < 13)
		{
			oper += mes; //numero de comparaciones con los casos del switch
			oper += 26 - 2 * mes; //2 incrementos aritmeticos por caso de prueba, menos los que no se cuentan que son los no comparados
		}
		else
		{
			oper += 12; //Las 12 comparaciones
		}
		var += 1;			//1 variable en uso

		for (int i = 0; i < 120; i++) cout << char(205);
		cout << " Salida de C.- Algoritmo #3 SWITCH (para el n" << char(163) << "mero: " << mes << ")\n";
		for (int i = 0; i < 120; i++) cout << char(205);
		cout << "\n";

		switch (mes) {

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

		cout << " La cantidad de dias que faltan para finalizar el anio es de: " << cantidad << endl << endl << endl;
		oper += 3;	//3 salidas (agregué 2 endl más)

		ejecalgoritmo3 << oper << " " << var << " " << tamvar << endl;

		cout << " "; system("pause"); system("cls");
	}

	pruebalgoritmo3.close();
	ejecalgoritmo3.close();

	Beep(700, 350);

	menu_analizar_algoritmos();

}
void analizar_algoritmo_4()
{
	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)
	system("CLS");

	ifstream pruebalgoritmo4;
	ofstream ejecalgoritmo4;

	pruebalgoritmo4.open("pruebaAlgoritmo4.txt");
	ejecalgoritmo4.open("ejecucionAlgoritmo4.txt");

	int casos_prueba, oper, var, tamvar;

	pruebalgoritmo4 >> casos_prueba;

	for (int j = 0; j < casos_prueba; j++)
	{
		tamvar = 0;
		oper = 0;
		var = 0;

		int n, sum = 0;

		tamvar += 8;		//2 variables enteras que ocupan 4 bytes en memoria cada una 
		oper += 3; 	//2 operaciones de declaración de variables enteras y una operación de asignación de valor
		var += 2; 	//2 variables declaradas

		pruebalgoritmo4 >> n;

		oper += 1; 	//1 operación de entrada

		oper += 2; 	//1 operación de declaración de la variable entera "i" y 1 asignación de valor a la variable 

		for (int i = 1; i <= n; i++)
		{
			sum = sum + i;
			oper += 2;	//1 operación aritmética de suma y 1 operación de asignación de un nuevo valor a la variable sum 

			if (i < n)
			{
				oper += 1;	//1 operación de comparacion con el signo "menor" 
			}
			else
			{
				oper += 2; 	//1 operación de comparación con el signo "menor" y 1 comparación con el signo "igual" 
			}

			oper += 2;	//2 operaciones (i++)

		}

		oper += 2; 	//Compara la variable "i" con "n" con el menor y luego con el igual y ambos dan falso

		for (int i = 0; i < 120; i++) cout << char(205);
		cout << endl << " Salida de D.- Algoritmo #4 FOR (para el n" << char(163) << "mero: " << n << ")\n";
		for (int i = 0; i < 120; i++) cout << char(205);
		cout << "\n";

		cout << " Sumatoria = " << sum << endl << endl;
		oper += 3; 	//3 operaciones de salida a pantalla (agregué 1 endl más) 

		ejecalgoritmo4 << oper << " " << var << " " << tamvar << "\n";

		cout << "\n "; system("pause"); system("cls");
	}

	pruebalgoritmo4.close();
	ejecalgoritmo4.close();

	Beep(700, 350);

	menu_analizar_algoritmos();

}
void analizar_algoritmo_5()
{
	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)
	system("CLS");

	ifstream pruebalgoritmo5;
	ofstream ejecalgoritmo5;

	pruebalgoritmo5.open("pruebaAlgoritmo5.txt");
	ejecalgoritmo5.open("ejecucionAlgoritmo5.txt");

	int casos_prueba;

	pruebalgoritmo5 >> casos_prueba;

	for (int i = 0; i < casos_prueba; i++)
	{

		//variables externas
		int operaciones = 0;
		int variablesUsadas = 0;
		int tamanio = 0;

		int alto, ancho, posicionInicial, posicionFinal;
		operaciones += 4; //4 operaciones de declaracion.
		variablesUsadas += 4; //4 variables declaradas. 4 bytes c/u = 16 bytes
		tamanio += 16;

		//cout <<"Ingrese el alto deseado: ";
		operaciones += 1; //1 operacion de salida

		pruebalgoritmo5 >> alto;
		operaciones += 1; //1 operacion de entrada

		ancho = alto + (alto - 1);
		operaciones += 3; //2 operaciones algebraicas. Una operación de asignación

		posicionInicial = (int)floor(((float)ancho) / 2);
		operaciones += 5; //Una operación de casteo. Una operacion algebraica.Un llamado a la función floor.Una operación de casteo.Una operación de asignación

		posicionFinal = posicionInicial;
		operaciones += 1; //Una operación de asignación


		operaciones += 4; //2 variables declaradas (fila,columna) dentro de los ciclos de los for's. 2 asignaciones de valores a dichas variables
		variablesUsadas += 2; //2 variables declaradas (fila,columna) dentro de los ciclos de los for's
		tamanio += 8;	//2 variables --> 8 bytes

		for (int i = 0; i < 120; i++) cout << char(205);
		cout << endl << " Salida de E.- Algoritmo #5 FOR (para el n" << char(163) << "mero: " << alto << ")\n";
		for (int i = 0; i < 120; i++) cout << char(205);
		cout << "\n\n";

		for (int fila = 0; fila < alto; fila++) {

			operaciones += 3; 	//Incremento de la varibale "fila" en 1. Se compara la variable fila con el "menor" 

			cout << "\t"; //NO ES UNA OPERACIÓN, lo agregué para que quede más centrada la salida

			for (int columna = 0; columna < ancho; columna++) {

				operaciones += 3; 	//Incremento de la varibale "columna" en 1. Se compara la variable columna con el "menor"  

				if (posicionInicial <= columna && columna <= posicionFinal) {

					if (posicionInicial < columna)
					{
						operaciones += 2; //1 comparación con el "menor". 1 operador lógico (&&)

						if (columna < posicionFinal)
						{
							operaciones++; //1 comparación con el "menor"
						}
						else
						{
							operaciones += 2; 	//2 comparaciones (primero con el "menor" y luego con el "igual)
						}
					}
					else
					{
						operaciones += 3; //2 comparaciones (primero con el "menor" y luego con el "igual"). 1 operador lógico (&&)

						if (columna < posicionFinal)
						{
							operaciones++; //1 comparación con el "menor"
						}
						else
						{
							operaciones += 2; 	//2 comparaciones (primero con el "menor" y luego con el "igual)
						}
					}

					cout << '*';
					operaciones++;	//1 operación de salida a pantalla 
				}
				else {

					if (posicionInicial > columna) {

						operaciones += 3; //2 operaciones de comparación (menor/igual). 1 operador lógico (&&)
					}
					else {
						if (posicionInicial < columna)
						{
							operaciones += 4; //1 comparación con el "menor". 1 operador lógico (&&). 2 comparaciones (menor/igual)

						}
						else {

							operaciones += 5; //2 comparaciones (menor/igual). 1 operador lógico (&&). 2 comparaciones (menor/igual)
						}

					}

					cout << ' ';
					operaciones++;	//1 operación de salida a pantalla 
				}
			}

			operaciones++; //Se compara la variable columna con el "menor" y da falso

			cout << endl;
			operaciones++; //Una operación de salto de línea

			posicionInicial -= 1;
			operaciones += 2; //Una operación algebraica. Una operación de asignación

			posicionFinal += 1;
			operaciones += 2; //Una operación algebraica. Una operación de asignación

		}

		operaciones++; //Se compara la variable fila con el "menor" y da falso

		ejecalgoritmo5 << operaciones << " " << variablesUsadas << " " << tamanio << "\n";

		cout << "\n "; system("pause"); system("cls");
	}

	pruebalgoritmo5.close();
	ejecalgoritmo5.close();

	Beep(700, 350);

	menu_analizar_algoritmos();

}
void analizar_algoritmo_6()
{
	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)
	system("CLS");

	ifstream pruebaalgoritmo6;
	ofstream ejealgoritmo6;
	pruebaalgoritmo6.open("pruebaAlgoritmo6.txt");
	ejealgoritmo6.open("ejecucionAlgoritmo6.txt");
	int oper, var, tamvar, casos_prueba;

	//-------------

	pruebaalgoritmo6 >> casos_prueba;

	for (int i = 0; i < casos_prueba; i++)
	{
		oper = var = tamvar = 0;

		int numero;
		oper++; // 1 operación de declaración
		var++; // creación 1 variable
		tamvar += sizeof(int); // 4 bytes

		do
		{
			/*system("cls");
			cout
			<< "\t\t\tIdentificación de Signos y Trilogías" << endl
			<< "\t\t\t-------------------------------------" << endl << endl
			<< "\t\t\t Ingrese un número del 1 al 12 que identifique un signo del zodíaco " << endl
			<< "\t\t\t o 0 para salir de la aplicación" << endl << endl
			<< "\t\t\t Opción: ";*/
			oper += 12; // 12 operaciones de salida (5 x texto, 6 x endl, 1 x system("cls"))

			pruebaalgoritmo6 >> numero;
			oper++; // 1 operación de entrada

			//cout << endl;
			oper++; // 1 operación de salida

			for (int i = 0; i < 120; i++) cout << char(205);
			cout << " Salida de F.- Algoritmo #6 DO-WHILE / IF / SWITCH (para el n" << char(163) << "mero: " << numero << ")\n";
			for (int i = 0; i < 120; i++) cout << char(205);
			cout << "\n";

			if (numero == 0)
			{
				cout << " *** Gracias por utilizar la aplicación ***" << endl;
				oper += 3; // 1 operación de comparación + 2 operaciones de salida
			}

			else if (numero < 1 or numero > 12)
			{

				if (numero < 1) oper += 2; //1 operacion de comparacion + 1 operacion logica 
				else oper += 3;
				oper++;

				//operaciones de comparación (presente if + comparaciones anteriores)

				cout << " ERROR: El n" << char(163) << "mero " << numero << " no est" << char(160) << " asociado a ning" << char(163) << "n signo. Vuelva a intentarlo." << endl;
				oper += 4; // + 4 operaciones de salida  
			}

			else if (numero < 4)
			{
				cout << " Signo de la primer trilog" << char(161) << "a: ";
				oper += 6; // (1 + 4) operaciones de comparacion + 1 operación de salida

				oper++; //1 operación de entrada al switch
				switch (numero)
				{
				case 1:
					cout << "Aries" << endl;
					oper += 4; // 1 operación de comparación + 2 operaciones de salida + 1 break
					break;
				case 2:
					cout << "Tauro" << endl;
					oper += 5; // (1 + 1) operaciones de comparación (actual + arrastre) + 2 operaciones de salida + 1 break
					break;
				case 3:
					cout << "G" << char(130) << "minis" << endl;
					oper += 6; // (1 + 2) operaciones de comparación + 2 operaciones de salida + 1 break
					break;
				}
			}

			else if (numero < 7)
			{
				cout << " Signo de la segunda trilog" << char(161) << "a: ";
				oper += 7; // (1 + 5) operaciones de comparacion + 1 operacion de salida

				oper++; //1 operación de entrada al switch
				switch (numero)
				{
				case 4:
					cout << "C" << char(160) << "ncer" << endl;
					oper += 4; // 1 operación de comparación + 2 operaciones de salida + 1 break
					break;
				case 5:
					cout << "Leo" << endl;
					oper += 5; // (1 + 1) operaciones de comparación + 2 operaciones de salida + 1 break 
					break;
				case 6:
					cout << "Virgo" << endl;
					oper += 6; // (1 + 2) operaciones de comparación + 2 operaciones de salida + 1 break
					break;
				}
			}

			else if (numero < 10)
			{
				cout << " Signo de la tercer trilog" << char(161) << "a: ";
				oper += 8; // (1 + 6) operaciones de comparación + 1 operación de salida

				oper++; //1 operación de entrada al switch
				switch (numero)
				{
				case 7:
					cout << "Libra" << endl;
					oper += 4; // 1 operación de comparación + 2 operaciones de salida + 1 break
					break;
				case 8:
					cout << "Escorpio" << endl;
					oper += 5; // (1 + 1) operación de comparación + 2 operaciones de salida + 1 break
					break;
				case 9:
					cout << "Sagitario" << endl;
					oper += 6; // (1 + 2) operaciones de comparación + 2 operaciones de salida + 1 break
					break;
				}
			}

			else
			{
				cout << " Signo de la cuarta trilog" << char(161) << "a: ";
				oper += 8; // (0 + 7) operaciones de comparación + 1 operacion de salida


				oper++; //1 operación de entrada al switch
				switch (numero)
				{
				case 10:
					cout << "Capricornio" << endl;
					oper += 4; // 1 operación de comparación + 2 operaciones de salida + 1 break
					break;
				case 11:
					cout << "Acuario" << endl;
					oper += 5; // (1 + 1) operación de comparación + 2 operaciones de salida + 1 break
					break;
				case 12:
					cout << "Piscis" << endl;
					oper += 6; // (1 + 2) operación de comparación + 2 operaciones de salida + 1 break
					break;
				}
			}

			cout << endl;
			oper++; // 1 operación de salida

			//system("pause");

			oper += 2; // 1 operación de comparación (en el do while) + system("pause")

		} while (numero != 0);

		ejealgoritmo6 << oper << " " << var << " " << tamvar << endl;

		cout << "\n "; system("pause"); system("cls");
	}

	ejealgoritmo6.close();
	pruebaalgoritmo6.close();

	Beep(700, 350);

	menu_analizar_algoritmos();
}
void analizar_algoritmo_7()
{
	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)
	system("CLS");


	ifstream pruebalgoritmo7;
	ofstream ejecalgoritmo7;
	pruebalgoritmo7.open("pruebaAlgoritmo7.txt");
	ejecalgoritmo7.open("ejecucionAlgoritmo7.txt");
	unsigned int oper, var, tamvar;

	int casos_prueba;

	pruebalgoritmo7 >> casos_prueba;

	for (int i = 0; i < casos_prueba; i++)
	{
		oper = var = tamvar = 0;

		//----------
		int n;
		oper += 1; // 1 operacion de declaracion
		var += 1; // + 1 variables
		tamvar += sizeof(int); // 4 bytes

		//cout << "Ingrese un numero decimal a convertir que este en el rango (0, 65535]: "; 
		pruebalgoritmo7 >> n;
		oper += 2; // 1 operacion de salida + 1 operacion de entrada

		if (n > 0 && n <= 65535)
		{
			if (n < 65635) {
				oper += 3;	//2 comparaciones, un operador lógico
			}
			else {
				oper += 4;	//3 comparaciones, un operador lógico
			}

			char base;
			//cout << "Ingrese 'b' para convertir a binario o 'o' para convertir a octal: "; 
			pruebalgoritmo7 >> base;

			for (int i = 0; i < 120; i++) cout << char(205);
			cout << " Salida de G.- Algoritmo #7 WHILE (para el n" << char(163) << "mero: " << n << " en base " << base << ")\n";
			for (int i = 0; i < 120; i++) cout << char(205);
			cout << "\n";

			oper += 3; // 1 operacion de declaracion + 1 operacion de salida + 1 operacion de entrada
			var += 1; // + 1 una variable  (¿si nace y muere hay que contarla?)
			tamvar += sizeof(char); // + 1 byte

			if (base == 'o' || base == 'O')
			{
				if (base == 'o') {
					oper += 2; //Se compara una vez, más el operador "or"
				}
				else {
					oper += 3; //Se compara dos veces, más el operador "or"
				}

				int temp = n, i = 1, octal = 0;
				oper += 6; // 3 operaciones de declaracion + 3 operaciones de asignacion
				var += 3; // + 3 variables
				tamvar += 3 * sizeof(int); // 4 + 4 + 4 bytes

				oper += 1; // +1: si la condicion es falsa inicialmente / suma de ultima comparación dentro del while, que resulta finalmente falsa

				while (temp > 0)
				{
					// en un ciclo:
					// 1 operacion de comparación (while (...))
					octal += (temp % 8) * i; // 3 operaciones aritméticas + 1 operacion de asignacion 
					i *= 10; // 1 operacion aritmetica + 1 operacion de asignacion
					temp /= 8; // 1 operacion aritmetica + 1 operacion de asignacion
					oper += 9; // sumatorio
				}

				cout << " El numero en base 8 es " << octal << endl;
				oper += 3; // 3 operaciones de salida
			}
			else if (base == 'b' || base == 'B')
			{
				oper += 3; //3 operaciones iniciales (1.base=='o'), (2.||), (3.base=='O').

				if (base == 'b') {
					oper += 2; //Se compara una vez, más el operador "or"
				}
				else {
					oper += 3; //Se compara dos veces, más el operador "or"
				}

				int i = 65536;
				bool yaMostroUnUno = false;

				oper += 4; // 2 operaciones de declaracion + 2 operaciones de asignacion
				var += 2; // +2 variables
				tamvar += (sizeof(int) + sizeof(bool)); // 4+1 bytes

				cout << " El numero en binario es ";
				oper += 1; // 1 operacion de salida

				oper += 1; // +1: si la condicion es falsa inicialmente / suma de ultima comparación dentro del while, que resulta finalmente falsa

				while (i > 0)
				{
					oper++; //"i" va incrementando 

					if (yaMostroUnUno == true) {
						oper += 2; //comprobación de valor y operador lógico "||"
					}
					else {

						oper += 3; //comprobación, operador lógico, etcétera
					}

					if (yaMostroUnUno || n & i)
					{

						cout << ((n & i) != 0); //1 salida, 1 comprobacion 
						yaMostroUnUno = true; // 1 operacion de asignacion
						oper += 3; // sumatoria
					}
					i /= 2; // 1 operacion aritmetica + 1 operacion de asignacion
					oper += 2;
				}
				cout << endl;
				oper += 1; // 1 operacion de salida
			}
			else
			{
				oper += 6; //6 operaciones totales (1.base=='o'), (2.||), (3.base=='O'), (4.base=='b'), (5.||), (6.base=='B').
				cout << " Error - Base incorrecta. Saliendo..." << endl;
				oper += 2; // 2 operaciones de salida
			}
		}
		else
		{
			oper += 4; //3 operaciones de comparación (1.n>0), (2.n<65535), (3.n==65535); más una operación lógica, porque se opera el "&&"
			cout << " Error - Numero fuera de rango. Saliendo..." << endl;
			oper += 2; // 2 operaciones de salida
		}

		ejecalgoritmo7 << oper << " " << var << " " << tamvar << endl;

		cout << "\n\n "; system("pause"); system("cls");
	}

	pruebalgoritmo7.close();
	ejecalgoritmo7.close();


	Beep(700, 350);

	menu_analizar_algoritmos();
}

//Algoritmos que se VISUALIZAN 
void menu_visualizar_algoritmos()
{
	char visualizar_pal = 'z';

	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)

	while
		(
			visualizar_pal != 'a' && visualizar_pal != 'A' && visualizar_pal != 'b' && visualizar_pal != 'B' &&
			visualizar_pal != 'c' && visualizar_pal != 'C' && visualizar_pal != 'd' && visualizar_pal != 'D' &&
			visualizar_pal != 'e' && visualizar_pal != 'E' && visualizar_pal != 'f' && visualizar_pal != 'F' &&
			visualizar_pal != 'g' && visualizar_pal != 'G' && visualizar_pal != 's' && visualizar_pal != 'S'
			)
	{
		system("CLS");

		//Opciones del menú VISUALIZAR por pantalla

		cout << char(201); for (int i = 0; i < 118; i++) cout << char(205); cout << char(187) << "\n";

		cout << char(186);
		for (int i = 0; i < 41; i++) cout << " ";
		cout << "Visualizar Resultados Algoritmos C++";
		for (int i = 0; i < 41; i++) cout << " ";
		cout << char(186) << "\n";

		cout << char(200); for (int i = 0; i < 118; i++) cout << char(205); cout << char(188) << "\n\n";


		for (int i = 0; i < 28; i++) cout << " ";
		cout << "A.- Algoritmo #1 SECUENCIAL (Soluci" << char(162) << "n a problema de sumatoria)\n\n\n";

		for (int i = 0; i < 24; i++) cout << " ";
		cout << "B.- Algoritmo #2 IF/ELSE (Soluci" << char(162) << "n a problema de selecci" << char(162) << "n completa)\n\n\n";

		for (int i = 0; i < 25; i++) cout << " ";
		cout << "C.- Algoritmo #3 SWITCH (Soluci" << char(162) << "n a problema de selecci" << char(162) << "n m" << char(163) << "ltiple)\n\n\n";

		for (int i = 0; i < 31; i++) cout << " ";
		cout << "D.- Algoritmo #4 FOR (Soluci" << char(162) << "n a problema de sumatoria)\n\n\n";

		for (int i = 0; i < 28; i++) cout << " ";
		cout << "E.- Algoritmo #5 FOR (Soluci" << char(162) << "n a problema repetitivo-anidado)\n\n\n";

		for (int i = 0; i < 25; i++) cout << " ";
		cout << "F.- Algoritmo #6 DO-WHILE / IF / SWITCH (Soluci" << char(162) << "n problema zod" << char(161) << "aco)\n\n\n";

		for (int i = 0; i < 27; i++) cout << " ";
		cout << "G.- Algoritmo #7 WHILE (Soluci" << char(162) << "n problema decimal-binario-octal)\n\n\n";

		for (int i = 0; i < 44; i++) cout << " ";
		cout << "S.- Volver al Men" << char(163) << " Anterior\n\n\n\n";

		for (int i = 0; i < 40; i++) cout << " ";
		cout << "Ingrese la opci" << char(162) << "n que desee realizar: ";


		cin >> visualizar_pal;

		if
			(
				visualizar_pal != 'a' && visualizar_pal != 'A' && visualizar_pal != 'b' && visualizar_pal != 'B' &&
				visualizar_pal != 'c' && visualizar_pal != 'C' && visualizar_pal != 'd' && visualizar_pal != 'D' &&
				visualizar_pal != 'e' && visualizar_pal != 'E' && visualizar_pal != 'f' && visualizar_pal != 'F' &&
				visualizar_pal != 'g' && visualizar_pal != 'G' && visualizar_pal != 's' && visualizar_pal != 'S'
				)
		{
			cout << "\n\n\n"; for (int i = 0; i < 38; i++) cout << " ";  cout << char(173) << "Error! El caracter ingresado es inv" << char(160) << "lido.";
			Beep(100, 350);
			Sleep(1000);
		}

	}

	Beep(700, 350);

	//Visualizar el algoritmo "n", que debe haber sido PREVIAMENTE ANALIZADO, según el caracter ingresado 
	switch (visualizar_pal)
	{
	case 'a':
	case 'A':
		visualizar_algoritmo_n(1);
		break;
	case 'b':
	case 'B':
		visualizar_algoritmo_n(2);
		break;
	case 'c':
	case 'C':
		visualizar_algoritmo_n(3);
		break;
	case 'd':
	case 'D':
		visualizar_algoritmo_n(4);
		break;
	case 'e':
	case 'E':
		visualizar_algoritmo_n(5);
		break;
	case 'f':
	case 'F':
		visualizar_algoritmo_n(6);
		break;
	case 'g':
	case 'G':
		visualizar_algoritmo_n(7);
		break;
	case 's':
	case 'S':
		menu_principal();
		break;
	}
}
void visualizar_algoritmo_n(int nroalgoritmo)
{
	ifstream ejealgoritmoN;
	int oper, var, tamvar;
	int cont = 0, contaux = 0;

	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)
	system("CLS");

	switch (nroalgoritmo)
	{
	case 1:
		ejealgoritmoN.open("ejecucionAlgoritmo1.txt");
		break;
	case 2:
		ejealgoritmoN.open("ejecucionAlgoritmo2.txt");
		break;
	case 3:
		ejealgoritmoN.open("ejecucionAlgoritmo3.txt");
		break;
	case 4:
		ejealgoritmoN.open("ejecucionAlgoritmo4.txt");
		break;
	case 5:
		ejealgoritmoN.open("ejecucionAlgoritmo5.txt");
		break;
	case 6:
		ejealgoritmoN.open("ejecucionAlgoritmo6.txt");
		break;
	case 7:
		ejealgoritmoN.open("ejecucionAlgoritmo7.txt");
		break;
	}

	ejealgoritmoN.ignore(); // evitar el caracter nulo (\0)

	if (ejealgoritmoN.eof() == true)
	{
		cout << "\n";
		for (int i = 0; i < 25; i++) cout << " ";
		cout << char(173) << "Error! Analice el algoritmo con anterioridad para poder visualizarlo.\n\n";
	}
	else
	{
		ejealgoritmoN.seekg(0, ios::beg);	// mover cursor al principio del txt: http://www.aprendeaprogramar.com/mod/resource/view.php?id=345

		cabecera_visualizar(nroalgoritmo);

		while (!ejealgoritmoN.eof()) // https://mathbits.com/MathBits/CompSci/Files/End.htm
		{
			ejealgoritmoN >> oper >> var >> tamvar;
			cont++;

			if (ejealgoritmoN.eof() == false) // redundante: unica manera de que funcionase (conocida)
			{
				cout << char(186) << setw(28) << setfill(' ') << cont << char(186) << setw(29) << setfill(' ') << oper << char(186) << setw(29) << setfill(' ') << var << char(186) << setw(29) << setfill(' ') << tamvar << char(186) << "\n";

				for (int i = 0; i < 120; i++) cout << char(205);
			}

			contaux++;

			if (contaux == 7)
			{
				contaux = 0;
				cout << "\n\n";
				for (int i = 0; i < 40; i++) cout << " ";
				system("pause");
				system("cls");
				cabecera_visualizar(nroalgoritmo);
			}
		}

		cout << "\n\n\n";
		for (int i = 0; i < 13; i++) cout << " ";
		cout << char(173) << "Aviso! Puede que la cantidad de operaciones difiera de acuerdo a c" << char(162) << "mo " << char(130) << "stas fueron contadas\n";
		for (int i = 0; i < 41; i++) cout << " ";
		cout << "(ver .cpp del algoritmo comentado).\n\n";
	}

	cout << "\n";
	for (int i = 0; i < 40; i++) cout << " ";
	system("pause");
	Beep(700, 350);

	ejealgoritmoN.close();
	menu_visualizar_algoritmos();
}
void cabecera_visualizar(int nroalgoritmo)
{
	cout << char(201); for (int i = 0; i < 118; i++) cout << char(205); cout << char(187) << "\n";

	cout << char(186);
	for (int i = 0; i < 37; i++) cout << " ";
	cout << "Visualizaci" << char(162) << "n de resultados del Algoritmo #" << nroalgoritmo;
	for (int i = 0; i < 37; i++) cout << " ";
	cout << char(186) << "\n";

	cout << char(200); for (int i = 0; i < 118; i++) cout << char(205); cout << char(188) << "\n\n";

	cout << char(201);
	for (int i = 0; i < 118; i++) cout << char(205);
	cout << char(187);

	cout << char(186) << " N" << char(163) << "mero del caso de prueba  " << char(186) << "   Cantidad de operaciones   " << char(186) << "    Cantidad de variables    " << char(186) << "   Tama" << char(164) << "o variables (bytes)  " << char(186) << "\n";

	cout << char(200);
	for (int i = 0; i < 118; i++) cout << char(205);
	cout << char(188) << "\n";
}
void resetear_txts()
{
	ofstream ejealgoritmo1, ejealgoritmo2, ejealgoritmo3, ejealgoritmo4, ejealgoritmo5, ejealgoritmo6, ejealgoritmo7;

	ejealgoritmo1.open("ejecucionAlgoritmo1.txt");
	ejealgoritmo2.open("ejecucionAlgoritmo2.txt");
	ejealgoritmo3.open("ejecucionAlgoritmo3.txt");
	ejealgoritmo4.open("ejecucionAlgoritmo4.txt");
	ejealgoritmo5.open("ejecucionAlgoritmo5.txt");
	ejealgoritmo6.open("ejecucionAlgoritmo6.txt");
	ejealgoritmo7.open("ejecucionAlgoritmo7.txt");

	ejealgoritmo1.close();
	ejealgoritmo2.close();
	ejealgoritmo3.close();
	ejealgoritmo4.close();
	ejealgoritmo5.close();
	ejealgoritmo6.close();
	ejealgoritmo7.close();
}

//CIERRE DE LA APLICACIÓN
void cerrar_programa()
{
	char cerrar_pal = 'z';

	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)

	while (cerrar_pal != 'y' && cerrar_pal != 'Y' && cerrar_pal != 'n' && cerrar_pal != 'N')
	{
		system("CLS");

		cout << "\n";

		for (int i = 0; i < 35; i++) cout << " ";
		cout << char(168) << "Est" << char(160) << " seguro de que desea cerrar la aplicaci" << char(162) << "n?\n\n";

		for (int i = 0; i < 57; i++) cout << " ";
		cout << "Y - Si\n";

		for (int i = 0; i < 57; i++) cout << " ";
		cout << "N - No\n\n\n";

		for (int i = 0; i < 40; i++) cout << " ";
		cout << "Ingrese la opci" << char(162) << "n que desee realizar: ";

		cin >> cerrar_pal;

		if (cerrar_pal != 'y' && cerrar_pal != 'Y' && cerrar_pal != 'n' && cerrar_pal != 'N')
		{
			cout << "\n\n"; for (int i = 0; i < 38; i++) cout << " ";  cout << char(173) << "Error! El caracter ingresado es inv" << char(160) << "lido.";
			Beep(100, 350);
			Sleep(1000);
		}
	}

	Beep(700, 350);

	if (cerrar_pal == 'y' || cerrar_pal == 'Y')
	{
		system("CLS");

		logo_UTN();

		cout << "\n"; for (int i = 0; i < 39; i++) cout << " ";
		cout << char(173) << "Gracias por utilizar nuestra aplicaci" << char(162) << "n!\n\n";
		Sleep(3000);
		//exit(0); // http://www.cplusplus.com/reference/cstdlib/exit/
	}
	else menu_principal();
}

//LOGO Y PANTALLA DE CARGA
void logo_inicial()    //Logo que aparece al incializar el programa 
{
	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)

	system("color F0");

	cout << "\n          "; for (int i = 0; i < 98; i++) cout << char(205);
	Sleep(350);
	Beep(1200, 350);

	cout << "\n";
	cout << setw(13) << char(186) << "   |1010101010|   |101010|       |10|        |10101|   |1010101|   |101010|     |101010|    " << char(186) << "\n";
	Sleep(350);
	Beep(1000, 350);

	cout << setw(13) << char(186) << "       |10|       |10   10|    |1010|       |10  01|   |10         |10    10|   |10    10|  " << char(186) << "\n";
	Sleep(350);
	Beep(800, 350);
	system("color 79");

	cout << setw(13) << char(186) << "       |10|       |101010|    |10 10|      |1010101|   |10101|     |10    10|   |10    10|  " << char(186) << "\n";
	Sleep(350);
	Beep(600, 350);

	cout << setw(13) << char(186) << "       |10|       |10|           |10|     |10    01|   |10         |10    10|   |10    10|  " << char(186) << "\n";
	Sleep(350);
	Beep(400, 350);


	cout << setw(13) << char(186) << "       |10|       |10|           |10|    |10     01|   |1010101|   |101010|     |101010|    " << char(186) << "\n";
	Sleep(350);
	Beep(200, 350);
	system("color 0D");

	cout << "          "; for (int i = 0; i < 98; i++) cout << char(205);
	Sleep(350);
	Beep(100, 350);

	Sleep(500);
	cout
		<< "\n\n"
		<< setw(44) << char(245) << " - Chort, Julio Alberto - " << char(245) << "\n"
		<< setw(36) << char(245) << " - Pacheco Pilan, Federico Ignacio - " << char(245) << "\n"
		<< setw(46) << char(245) << " - Reynoso, Valent" << char(161) << "n - " << char(245) << "\n\n"
		<< setw(55) << "- Comisi" << char(162) << "n A / 2019 -\n\n\n"
		<< setw(49) << char(184) << " - Versi" << char(162) << "n 1.0 - " << char(184) << "\n\n\n";

	for (int i = 0; i < 40; i++) cout << " ";
	system("pause");
}
void pantalla_de_carga()  //Pantalla de carga entre menúes y comienzo del programa 
{
	system("mode con: cols=120 lines=44"); //Tamaño de la consola (cols = ANCHO lines = ALTO)
	system("color F0");

	int k = 0;

	for (int i = 0; i < 7; i++)
	{
		system("cls");
		cout << "\n";
		for (int i = 0; i < 52; i++) cout << " ";
		cout << "Cargando ... \n\n";

		for (int m = 0; m < 120; m++) cout << char(205);    // https://theasciicode.com.ar/
		cout << "\n";

		for (int j = 0; j < k; j++) cout << char(254);
		cout << "\n";

		for (int m = 0; m < 120; m++) cout << char(205);
		cout << "\n";

		Beep(1000, 350);
		k += 20;
		Sleep(750);
	}

	cout << "\n";
	for (int i = 0; i < 46; i++) cout << " ";
	cout << "100% " << char(173) << "Carga completa!";
	Beep(1000, 350);
	Beep(750, 350);
	Beep(500, 350);

	Sleep(1500);

	system("cls");
}
void logo_UTN()
{
	system("mode con: cols=120 lines=44");

	cout << "\n\n";
	cout << setw(68) << "UTN   UTN   UTN\n";
	Sleep(200);
	Beep(1200, 200);

	cout << setw(68) << "UTN   UTN   UTN\n";
	Sleep(200);
	Beep(1100, 200);

	cout << setw(68) << " UTN  UTN  UTN \n";
	Sleep(200);
	Beep(1000, 200);

	cout << setw(68) << "   UTNUTNUTN   \n";
	Sleep(200);
	Beep(900, 200);

	cout << setw(68) << "UTNUTNUTNUTNUTN\n";
	Sleep(200);
	Beep(800, 200);

	cout << setw(68) << "   UTNUTNUTN   \n";
	Sleep(200);
	Beep(700, 200);


	cout << setw(68) << " UTN  UTN  UTN \n";
	Sleep(200);
	Beep(600, 200);

	cout << setw(68) << "UTN   UTN   UTN\n";
	Sleep(200);
	Beep(500, 200);

	cout << setw(68) << "UTN   UTN   UTN\n";
	Sleep(200);
	Beep(400, 200);

	cout << "\n\n";
}
