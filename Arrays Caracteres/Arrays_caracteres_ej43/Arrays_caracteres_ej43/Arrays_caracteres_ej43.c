


#include<stdio.h>
#include<Windows.h>
#define TAM 200


main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	// 43)Escribir un programa que pida una frase y visualice la primera palabra.


	char frase[TAM];
	int vocales = 0;
	int letras = 0;

	printf("FRASE:");
	gets(frase);
	printf("\n");
	printf("'%s'", frase);
	printf("\n");

	for (int i = 0; i < TAM; i++) {
		frase[i] = tolower(frase[i]);
	}
	printf("'%s'", frase);
	printf("\n");


	printf("La primera palabra es:");

	int cont = 0;
	while (frase[cont] != ' ') {
		printf("%c", frase[cont]);
		cont++;

	}



}

