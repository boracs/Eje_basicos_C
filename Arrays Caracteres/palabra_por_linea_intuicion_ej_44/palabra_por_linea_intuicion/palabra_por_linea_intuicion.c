


#include<stdio.h>
#include<Windows.h>
#define TAM 100000


main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	// 44)Escribir un programa que pida una frase y visualice una palabra en cada línea.
	char frase[TAM] = "Hola   que      tal estas,  quiero saludarte...";
	/*
	gets(frase);
	*/

	int separacion = 0;
	int cantLetras = 0;

	for (int i = 0; frase[i] != '\0'; i++) {


		if (!isalpha(frase[i])) { //si NO es una letra

			if (separacion == 0){ // SI SEP ES 0
				if (isalpha(frase[i-1])) {
					printf("%20s %d letras","tiene", cantLetras);
					cantLetras = 0;
				}
				printf("\n");
				separacion = 1;
			}
		}
		else {
			printf("%c",frase[i]);
			separacion = 0;
			cantLetras++;
		}
	}


}

