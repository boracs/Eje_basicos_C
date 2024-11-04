




#include<stdio.h>
#include<Windows.h>
#define POS 3
main() {



	/*) Escribir un programa que cargue una tabla y muestre los datos en el orden inverso al
introducido.*/

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int arr[POS];

	for (int i = 0; i < POS; i++) {

		printf("dame un numero para meter en el array");
		int num;
		scanf_s("%d", &num);
		arr[i] = num;

	}

	for (int i = POS - 1; i >= 0; i--) {
		printf(" %d", arr[i]);
	}







}

