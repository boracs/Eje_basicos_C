




#include<stdio.h>
#include<Windows.h>
#define PALABRAS 5
#define LETRAS 20
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	/*
	18) Escribir un programa que cargue un array de palabras y muestre el siguiente informe.
	Palabra longitud
	Xxxx xxxxx
	Donde aparece una palabra en cada línea junto con el número de letras de esa palabra.
	*/



	char palabras[PALABRAS][LETRAS];

	for (int i = 0; i < PALABRAS; i++) {
		printf("Dame la %d palabra \n", i+1);
		gets(palabras[i]);
	};
	printf("%20s %20s \n", "PALABRAS", "LONGITUD");

	for (int i = 0; i < PALABRAS; i++) {

		printf("%20s %20d \n", palabras[i], strlen(palabras[i]));
		


	}









}

