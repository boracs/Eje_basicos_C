




#include<stdio.h>
#include<Windows.h>
#define CARACTERES 100
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	/*
		20) Escribir un programa que cargue una frase, pida una letra y nos muestre un informe como el
		siguiente.
		Palabra Veces
		Xxxx xxxx
		Donde cada línea muestra cada una de las palabras de la frase y el número de veces que
		aparece la letra pedida en cada palabra.
	*/

	char frase[CARACTERES];

	//pido una frase
	printf("dame una frase");
	gets(frase);
	//pido una letra;
	printf("dam euna letra y t edire cada palabra cuantas veces la contiene");
	char letra;
	scanf_s("%c", &letra,1);

	int posFrase =0;
	char palabra[20] = "";
	int posPalabra = 0;


	while (frase[posFrase] != '\0') {
		int nueva = 0;
		if (frase[posFrase] ==' ') {
			int veces = 0;
			//cuentos cuantas veces tiene la pelabra  dicha letra
			for (int g = 0; g < strlen(palabra); g++) {
				if (palabra[g] == letra) {
					veces++;
				}
			}
			printf("%20s %20d", palabra, veces);
			memset(palabra, '\0', sizeof(palabra)); //que array, porque valor  lo cambio y el tamaño que tiene
			nueva = 1;
		}
		else if (nueva == 0 && isalpha(frase[posFrase])) {
			palabra[posPalabra] = frase[posFrase];
			posPalabra++;
			nueva=0;
		}
		posFrase++;
	}
}

