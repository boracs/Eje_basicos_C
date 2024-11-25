




#include<stdio.h>
#include<Windows.h>
#include <stdlib.h>
#include <time.h>
#define FIL 5
#define COL 5

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	srand(time(0));
	//cargo el array
	int arr[FIL][COL];
	for (int i = 0; i < FIL; i++) {
		for (int j = 0; j < COL; j++) {
		int numero_aleatorio = rand() % 10;
		arr[i][j] = numero_aleatorio;
		}
	}
	//imprmo el array
	for (int i = 0; i < FIL; i++) {
		for (int j = 0; j < COL; j++) {
			printf("-%d-", arr[i][j]);
		}
		printf("\n");
	}

	//veo si es simetrica
	int simetrica = 1;
	for (int i = 0; i < FIL; i++) {
		for (int j = 0; j < COL; j++) {
			if (arr[i][j] != arr[j][i]);
			simetrica = 0;
		}
	}
	if (simetrica == 1) {
		printf("Es simetyrica");
	}
	else {
		printf("No es simetrica");
	}


}

