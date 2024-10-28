
#include<stdio.h>
#include<Windows.h>
#define TAM31 3

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	/*
	31)Escribir un programa para cargar una tabla de 20 números enteros y visualice el
	mayor y el menor.
	*/

	//31

	int arr[TAM31];

	for (int i = 0; i <TAM31; i++) {
		printf("dame el numero para la posicion %d", i);
		scanf_s("%d", &arr[i]);
	}

	int max = 0;
	int min = 1000000;

	for (int i = 0; i < TAM31; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	printf("El valor maximo es el %d y el menor el %d", max, min);

}

