
#include<stdio.h>
#include<Windows.h>
#define TAM 200

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

//	41)Escribir un programa que pida una frase y la visualice al revés.

	//INICIALI<ZO Y METO VALOR A FRASE
	printf("Escribe una frase:");
	char frase[TAM];
	gets(frase);

	//RECORRO FRASE  Y LO PASO A MINUSCULAS
	for (int i = 0; frase[i] != '\0'; i++) {
		printf("Letra %d", 1);
		printf("%c -", frase[i]);
		frase[i] = tolower(frase[i]);
		printf("%c\n", frase[i]);
	}
	printf("%s\n", frase);

	//LO IMPRIMO INVERTIDO 
		//CUETNO EL NUMEOR MDE POSICIONES QUE TIENE
	int longFrase = 0;
	for (int i = 0; frase[i] !='\0'; i++) {
		longFrase++;
	}
		//RECORRO EL ARRYA DESDE ESA POSICION ULTIMA HASTA QUE SEA 0
	for (int i = longFrase; i>0; i--) {
		printf("%c", frase[i]);
	}





}




