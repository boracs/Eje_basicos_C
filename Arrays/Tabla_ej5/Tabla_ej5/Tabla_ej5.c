




#include<stdio.h>
#include<Windows.h>
#define POS 9  // hasta el numeor  256 o 2 elevado a 9
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int arrBin[POS];

	/*5) Escribir un programa que convierta una tabla de 0 y 1 en su representación decimal.
	*/



	for (int i = 0; i < POS; i++) {
		printf("Mete el %dª digito", i+1);
		int dig;
		int cont = 0;
		do {
			scanf_s("%d", &dig);
			cont++;
			arrBin[i] = dig;
			if (dig < 0 || dig>1 || cont > 9) {
				printf("ERROR_");
			}
		} while (dig < 0 || dig>1 || cont > 9);

	}

	// imprimo el array para verlo

	for (int i = 0; i < POS; i++) {
		printf("%d", arrBin[i]);
	}
	printf("\n"); //salto de linea



	//convierto de binario a numerico
	int arrDig[POS];

	int div = 256;
	int num = 0;

	for (int i = 0; i < POS; i++) {

		if ( arrBin[i] == 1) {
			num = num +  div;
			div = div / 2;
		}
		else {
			arrBin[i] = 0;
			div = div / 2;
		}
	}

	//imprimo el numero 

	printf("%d", num);




}

