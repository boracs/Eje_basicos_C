




#include<stdio.h>
#include<Windows.h>
#define ARRFUERA 5
#define ARRINTERNO 3
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
/*
38)Escribir un programa para cargar dos tablas de dos dimensiones de 5 por 3, sumarlas
en una tercera tabla y visualizar la tercera tabla.
*/

	// declaro lso dos primeros arrays
	int arr1[ARRFUERA][ARRINTERNO];
	int arr2[ARRFUERA][ARRINTERNO];

	//cargo  tabla 1:
	printf("cargando tabla 1");
	for (int i = 0; i < ARRFUERA; i++) {
		for (int j = 0; j < ARRINTERNO; j++) {
			printf("Dame un valor para la posicion tabla1[%d][%d]", i, j);
			scanf_s("%d", &arr1[i][j]);
		}
	}
	//cargo tabla 2
	printf("cargando tabla2");
	for (int i = 0; i < ARRFUERA; i++) {
		for (int j = 0; j < ARRINTERNO; j++) {
			printf("Dame un valor para la posicion tabla 2 [%d][%d]", i, j);
			scanf_s("%d", &arr2[i][j]);
		}
	}
	//imprimo la tabla 1 
	for (int i = 0; i < ARRFUERA; i++) {
		for (int j = 0; j < ARRINTERNO; j++) {
			printf("_%d_",arr1[i][j]);
		}
		printf("\n");
	}
	printf("-----------\n");
	//imprimo la tabla 2 
	for (int i = 0; i < ARRFUERA; i++) {
		for (int j = 0; j < ARRINTERNO; j++) {
			printf("_%d_", arr2[i][j]);
		}
		printf("\n");
	}
	printf("-----------\n");
	// declaro el tercer array
	int arr3[ARRFUERA][ARRINTERNO];
	//cargo el tercer array con al suma de el primeor mas el segundo
	for (int i = 0; i < ARRFUERA; i++) {

		for (int j = 0; j < ARRINTERNO; j++) {
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	//imprimo la tabla 3
	for (int i = 0; i < ARRFUERA; i++) {
		for (int j = 0; j < ARRINTERNO; j++) {
			printf("_%d_", arr3[i][j]);
		}
		printf("\n");
	}




}

