




#include<stdio.h>
#include<Windows.h>
#define POS 6
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);




//Escribir un programa que cargue números en una tabla, validando que cada número sea
//mayor que el anterior. Pedir 10 números y decir cuántos de ellos estaban en la tabla y
//cuántos no. Probarlo también con búsqueda binaria.


	int arr[POS];


	//INTRODUZCO VALORES AL ARRAY DE 6 POSICIONES
	printf("dame un numeor para rellenar el arrya en al posicion %d:", 0);
	int num;
	scanf_s("%d", &num);
	arr[0] = num;

	for (int i = 1; i < POS; i++) {
		printf("dame un numeor para rellenar el arrya en al posicion %d:", i);
		int num;
		scanf_s("%d", &num);
		while (num < arr[i-1]) {
			printf("_____ERROR_____El numeor es menor que le anterior, introduzca otro:");
			printf("dame un numeor para rellenar el arrya en al posicion %d:",i);
			scanf_s("%d", &num);
		}
		arr[i] = num;
	}

	//PDO NUMOERS Y COMPRUEBO SI ESTAN  ( CON BUSQUEDA BINARIA ) 






	int pinf = 0;
	int psup = POS-1;
	int pmed;
	int existe;
	int numbuscado;

	printf("dame un numeor parqa saber si esta dentor del array");
	scanf_s("%d", &numbuscado);


	while (pinf <= psup && pmed != numbuscado) {

	}



	if (pmed == numbuscado) {
		existe = 1;
	} else {
		existe = 0;
	};










}

