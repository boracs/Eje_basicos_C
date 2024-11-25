


#include<stdio.h>
#include<Windows.h>
#include <stdlib.h>
#include <time.h>
#define FIL 3
#define COL 5
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	/*
	2)
	Realizar un programa que muestre el siguiente menú:
	a) Cargar tabla: carga una tabla bidimensional de 3 X 5.
	b) Consultar: pide un número (n) y saca un informe como el siguiente
	Fila Veces
	0 xxxxx
	1 xxxxx
	2 xxxxx
	Total: suma de la columna veces.
	Donde en cada línea se muestra cuántas veces aparece el número n en la fila
	correspondiente. Total será la suma de las veces que aparece n en todas las
	filas.

	*/
	int arr[FIL][COL];
	int primerPasoRealizado = 0;
	int opcion = 1;
	do{
		do {
			printf("Que quieres hacer \n 1)cargar una tabla bidimensional \n 2)Consultar\n");
			scanf_s("%d", &opcion);

			if (opcion > 3 || opcion < 0){
				printf("Error____Mete una de las dos opciones\n");
			}
			if (opcion == 1) {
				primerPasoRealizado =1;
				for (int i = 0; i < FIL; i++) {
					for (int j = 0; j < COL; j++) {
						int numero_aleatorio = rand() % 9 + 1;
						arr[i][j] = numero_aleatorio;
					}
				}
			}
			if (opcion == 2 && primerPasoRealizado == 0) {
				printf("Error____Debes realizar antes el primer paso\n");
			}
			if (opcion==2 && primerPasoRealizado == 1)  {
				//IMPRIMO EL ARRAY

				for (int i = 0; i < FIL; i++) {
					int numVecesFila = 0;
					for (int j = 0; j < COL; j++) {
						printf("-%d-", arr[i][j]);
					}
					printf("\n");
				}




				 // Solicio un num y digo cuantas veces esta en cada  fila el numero solicitado
				printf("Dame un numero\n");
				int num;
				scanf_s("%d", &num);

				int numVecesTotal = 0;
				printf("%20s %20s\n", "FILA","VECES");
				for (int i = 0; i < FIL; i++) {
					int numVecesFila = 0;
					for (int j = 0; j < COL; j++) {
						if (arr[i][j] == num) {
							numVecesFila++;
						}
					}
					printf("%20d %20d\n", i, numVecesFila);
					numVecesTotal = numVecesTotal + numVecesFila;
				}
				printf("Total veces %d\n", numVecesTotal);
			}
			else {

			}
		}while (opcion > 2 || opcion < 0);
	} while (opcion !=0);

	printf("Fin del programas gracias");










}

