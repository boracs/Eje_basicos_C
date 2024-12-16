
#include<stdio.h>
#include<Windows.h>
#define CARACTERES 100
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	/*
	17) Escribir un programa que pida una frase y cuente cuántas palabras tiene.
	*/
	char frase1[CARACTERES] = "";
	printf("Introduce una frase \n");
	gets(frase1);

	int i = 0;
	int contPalabras =1;
	while (frase1[i] != '\0') {
		if (frase1[i] == ' ') {
			contPalabras++;
		}
		i++;
	}

	printf("La frase tiene %d palabras", contPalabras);

}