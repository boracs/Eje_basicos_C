
#define POS 5
#include<stdio.h>
#include<Windows.h>

main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	/*	4) Escribir un programa en c que convierta una tabla de dígitos (de 0 a 9) en su equivalente
		numérico.
	*/
	int arr[POS];

	for (int i = 0; i < POS; i++) {

		int dig = 0;
		do {
			printf("introduce el %dº digito entre 0 y 9;", i);
			scanf_s("%d", &dig);
			arr[i] = dig;
		} while (dig < 0 || dig>9);
	}

	for (int i = 0; i < POS; i++) {
		printf("%d \n", arr[i]);
	}

	int numero = 0;
	int posicion = 1;

	int dig = arr[POS-1];
	numero = dig;

	for (int i = POS-2; i >=  0; i--) {
		int dig = arr[i];
		posicion = posicion * 10;
		numero = numero + ( dig * posicion);
	}

	printf("El numero es: %d", numero);





}

