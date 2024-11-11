




#include<stdio.h>
#include<Windows.h>
#define POS 5
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
/*
10) Escribir un programa que cargue una tabla de 10 elementos, la ordene por SELECCION, y a
continuación muestre un informe como el siguiente.
Posición suma siguientes
0 Tabla[0]+…+Tabla[9]
1 Tabla[1]+…+Tabla[9]
………
9 tabla[9]
______________________________
total Suma de esta columna.
Donde suma siguientes es, para cada celda, la suma de los contenidos de las posiciones
siguientes a ella y el total es la suma de la columna suma siguientes
*/


	// CARGO EL ARRAY
	int arr[POS];
	for (int i = 0; i < POS; i++) {
		printf("Dame el valor: %dº;\n", i);
		int num;
		scanf_s("%d", &arr[i]);
	}



	//ORDENO:
	for (int i = 0; i < POS - 1; i++) {
		int posMin=i ;
		int aux;
		for (int j = i + 1; j < POS; j++) {
			if (arr[posMin] > arr[j]) {
				posMin = j;
			}
		}
		aux = arr[i];
		arr[i] = arr[posMin];
		arr[posMin] = aux;
	}




	// IMPRIMO
	// 
			//para imprimir antes calculo el total de la suma de los valores para pdoer despue imprimirla como pide

			int sumaTotal = 0;
			for (int i = 0; i < POS; i++) {
			sumaTotal = sumaTotal + arr[i];
			}
			int sumaTotalfinal = 0;

			//imprimo

			printf("%20s %20s \n","POSICION","SUMA SIGUIENTES");
			for (int i = 0; i < POS; i++) {
				sumaTotalfinal = sumaTotalfinal + sumaTotal;
				printf("%20d esta el %20d \n", i, sumaTotal);
				sumaTotal = sumaTotal - arr[i];
			
			}
			printf("%20s es %20d \n", "Totla suma", sumaTotalfinal);














}

