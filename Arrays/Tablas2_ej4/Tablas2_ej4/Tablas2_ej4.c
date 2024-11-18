
#include<stdio.h>
#include<Windows.h>
#define POS 5
main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	/*
	4) Escribir un programa que muestre el siguiente menú:
		i) Cargar tabla: Carga una tabla de 10 elementos. Calcular la suma y la media a
		medida que se introducen.
		ii) Modificar posición: pide una posición y un dato y lo introduce en la posición
		introducida. Actualizar la media (a ser posible sin volver a sumar todas las
		posiciones).
		iii) Calcular cuántos están por debajo de la media.
	*/


	int arr[POS];


	int opcion=0;
	int cargado = 1;
	int todoOk = 0;

	do {
		printf("Dme una opcion del 1 al 3\n");
		printf("MENU: \n Pulsa-1: Cargar tabla.\n Pulsa-2: Modificar posición \n Pulsa-3:Calcular cuántos están por debajo de la media.");
		scanf_s("%d", &opcion);

		if (opcion == 1) {
			for (int i = 0; i < POS; i++) {
				int dig;
				printf("en la %dº posicion que quieres meter?", i);
				scanf_s("%d", &dig);
				arr[i] = dig;
			}
			do {
				printf("Desea continuar con el menu? 0 no 1 si ");
				scanf_s("%d", &todoOk);
			} while (todoOk != 0 && todoOk != 1);

		}else if (opcion == 2 && cargado == 0) {
			printf("OJO CUIDADO, antes de seleccionar la 2º opcion deber pasar por la 1º.");
		}
		else if (opcion == 2 && cargado == 1) {

		}

	}while (opcion< 1 || opcion>3 || todoOk==1);


}

