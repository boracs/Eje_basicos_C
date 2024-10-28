
#include<stdio.h>
#include<Windows.h>
#define DIAS 5

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	/*
	32)Escribir un programa que pida las temperaturas de cada uno de los días del mes de
	septiembre y visualice el día de más calor y su temperatura y día mas frio y su
	temperatura.
	*/


	//inicializo  y declaor el array
	int arr[DIAS];

	int temMax;
	int posMax;

	int temMin;
	int posMin;

	for (int i = 0; i < DIAS; i++) {
		printf("Dime el dia %d que temperatura hizo;", (i+1));
		int temp;
		scanf_s("%d", &temp);
		arr[i] = temp;
	}

	temMax = arr[0];
	temMin = arr[0];

	for (int i = 1; i < DIAS; i++) {
		if (temMax < arr[i]) {
			temMax = arr[i];
			posMax = i;
		} else if (temMin > arr[i]){
			temMin = arr[i];
			posMin = i;
		}
	}


	printf("La temperatua maxima es: %d en el dia  : %d \n", temMax, posMax+1);
	printf("La temperatua minima es: %d en la posicion : %d \n", temMin, posMin+1);


}

