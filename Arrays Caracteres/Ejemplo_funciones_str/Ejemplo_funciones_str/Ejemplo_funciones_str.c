




#include<stdio.h>
#include<Windows.h>
#define TAM 256

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	char frase1[TAM] = "UNO";
	int longitud = strlen(frase1)+1;   //guardo en una variable la  cantidad de caracteres de la frase 1 (hago +1 por e ultimo caracter que es null)
	char frase2[TAM];
	strcpy_s(frase2,longitud, frase1);
	printf(frase2);


}

