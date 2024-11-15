




#include<stdio.h>
#include<Windows.h>
#define POS 10

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int arr[POS] = { 110, 99, 3, 1, 101 ,2 ,5 ,8 ,15 ,21 };







	// 1º-  metodo ordenacion burbuja llevando el mayor al final
	// { 110, 99, 3, 1, 101 ,2 ,5 ,8 ,15 ,21 };
	// { 99, 3, 1, 101, 2, 5, 8, 15, 21, 110 };
	// { 99, 3, 1, 2, 5, 8, 15, 21,101, 110 };
   //  { 3, 1, 2, 5, 8, 15, 21, 99, 101, 110 };
	/*
	for (int i = 0; i < POS-1; i++) {

		for (int j = 0; j < POS-i-1; j++) { //valores de j e i comprbar  ( -1 porque j no tengo que comprobar hasta le final 
											  //hago -i pork los ultimso valores ya etsa ordenados
											  // sino cuando hago j+ me salog del array
			if (arr[j] > arr[j + 1]) {		  // esta bien seguro 
				int aux = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = aux;
			}
		}
	}
	*/






	// 2º- metodo ordenacion burbuja llevando el menor al principio
	// { 110, 99, 3, 1, 101 ,2 ,5 ,8 ,15 ,21 };
	// { 1, 110, 99, 3, 101 ,2 ,5 ,8 ,15 ,21 };
	// { 1, 2, 110, 99, 3, 101 ,5 ,8 ,15 ,21 };
	// { 1, 2, 3, 110, 99, 101 ,5 ,8 ,15 ,21 };
	/*
	for (int i = 0; i<POS-1; i++) {
		for (int j = POS - 1; j >= 0+i+1; j--) {
			if (arr[j] < arr[j-1]) {		  
				int aux = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = aux;
			}
		}
	}
	*/



	// metodo ordenacion seleccion comparando el primero que sea menor que e resto y si no lo es se cambia.
	
	/*
		for (int i = 0; i < POS-1; i++) {
			int posMin = i;
			for (int j = i; j < POS; j++) {
				if (arr[posMin] > arr[j]) {  //ojo FALLO TIPICO  tengo k comparar arr[posMin] ( NO arr[i] )
					posMin = j;
				}
			}
			int aux = arr[posMin];
			arr[posMin] = arr[i];
			arr[i] = aux;
		}
	*/

		// metodo ordenacion seleccion comparando el ultimo  que sea mayor que e resto y si no lo es se cambia.

		for (int i = 0; i < POS-1; i++) {
			int posMax = i;
			for (int j = i; j < POS; j++) {
				if (arr[posMax] < arr[j]) {  
					posMax = j;
				}
			}
			int aux = arr[posMax];
			arr[posMax] = arr[i];
			arr[i] = aux;
		}







	// imprimo array
	for (int i = 0; i < POS; i++) {
		printf("La posicion % dº es el %d\n", i, arr[i]);
	}




}

