

#include<stdio.h>
#include<Windows.h>
#define POS 4

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	/*
8) Escribir un programa que cargue una tabla de 10 elementos, la ordene por selección, y a
continuación muestre un informe como el siguiente.
Posición suma anteriores
0 Tabla [0]
1 Tabla[0]+Tabla[1]
9 Tabla[0]+…+Tabla[9]
______________________________
total Suma de esta columna.
Donde suma anteriores es, para cada celda, la suma de los contenidos de las posiciones
anteriores a ella y el total es la suma de la columna suma anteriores.
*/
	//INICIALIZO
	int array[POS];


	//CARGO EL ARRAY CON VALORES
	for (int i = 0; i < POS; i++) {
		printf("Mete el valor %d;", i);
		int num;
		scanf_s("%d", &num);
		array[i] = num;
	}


	//ORDENO
	for (int i = 0; i < POS-1; i++) {
		int posMin=i;
		int aux;
		for (int j=(i+1); j < POS; j++) {
			if (array[j] < array[posMin]) {
				posMin = j;
			}

		}
		aux = array[i];
		array[i] = array[posMin];
		array[posMin] = aux;
	}


	//IMPRIMO el array ordenado
	int arr[POS];
	printf("%20s %20s\n", "POSICION", "SUMA ANTERIOR");
	int sumaTotla = 0;
	int totalisimo = 0;
	for (int i = 0; i < POS; i++) {
		sumaTotla = sumaTotla + array[i];
		totalisimo = totalisimo + sumaTotla;
		printf("%20d %20d\n", i, sumaTotla);
	}
	printf("%20s %20d\n", "total", totalisimo);



}

