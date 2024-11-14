



#include<stdio.h>
#include<Windows.h>
#define POS 6
main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	//inicializo el arrya con valors previos
	int arr[POS] = { 1,5,6,3,4,2 };


	//ordeno al tabla primera manera por SELECCION: 

	int min = 0;
	int aux;

	// primer bucle recorro todo el array
	for (int i = 0; i < POS - 1; i++) {  //no coges el ultimo valro porque al ser el ultimo ya esta ordenado 
		min = i;
		//busco el valor minimo del array a partir de i 
		//por cada valor del array voy a recorrer los valores que quedan delante y me quedo con el minimo
		for (int j = i + 1; j < POS; j++) {
			if (arr[j] < arr[min]) { // con j recorro cada posicion del arr que queda por delnte y cmparo si es - o no que el valor que hay en el arr[min]
				min = j; //cojo la posicion del valor minimo
			}
		}
		//busco
		aux = arr[min];
		arr[min] = arr[i];
		arr[i] = aux;
	}

	//ordeno
	for (int i = 0; i < POS; i++) {
		printf("el %dº numero es %d \n", i, arr[i]);
	}








}


}

