




#include<stdio.h>
#include<Windows.h>
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);



	/*
	15) Escribir un programa que lea del teclado un número representado en binario y lo convierta a
	decimal, suponiendo que el número está representado por una cadena de caracteres
	numéricos.
	*/


	char numero[9] = "100";
	printf("Dame un numero en binario de 9 cifras:\n");
	int correcto = 1;

	 // valido que introduzca cero y unos
	do {
		gets(numero);
		for (int i = 0; i < strlen(numero); i++) {
			if (numero[i] != 0) {
				if (numero[i] != 1) {
					correcto = 0;
				}
			}
		}
	} while (correcto == 0);
	if (correcto == 1) {
		printf("Numero correcto procedemos:\n");
	}



	//obtengo el numero de un numero decimal:

	int posicionamiento = 256;
	int cont = 0;
	int numeroConvertido = 0;

	while (posicionamiento != 0) {
		if (numero[cont] == '1') {
			numeroConvertido = numeroConvertido + posicionamiento;
		}
		else {
		}
		posicionamiento = posicionamiento / 2;
	}


	printf("El numeor es %d", numeroConvertido);


}

