
#include<stdio.h>
#include<Windows.h>
#define POS1 10
#define POS2 5

main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	//---------------------------------------------------------------------------------------
	// Pide al usuario que te carge un array de 10 posiciones.
	// Ordename el array usando el metodo que tu prefieras. 
			// - selecciomn 
			// -burbuja
	// Carga otro array de 5 posiciones;
	// Dime  cuantos digitos de este segundo array estan en el primer array y cuantos no
	//---------------------------------------------------------------------------------------

	//defino el array
	/*
	int tabla[POS1];
	//cargarlo
	for (int i = 0; i < POS1; i++) {
		printf("Dime en la posicion %d que dgito quieres meter:\n", i);
		scanf_s("%d", & tabla[i]);
	}
	*/
	int tabla[POS1] = { 3,5,1,2,7,8,6,9,21,11};
	// 1,2,3,4,5,6...
	// 21,11,9,8,7,...

	//Ordenacion metodo seleccion ascendente 

	for (int i = 0; i < POS1; i++) {
		int posMin = i;
		for (int j = i + 1; j < POS1; j++) {
			if (tabla[posMin] > tabla[j]) {
				posMin = j;
			}
		}
		int aux = tabla[i];
		tabla[i] = tabla[posMin];
		tabla[posMin] = aux; 
	}

	//creoun segundo array
	int arr[POS2] = { 4,7,3,2,9 };
	int encontrados = 0;
	int noEncontrados = 0;

	for (int i = 0; i < POS2; i++) {

		int inf = 0;
		int sup = POS2-1;
		int med =(inf + sup)/2;

		while (inf < sup && arr[med] != arr[i]) {
			if (arr[i] > arr[med]) {
				inf = med+1;
			}else if (arr[i] < arr[med]) {
				sup = med-1;
			}
			med = (sup + inf) / 2;
		}


		if (arr[med] == arr[i]) {
			encontrados++;
			printf("Se encontro el %d\n", arr[i]);
		}
		else {
			noEncontrados++;
			printf("Nos se encontro el %d\n", arr[i]);
		}
	}


	printf("Hay %d numeros en el segundo aray que tambien se encuentran en el primero\n", encontrados);
	printf("Hay %d numeros en el segundo aray que no se encuentran en el primero\n", noEncontrados);



	//imprimo el array
	for (int i = 0; i < POS1; i++) {
		printf("posicion %d tiene valor: %d\n", i, tabla[i]);
	}


}

