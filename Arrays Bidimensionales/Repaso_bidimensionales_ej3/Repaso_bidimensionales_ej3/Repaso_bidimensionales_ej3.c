




#include<stdio.h>
#include<Windows.h>
#define FIL 10
#define BUT 15


//FUNCIONES--------------------------------------------

//PEDIR FILA
int pedir_fila() {
	int fila = 1;
	do {
		printf("Que fila deseas reserbar?");
		scanf_s("%d", &fila);
		if (fila < 1 || fila>10) {
			printf("______ERROR_____Dame una FILA valida");
		}
	} while (fila < 1 || fila>10);
	fila = fila - 1;
	return fila;
}

//PEDIR BUTACA
int pedir_butaca() {
	int butaca = 1;
	do {
		printf("Que butaca deseas reserbar?");
		scanf_s("%d", &butaca);
		if (butaca < 1 || butaca>15) {
			printf("______ERROR_____Dame una BUTACA valida");
		}
	} while (butaca < 1 || butaca>15);
	butaca = butaca - 1;
	return butaca;
}

//REALIZAR RESERVA
int realizarReserva(int arr[FIL][BUT]) {

	int procesoReservaFinaslizado = 0;
	int respuestaCorrecta = 0;
	do {

		int fila = pedir_fila();
		int butaca = pedir_butaca();

		if (arr[fila][butaca] == 0) {
					printf("Reserva realizada EXITOSAMENTE");
					arr[fila][butaca] == 1;
					procesoReservaFinaslizado = 1;
					}
		else {
			printf("IMPOSIBLE REALZIAR RESERVA, la butaca ya esta adjudicada");
			int respuestaCorrecta = 0;
			char repetir = ' ';
			do {
				printf("Desea volver a intentar realizar la reserva 'S' o'N' ?");
				scanf_s("%c", &repetir, 1);
				if (repetir == 'S' || repetir == 'N' || repetir == 's' || repetir == 'n') {
					respuestaCorrecta = 1;
				}
			} while (respuestaCorrecta == 0);
			if (repetir == 'N' || repetir == 'n') {
				procesoReservaFinaslizado = 1;
			}
		}
	} while (procesoReservaFinaslizado == 0);

}

//REALIZAR CANCELACION

int realizarCancelacion(int arr[FIL][BUT]) {

	int procesoCancelacionFinaslizado = 0;
	int respuestaCorrecta = 0;
	do {

		int fila = pedir_fila();
		int butaca = pedir_butaca();

		for (int i = 0; i < FIL; i++) {
			if (i == fila) {
				for (int j = 0; j < BUT; j++) {
					if (j == butaca) {
						if (arr[i][j] == 1) {
							printf("Cancelacion realizada EXITOSAMENTE");
							arr[i][j] == 0;
							procesoCancelacionFinaslizado == 1;
						}
						else {
							printf("IMPOSIBLE  CANCELAR la reserva, LA BUTACA YA ESTABA LIBRE");
							int respuestaCorrecta = 0;
							char repetir = ' ';
							do {
								printf("Desea volver a intentar realizar la cancelacion 'SI' o'NO' ?");
								scanf_s("%c", &repetir, 2);
								if (repetir == 'SI' || repetir == 'NO' || repetir == 'si' || repetir == 'no') {
									respuestaCorrecta = 1;
								}
							} while (respuestaCorrecta == 0);
							if (repetir == 'NO' || repetir == 'no')
								procesoCancelacionFinaslizado == 1;
						}
					}
				}
			}
		}
	} while (procesoCancelacionFinaslizado == 0);

}

//MOSTRAR INFORME
void  mostrarInforme(int arr[FIL][BUT]) {


	for (int i =0; i < FIL; i++) {
		for (int j = 0; j < BUT; j++) {
			printf("_%d_", arr[i][j]);
		}
		printf("\n");
	}

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
			printf("Dime que desea realizar: \n 0)RESETEAR ARRAY \n 1)reservar \n 2) devolver \n 3)mostrar informe \n 4)salir");
			scanf_s("%d", &opcion);
		} while (opcion < 0 || opcion>4);
		//condicionales del menu

		if (opcion == 0) {
			printf("Opcion 0 ESCOGIDA reseteando plazas....:\n"); //inicializo todas las plazas a 0 (estan libres); RESETEA LA SALA
			for (int i = 0; i < FIL; i++) {
				for (int j = 0; j < BUT; j++) {
					plazas[i][j] = 0;
				}
			}
		}
		else if (opcion == 1) { //reservo
			printf("Opcion 1  ESCOGIDA reservando....:\n");
			realizarReserva(plazas);
		}
		else if (opcion == 2) {
			printf("Opcion 2  ESCOGIDA cencelando....:\n");
			realizarCancelacion(plazas);
		}
		else if (opcion == 3) {
			printf("Opcion 3  ESCOGIDA mostrando informe.....:\n");
			mostrarInforme(plazas);
		}
		else{
			printf("De acuerdo salgamos:Adios\n");
		}
	}
	while (opcion!=4);
	printf("Programa terminado\n");













}

