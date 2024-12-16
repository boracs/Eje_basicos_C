




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


	char numero[10] = "100";
	printf("Dame un numero en binario de 9 cifras:\n");
	// hago que pregunte hasta que introduzca  todo cero y unos
	int existeAlgunoDiferente = 1;
	do {
		gets(numero);
		//inicializo la variable existeAlgunoDiferente = 1 aqui;
		existeAlgunoDiferente = 0;
		//miro que todos los numero sean 0 o 1 
		for (int i = 0; i < strlen(numero); i++) {
			if (numero[i] != '0') {
				if (numero[i] != '1') {
					existeAlgunoDiferente = 1;
				}
			}
		}
	} while (existeAlgunoDiferente == 1);
	printf("Numero correcto procedemos...\n");



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
		cont++;
	}
	printf("El numeor es %d", numeroConvertido);
}

