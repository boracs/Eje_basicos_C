




#include<stdio.h>
#include<Windows.h>
#define TAM 100000


main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	// 44)Escribir un programa que pida una frase y visualice una palabra en cada l�nea.
	char frase[TAM] = "as";
	
	gets(frase);
	
	
	for (int i = 0; frase[i]!= '\0'; i++) {
		printf("%c", frase[i]);
		if (frase[i] == ' ') {
			printf("\n");
		}
	}


}

