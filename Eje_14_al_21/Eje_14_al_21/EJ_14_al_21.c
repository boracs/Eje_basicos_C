#include <stdio.h>

/*
14)Escribir un programa que visualice los 100 primeros números.
15)Escribir un programa que visualice la media de los números del 1 al 100.
16)Escribir un programa que visualice los números pares comprendidos entre 1 y 100.
17)Escribir un programa que visualice los números impares entre 100 y 1.
18)Escribir un programa que visualice los números divisibles por 3 entre 1 y 100.
19)Escribir un programa que pida un numero entero y visualizar todos los números
anteriores a él.
20)Escribir un programa que visualice la tabla de caracteres ASCII correspondiente a
los valores del 32 al 127 y del 128 al 255. Indicando el valor y su caracter
21)Escribir un programa que pida Capital y años de amortización, y visualice el
siguiente informe:
*/
main() {

	//	14)Escribir un programa que visualice los 100 primeros números.
		/*
		for (int i = 0; i <= 100; i++) {
			printf("El numero: %d\n", i);
		}
		*/

		//	15)Escribir un programa que visualice la media de los números del 1 al 100.
			/*
			int suma = 0;
			for (int i = 0; i <= 100; i++) {
				suma = suma + i;
			}
			int avg = suma / 100;
			printf("la media de la suma de los numeros del 1 al 100 es: %d", avg);

			*/



			//	16)Escribir un programa que visualice los números pares comprendidos entre 1 y 100.

				/*
				for (int i = 0; i <= 100; i++) {
					if (i % 2 == 0) {
						printf("%d\n", i);
					}
				}
				*/


				//	17)Escribir un programa que visualice los números impares entre 100 y 1.

					/*
					for (int i = 0; i <= 100; i++) {
						if (i % 2 != 0) {
							printf("%d\n", i);
						}
					}
					*/


					// 18)Escribir un programa que visualice los números divisibles por 3 entre 1 y 100.

					/*
					for (int i = 0; i <= 100; i++) {
						if (i % 3 == 0) {
							printf("%d\n", i);
						}
					}
					*/


					// 19)Escribir un programa que pida un numero entero y visualizar todos los números anteriores a él.

					/*
					printf("dame un numero");
					int num;
					scanf_s("%d", &num);
					for (int i = 0; i < num; i++) {
							printf("%d\n", i);
					}

					*/


					//20)Escribir un programa que visualice la tabla de caracteres ASCII correspondiente a los valores del 32 al 127 y del 128 al 255. Indicando el valor y su caracter

					/*
					for (int i = 32; i <= 255; i++){
						printf("el numero %d tiene el codigo %c\n", i, i);
					}
					*/


		
			// 21)Escribir un programa que pida Capital y años de amortización, y visualice elsiguiente informe :
			/*
					int capital;
					printf("Dame el capital");
					scanf_s("%d", &capital);

					int agnos;
					printf("Dame el periodo de amortizacion");
					scanf_s("%d", &agnos);

					int cantAnual = capital / agnos;

					printf("AGNO     CAPITAL APORTADO     RESTANTE \n");
					for (int i = 0; i <agnos; i++) {
						capital = capital - cantAnual;
						printf(" %1d %15d  %15d\n", i, cantAnual, capital);
					}
		
			*/

}