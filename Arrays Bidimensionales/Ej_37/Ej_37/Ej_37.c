
#include<stdio.h>
#include<Windows.h>
#define Fil 5
#define Col 3
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	/*
	37)Escribir un programa para cargar una tabla de dos dimensiones de 5 por 3 y
	visualizar la suma de cada una de sus filas.
	*/
	int tabla[Fil][Col];

	//cargo el arrray bidimiensional
	for (int i = 0; i < Fil; i++) {
		for (int j = 0; j < Col; j++) {
			printf("Meter dato en tabla [%d] [%d]\n", i, j);
			scanf_s("%d", &tabla[i][j]);
		}
	}
	//dibujo el arraybidimensional
	
		
	for (int i = 0; i < Fil; i++) {
		for (int j = 0; j < Col; j++) {
			printf("_%d_", tabla[i][j]);
		}
		printf("\n");
	}
	//calculo las sumas de sus filas
	for (int i = 0; i < Fil; i++) {
		int suma = 0;

		printf("La suma de la fila %d es\n", i);
		for (int j = 0; j < Col; j++) {

			suma = suma + tabla[i][j];
		}

		printf("_%d_", suma);
		printf("\n");
	}












}

