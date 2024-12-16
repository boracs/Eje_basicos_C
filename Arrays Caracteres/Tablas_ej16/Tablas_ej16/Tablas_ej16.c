




#include<stdio.h>
#include<Windows.h>
#define PALABRAS 100

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	/*
	16) Escribir un programa que pida una frase como argumento y devuelva dicha frase pero con
	las primeras letras de cada palabra convertidas a mayúsculas.
	*/

	printf("Introduce una frase de 5 palabras \n");
	char frase1[PALABRAS] = "";
	char frase2[PALABRAS] = "";
	gets(frase1);
	//oinicializo las variable snecesarias
	int i = 0;
	int dentro = 1;

	while (frase1[i] != '\0') {  //mientras que no acabe la frase
		if (frase1[i] == ' ') {
			dentro = 1;
		    frase2[i] = frase1[i];
		}
		else if(dentro==1) {
			frase2[i] = toupper (frase1[i]);
			dentro=0;
		}
		else {
			frase2[i] = frase1[i];
		}
		i++;
	}

	printf(frase2);











}

