




#include<stdio.h>
#include<Windows.h>
#define POS 10

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int arr[POS] = { 99,3,1,6,2,5,8,15,21,9 };
	//metodo ordenacion burbuja

	for (int i = 0; i < POS; i++) {
		for (int j = 0; j < POS; j++) {
			if (arr[j] > arr[j + 1]) {
				int aux = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = aux;
			}
		}
	}

	// metodo ordenacion seleccion
	/*
		for (int i = 0; i < POS; i++) {
		int posMin = i;
		for (int j = 0; j < POS-1; j++) {
			if (arr[i] > arr[j]) {
				posMin = j;
			}
		}
		int aux = arr[posMin];
		arr[posMin] = arr[i];
		arr[i] = aux;
	}*/



	// imprimo array
	for (int i = 0; i < POS; i++) {
		printf("La posicion % dº es el %d\n", i, arr[i]);
	}




}

