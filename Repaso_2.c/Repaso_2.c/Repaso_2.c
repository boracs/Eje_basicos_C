#include<stdio.h>
#include <stdbool.h>

main() {

	// ejercicio 1: 

	/*
			1) Se quiere realizar un programa que pida un número y
			i) Si el número es positivo mostrar la tabla de multiplicar de ese número por los
			números anteriores a él, empezando desde el 1
				(ej: 5 → 5 * 1, 5 * 2, 5 * 3, 5 * 4, 5 * 5)
				ii) Si el número es negativo mostrará la tabla de multiplicar de ese número, por los
				posteriores a él, empezando desde él mismo hasta llegar a –1(incluido).
				(ej: -5→ - 5 * -5, -5 * -4, -5 * -3, -5 * -2, -5 * -1)
	*/

	/*
	printf("Dame un numero");
	int numIntro = 0;
	do {
		scanf_s("%d", &numIntro);

		if (numIntro > 0) {
			for (int i = 0; i <= numIntro; i++) {

				int numeorAImprimir = numIntro * i;
				printf("%d,\n", numeorAImprimir);
			}
		}

		else if (numIntro < 0) {
			for (int i = 0; i <= numIntro; i++) {

				int numeorAImprimir = numIntro * i;
				printf("%d\n,", numeorAImprimir);
			}
		}
	} while (numIntro = !0);
	*/


	//Ejercicio2:
		// 2) Realizar un programa que pida un número, saque por pantalla su tabla de multiplicar.
		// Preguntar si se quiere repetir y hacerlo en caso afirmativo.

	/*

	bool pregunta = true;
	int preguntaNum;

	do {
		if (pregunta = true) {

			printf("Dame el numero del que quieres la tabla de multiplicar:");
			int multiplo;
			scanf_s("%d", &multiplo);

			for (int i = 0; i <= 10; i++) {
				int numeorAImprimir = multiplo * i;
				printf("%d,\n", numeorAImprimir);
			}
		}
		printf("Introduce si deseas continuar  SI  presione  1 o  NO presione  0) ?");
		scanf_s("%d", &preguntaNum);

		if (preguntaNum == 1) {
			pregunta = true;
		}
		else {
			pregunta = false;
		}


	} while (pregunta);

	*/


	//Ejercicio3: 
	// 3) Realizar un programa que pida 20 números y que muestre su media y su suma.

	/*
	int media;
	int suma=0;
	for (int i = 0; i < 3; i++) {
		printf("Dame el numero %d ", i);
		int num;
		scanf_s("%d", &num);
		suma = suma + num;
	}
	 media = suma / 3;
	printf("la media es %d y la suma es %d", media, suma);

	*/

	//Ejercicio 4:

	// 4) Realizar un programa que pida números hasta introducir el 0 y al final mostrar el mayor y el menor de los números introducidos.

	/*
	int num = 1;
	int max =-300000;
	int min = 10000000;
	while (num != 0) {
		printf("dame un numero");
		scanf_s("%d", &num);
		if (num < min) {
			min = num;
		}
		if (num > max) {
			max = num;
		}
	}
	printf("El numeor maximo es %d, y el minimo es %d", max, min);

	*/


//Ejercicio 5: 

	// 5) Diseñar y codificar un programa que pida por teclado los siguientes datos:
	/*
		 Capital inicial: capital con el que se cuenta actualmente. Cantidad invertida.
	Interés: porcentaje que produce anualmente la cantidad invertida.
	Años: tiempo que se pretende tener invertido el capital.
	Y muestre un informe como el siguiente:
	Año Capital acumulado
	1 xxx,xxx.xx
	2 xxx,xxx.xx
	....
	Donde el capital acumulado en cada periodo i es el capital acumulado del periodo anterior +
	interés / 100 * capital acumulado del periodo anterior:
	Ej: Año = 3
	 Interés: 5
	 Capital inicial = 100000
	 Año Capital acumulado.
		1 105,000.00
		2 110,250.00
		3 115,762.50
	*/

/*
printf("Dame el capitla inicial:");
int cap; 
scanf_s("%d", &cap);

printf("Dame cual es el interes:");
int inte;
scanf_s("%d", &inte);

printf("Dame los agnos:");
int agnos;
scanf_s("%d", &agnos);

printf("%-10s %-10s \n", "Agno","Capital acumulado");




for (int i = 1; i <= agnos; i++) {

	int capInt = inte * cap/100;
	int total = cap + capInt;
	cap = total;

	printf("%-10d %-10d \n", i, total);

}
*/







}