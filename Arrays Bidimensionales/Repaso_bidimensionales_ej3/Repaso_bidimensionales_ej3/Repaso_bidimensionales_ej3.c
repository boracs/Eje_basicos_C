




#include<stdio.h>
#include<Windows.h>
#define FIL 10
#define BUT 15


//FUNCIONES--------------------------------------------

int pedir_fila() {
	int fila = 1;
	do {
		printf("Que fila deseas reserbar?");
		scanf_s("%d", &fila);
	} while (fila < 1 || fila>10);
	fila = fila - 1;
	return fila;
}

int pedir_butaca() {
	int butaca = 1;
	do {
		printf("Que butaca deseas reserbar?");
		scanf_s("%d", &butaca);
	} while (butaca < 1 || butaca>15);
	butaca = butaca - 1;
}

int reservar(int arr[FIL][BUT]) {


}




//fin funciones----------------------------------------
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

/*
* 3) Realizar un programa que sirva para gestionar las butacas de un cine de 10 filas X
15 butacas cada fila. Para ello tenemos un menú con las siguientes opciones:
a) Inicializar: Pone todas las posiciones a 0. Esto significa que todas las posiciones
están libres.
b) Vender: Pide validando un número de fila y un número de columna. Si la
posición correspondiente a esa fila y columna está a 0 (libre) la pone a 1
(ocupado). Si no, da error y pregunta si se quiere volver a intentar reservar,
repitiendo el proceso hasta que se introduzca una localidad (fila,butaca) libre
(contenido==0) o el usuario diga que no quiere repetir.
c) Devolver: Pide validando un número de fila y un número de columna. Si la
posición correspondiente a esa fila y columna está a 1 (ocupada) la pone a
0(libree). Si no, da error y pregunta si se quiere volver a intentar reservar,
repitiendo el proceso hasta que se introduzca una localidad (fila,butaca)
ocupada (contenido==0) o el usuario diga que no quiere repetir.
d) Informe: Muestra el contenido de la tabla de una forma similar a la siguiente.
e) Salir.
*/
	//declaro arrays;
	int plazas[FIL][BUT];

	//bucle principal del menu que se repite hasta que se meta opcion == 4
	int opcion = 1;
	do {
		//bucle para asegurar que la opcion esta entre el 1 y el 4:
		do {
			printf("Dime que desea realizar: \n 1)reservar \n 2) devolver \n 3)mostrar informe \n 4)salir");
			scanf_s("%d", &opcion);
		} while (opcion < 1 || opcion>4);

		//condicionales del menu
		if (opcion == 1) {

			printf("Opcion 1 ESCOGIDA:\n");
			//pido fila y butaca (esto iria en una funcion)
			int fila = 1;
			do {
				printf("Que fila deseas reserbar?");
				scanf_s("%d", &fila);
			} while (fila < 1 || fila>10);
			int butaca = 1;
			do {
				printf("Que butaca deseas reserbar?");
				scanf_s("%d", &butaca);
			} while (butaca < 1 || butaca>15);
			fila = fila - 1;
			butaca = butaca - 1;



		}
		else if (opcion == 2) {
			printf("Opcion 2  ESCOGIDA:\n");
		}
		else if (opcion == 3) {
			printf("Opcion 3  ESCOGIDA:\n");
		}
		else{
			printf("De acuerdo salgamos:Adios\n");
		}
	}
	while (opcion!=4);
	printf("Programa terminado\n");













}

