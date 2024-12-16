




#include<stdio.h>
#include<Windows.h>
#define PALABRAS 5
#define LETRAS 20
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	/*
	19) Escribir un programa que cargue un array de palabras, pida una letra y nos muestre un
	informe como el siguiente.
	Palabra Veces
	Xxxx    xxxx
	*/

	char palabras[PALABRAS][LETRAS];

	for (int i = 0; i < PALABRAS; i++) {
		printf("Dame la %d palabra \n", i + 1);
		gets(palabras[i]);
	};

	printf("Dame una letra y te dire cuantas veces la contiene cada palabra");
	char letra;
	scanf_s("%c", &letra,1);
	 
	printf("%20s %20s \n", "PALABRA", "VECES");

	for (int i = 0; i < PALABRAS; i++) {
		int existe = 0;
		for (int j = 0; j < strlen(palabras[i]); j++) {
			if (letra == palabras[i][j]) {
				existe++;
			}
		}
		printf("%20s %20d\n", palabras[i], existe);
	}












}

