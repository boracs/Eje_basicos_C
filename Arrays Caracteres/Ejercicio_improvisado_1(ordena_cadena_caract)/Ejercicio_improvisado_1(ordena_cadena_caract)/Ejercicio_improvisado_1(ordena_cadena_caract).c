




#include<stdio.h>
#include<Windows.h>
#define NPAL 5
#define TAM 25
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	char palabras[NPAL][TAM];
	char aux[25];

	//pido palabras
	for (int i = 0; i < NPAL; i++) {
		printf("Dame la %d palabra:\n", i);
	    gets(palabras[i]);
	}

	//ordeno las palabras
	for (int i = 0; i < NPAL-1; i++) {

		for (int j = i; j < NPAL-1; j++){


			char aux[TAM];
			//si el primer parametro es es menor me da negativo
			if (strcmp(palabras[j], palabras[j+1])> 0) {
				strcpy_s(aux, strlen(palabras[j]) + 1, palabras[j]);
				strcpy_s(palabras[j], strlen(palabras[j+1])+1, palabras[j+1]);
				strcpy_s(palabras[j + 1], strlen(aux) + 1, aux);
			}
		}
	}
	 //muestro palbras del aray de array de caracteres
	printf("\n"); printf("\n");
	for (int i = 0; i < NPAL; i++) {
		printf(palabras[i]);
		printf("\n");
	}
}

