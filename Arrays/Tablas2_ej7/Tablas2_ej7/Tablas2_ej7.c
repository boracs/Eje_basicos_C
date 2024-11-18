
#include<stdio.h>
#include<Windows.h>
#define POS 5

main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	/*
    7) Escribir un programa para cargar en una tabla de TAM elementos los siguientes
		datos:
		• En tabla[0] el valor 1.
		• En tabla[1] el valor 2.
		• En el resto de las posiciones desde 2 hasta TAM-1 la suma de las 2 posiciones
		anteriores.
		• Una vez cargada la tabla el programa pedirá números entre 0 y TAM-1 y
		devolverá el valor de la posición correspondiente
	*/


	printf("Para un array de %d posiciones seria:\n",POS);

	int arr[POS];

	for (int i =0; i < POS; i++) {
		if (i == 0) {
			arr[i] = 1;
		}
		else if (i == 1) {
			arr[i] = 2;
		}else {
			arr[i] = arr[i - 1] + arr[i - 2];
		}
	}


	for (int i = 0; i < POS; i++) {
		printf("posicion %d esta el valor %d\n", i, arr[i]);
	}


	int pos = 0;
	do {
		printf("dame una posicion  entre 0 y %d y te dire el valor;",POS-1);
		scanf_s("%d", &pos);
		if (pos > 0 && pos < POS) {
			printf("EL valor es: %d \n", arr[pos]);
		}
	} while (pos>= 0 && pos < POS);

	printf("Metio una posicion fuera de rango Finalizo el programa ");

}

