
#include<stdio.h>
#include<Windows.h>
#define TAM 200

main() {

	/*40)Escribir un programa que pida una frase, y visualice el nº de caracteres(letras) y el nº de
vocales que tiene.*/

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char frase[TAM];
	int vocales = 0; 
	int letras = 0;

	printf("FRASE:");
	gets(frase);
	for (int i = 0; frase[i] != '\0'; i++) {
		frase[i] = tolower(frase[i]);
	}




	for (int i = 0; frase[i]!= '\0'; i++) {
		if (frase[i] >= 'a' && frase[i <= 'z']) {
			if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
				vocales++;
			}
			letras++;
		}
	}

	printf("La frase tiene %d letras de las que  %d son vocales", letras, vocales);

}

