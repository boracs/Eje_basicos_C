
#include<stdio.h>
#include<Windows.h>
#define Vend 5
#define Art 10

main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	/*
		39)Tenemos 5 vendedores y 10 artículos. Escribir un pragrama que pida Nº de
		Vendedor, Nº de Artículo y Unidades vendidas, y cuando tecleen 0 al pedir el Nº de
		Vendedor que visualice el siguiente informe:

		Nº Vendedor:
		Nº Artículo Unidades vendidas
		1
		2
		3
	*/
	//asigno a todo vlaores = a 0 
	int ventas[5][10];
	for (int i = 0; i < Vend; i++) {
		for (int j = 0; j < Art; j++) {
			ventas[i][j] = 0;
		}
	}

	//pregunto primera vez numVend

	int numVend;
	do {
	printf("Dame el numero del vendero Valido entre el 1 y el 5");
	scanf_s("%d", &numVend);
	if (numVend > 5 || numVend < 0) {
		printf("ERROR____dme un num de venderdor VALIDO");
	}
	} while (numVend > 5 || numVend < 0);


	while (numVend!=0) {
		numVend = numVend - 1;
		//obtengo articulo
		int numArt = 1;
		do {
			printf("Dame el numero del articulo entr el 1 y el 10");
			scanf_s("%d", &numArt);
			if (numArt < 0 || numArt > 10) {
				printf("____ERROR___Introduce un numero de articulo VALIDO");
			}
		} while (numArt < 0 || numArt > 10);

		//obtengo cantidad
		printf("Dame el numero de unidades");
		int cant;
		scanf_s("%d", &cant);

		//actualizo valores
		numArt = numArt - 1;
		for (int i = 0; i < Vend; i++) {
			if (numVend == i) {  //si el numero del vendedor es este
				for (int j = 0; j < Art; j++) {  //me buscas el articulo
					if (numArt == j) {   //si es este el articulo 
						ventas[i][j] = ventas[i][j] + cant;  // le suma las unidades que quiero a lo que tenia
					}
				}
			}
		}
		//vuelvo a preguntar numVend
		do {
			printf("Dame el numero del vendero Valido entre el 1 y el 5");
			scanf_s("%d", &numVend);
			if (numVend >= 5 || numVend < 0) {
				printf("____ERROR___Introduce un numero de vendedor VALIDO \n");
			}
		} while (numVend >= 5 || numVend < 0);
	}

	//imprimo informe
	for (int i = 0; i < Vend; i++) {
		printf("%20s:%d \n", "Nº vendedor:", i + 1);
		printf("%20s %20s", "Nº articulo", "Unidades Vendidas\n");
		printf("%20s", "----------------------\n");

		for (int j = 0; j < Art; j++) {
			printf("%20d, % 20d\n", j+1, ventas[i][j]);
		}

	}




}