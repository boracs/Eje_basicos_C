#include<stdio.h>

main() {



	/*
	1) Se quiere realizar un programa que pida un número y
			i) Si el número es positivo mostrar la tabla de multiplicar de ese número por los
			números anteriores a él, empezando desde el 1
			(ej: 5 → 5*1, 5*2, 5*3, 5*4, 5*5)
			ii) Si el número es negativo mostrará la tabla de multiplicar de ese número, por los
			posteriores a él, empezando desde él mismo hasta llegar a –1 (incluido).
			(ej: -5→ -5*-5, -5*-4, -5*-3, -5*-2, -5*-1)
*/
	printf("Dame un numero");
	int numIntro = 0;
	do {
		scanf_s("%d", &numIntro);

		if (numIntro > 0) {
			for (int i = 0; i <= numIntro; i++) {

				int numeorAImprimir = numIntro * i;
				printf("%d", numeorAImprimir);
			}
		}

		else if (numIntro < 0) {
			for (int i = 0; i <= numIntro; i++) {

				int numeorAImprimir = numIntro * i;
				printf("%d\n", numeorAImprimir);
			}
		}


	} while (numIntro =! 0);


}

