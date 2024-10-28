




#include<stdio.h>
#include<Windows.h>
#define POSICIONES 5


main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int arr[POSICIONES];

	/*
	33)Escribir un programa para cargar una tabla con 20 números enteros y visualice el
	resultado de la siguiente operación: n1 - n2 + n3 - n4 + ........................ + n19 - n20.
*/

	for (int i = 0; i < POSICIONES; i++) {
		printf("dame el %dº numero;", i + 1);
		scanf_s("%d", &arr[i]);
	}
	 


	int suma = 0;

	for (int i = 0; i < POSICIONES; i++) {
		if (i % 2 ==0 ) {
			suma = suma + arr[i];
		}
		else {
			suma = suma - arr[i];
		}
	}

	printf("total el numero final es: %d", suma);



}

