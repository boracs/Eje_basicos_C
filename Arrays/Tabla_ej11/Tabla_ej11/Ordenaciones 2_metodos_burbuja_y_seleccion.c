




#include<stdio.h>
#include<Windows.h>
#define POS 10
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	//definiendo el array
	int arr[POS] = {9,2,7,4,22,2,10,14,22,1};


	//ordenacion por seleccion:
	/*
	for (int i = 0; i < POS - 1; i++) {
		int posMin = i;
		for (int j = i; j < POS; j++) {
			if (arr[i] > arr[j]) {
				posMin = j;
			}
		}
		int aux = arr[i];
		arr[i] = arr[posMin];
		arr[posMin] = aux;
	}
	*/
	//ordenacion metodo burbuja


	for (int i = 0; i < POS; i++) {
		for (int j =i; j < POS; j++) {
			if (arr[j] < arr[j + 1]) {
				int aux = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = aux;
			}
		}
	}







	//imprimo el array orden que esta
	for (int i = 0; i < POS; i++) {
		printf("%d posicion esta el %d \n", i, arr[i]);
	}

}

