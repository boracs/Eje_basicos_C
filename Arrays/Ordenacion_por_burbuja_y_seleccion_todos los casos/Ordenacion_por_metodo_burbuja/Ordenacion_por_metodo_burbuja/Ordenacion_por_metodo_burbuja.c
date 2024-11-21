
#include<stdio.h>
#include<Windows.h>
#define POS 10

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	//creo el array
	int arr[POS] = { 110, 99, 3, 1, 101 ,2 ,5 ,8 ,15 ,21 };

/*
	INDICE:
	1- BURBUJA ASC mayor al final ( para hacer descendente simplemente cambio e simbolo en el condicional de comparacion `<`)
	2- BURBUJA ASC menor al principio ( para hacer descendente simplemente cambio e simbolo en el condicional de comparacion `<`)
	3- SELECCION ASC el primeor con el resto ( para hacer descendente simplemente cambio e simbolo en el condicional de comparacion `<`)
	4- SEÑECCION ASC el ultimo con le resto ( para hacer descendente simplemente cambio e simbolo en el condicional de comparacion `<`)

 */
	

//----------------------------------------------------BURBUJA----ASC-------------------------------------------------------

	// 1º-  metodo ordenacion BURBUJA ascendente  llevando el mayor al final
	// { 110, 99, 3, 1, 101 ,2 ,5 ,8 ,15 ,21 };
	// { 99, 3, 1, 101, 2, 5, 8, 15, 21, 110 };
	// { 99, 3, 1, 2, 5, 8, 15, 21,101, 110 };
    //  { 3, 1, 2, 5, 8, 15, 21, 99, 101, 110 };
	/*
	for (int i = 0; i < POS-1; i++) {

		for (int j = 0; j < POS-i-1; j++) { //valores de j e i comprbar  ( -1 porque j no tengo que comprobar hasta le final 
											  //hago -i pork los ultimso valores ya etsa ordenados
											  // sino cuando hago j+ me salog del array
			if (arr[j] > arr[j + 1]) {		  // esta bien seguro 
				int aux = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = aux;
			}
		}
	}
	*/
//----------------------------------------------------BURBUJA----ASC-------------------------------------------------------------

	// 2º- metodo ordenacion burbuja ascendente  llevando el menor al principio
	// { 110, 99, 3, 1, 101 ,2 ,5 ,8 ,15 ,21 };
	// { 1, 110, 99, 3, 101 ,2 ,5 ,8 ,15 ,21 };
	// { 1, 2, 110, 99, 3, 101 ,5 ,8 ,15 ,21 };
	// { 1, 2, 3, 110, 99, 101 ,5 ,8 ,15 ,21 };
	/*
	for (int i = 0; i<POS-1; i++) {
		for (int j = POS - 1; j >= 0+i+1; j--) {
			if (arr[j] < arr[j-1]) {		  
				int aux = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = aux;
			}
		}
	}
	*/

//-------------------------------------------------SELECCION------ASC----------------------------------------------------------------

	// 3º metodo ordenacion seleccion ascendente comparando el primero que sea menor que e resto y si no lo es se cambia.

	// { 110, 99, 3, 1, 101 ,2 ,5 ,8 ,15 ,21 };
	// { 1, 110 , 99, 3, 101 ,2 ,5 ,8 ,15 ,21 };
	// { 1, 2 110, 99, 3 , 101  ,5 ,8 ,15 ,21 };
	/*
		for (int i = 0; i < POS-1; i++) {
			int posMin = i;
			for (int j = i; j < POS; j++) {
				if (arr[posMin] > arr[j]) {  //ojo FALLO TIPICO  tengo k comparar arr[posMin] ( NO arr[i] )
					posMin = j;
				}
			}
			int aux = arr[posMin];
			arr[posMin] = arr[i];
			arr[i] = aux;
		}
	*/

//--------------------------------------------------SELECCION-------ASC---------------------------------------------------------------
	
	//4º  metodo ordenacion seleccion ascendente  comparando el ultimo  que sea mayor que el resto y si no lo es se cambia.
	
	// { 110, 99, 3, 1, 101 ,2 ,5 ,8 ,15 ,21 };
	// { 99, 3, 1, 101 ,2 ,5 ,8 ,15 ,21 , 110};
	// { 3, 1, 101 ,2 ,5 ,8 ,15 , 21 ,99 , 110};
	/*
		for (int i = 0; i < POS-1; i++) {
			int posMax = POS-i-1;
			for (int j =0; j < POS-i; j++) {
				if (arr[posMax] < arr[j]) {  
					posMax = j;
				}
			}
			int aux = arr[posMax];
			arr[posMax] = arr[POS-i-1];
			arr[POS-i-1] = aux;
		}
	*/

//------------------------------------------------------------------------------------------------------------------------------------

	// imprimo array
	for (int i = 0; i < POS; i++) {
		printf("La posicion % dº es el %d\n", i, arr[i]);
	}
}

