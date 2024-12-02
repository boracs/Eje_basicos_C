
#include<stdio.h>
#include<Windows.h>
#define TAM 200

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	//  42)Escribir un programa que pida una frase y visualice el nº de vocales, nº de consonantes y nº de espacios en blanco que tiene.


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

	//RECORRO Y CUENTO LAS VOCALE SY CONSONANTE SY ESPACIOS
		//CUETNO EL NUMEOR MDE POSICIONES QUE TIENE
	int vocales = 0;
	int consonantes = 0;
	int espacios = 0;
	for (int i = 0; frase[i] != '\0'; i++) {
		if (frase[i] < 'z' && frase[i]>'a') {
			if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
				vocales++;
			}
			else {
				consonantes++;
			}
		}
		else if (frase[i] == ' ') {
			espacios++;
		}

	}
	printf("Hay %d espacios %d vocales %d consontantes", espacios, vocales, consonantes);





}




